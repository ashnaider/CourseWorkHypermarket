#include "ownereditcustomersinfo.h"
#include "ui_ownereditcustomersinfo.h"

#include <QMessageBox>
#include <QString>

OwnerEditCustomersInfo::OwnerEditCustomersInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OwnerEditCustomersInfo)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Edit customer's info");

    utilities = new Utilities;

    QString doubleRegEx = utilities->doubleRegEx;
    ui->moneyLineEdit->setValidator(new QRegExpValidator(QRegExp(doubleRegEx), ui->moneyLineEdit));
    ui->totalCostLineEdit->setValidator(new QRegExpValidator(QRegExp(doubleRegEx), ui->totalCostLineEdit));

    // setVisibleAllCustomersFields(false);

    getCustomersInfo();
    setStatusComboBox();
    setCustomersInfoTable();

    this->setFixedSize(this->width(), this->height());
}

OwnerEditCustomersInfo::~OwnerEditCustomersInfo()
{
    delete ui;
}

void OwnerEditCustomersInfo::on_goBackToOwnerButton_clicked()
{
    this->close();
    emit goBackToOwnerWindow();
}

void OwnerEditCustomersInfo::setStatusComboBox() {
    ui->statusComboBox->addItem("regular");
    ui->statusComboBox->addItem("usual");
}

void OwnerEditCustomersInfo::setVisibleRegularCustomersFields(bool set) {
    ui->totalCostLabel->setVisible(set);
    ui->totalCostLineEdit->setVisible(set);

    ui->NameLabel->setVisible(set);
    ui->NameLineEdit->setVisible(set);
}

void OwnerEditCustomersInfo::setVisibleAllCustomersFields(bool set) {
    ui->login->setVisible(set);
    ui->loginLineEdit->setVisible(set);

    ui->passwordLabel->setVisible(set);
    ui->passwordLineEdit->setVisible(set);

    ui->statusLabel->setVisible(set);
    ui->statusComboBox->setVisible(set);

    ui->moneyLabel->setVisible(set);
    ui->moneyLineEdit->setVisible(set);

    ui->cancelPushButton->setVisible(set);

    ui->savePushButton->setVisible(set);

    ui->saveAllPushButton->setVisible(set);

    setVisibleRegularCustomersFields(set);
}


void OwnerEditCustomersInfo::setCustomersInfoTable() {

    QList<QString> qListInfoHeader = utilities->GetProductInfoHeader(infoHeader);

    int rows = totalInfo.size();
    int cols;
    if (rows) {
        cols = totalInfo[0].size();

        ui->customersInfoTableWidget->setRowCount(rows);
        ui->customersInfoTableWidget->setColumnCount(cols);

        ui->customersInfoTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        QHeaderView *header = ui->customersInfoTableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::ResizeToContents);

        ui->customersInfoTableWidget->setHorizontalHeaderLabels(qListInfoHeader);


        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                QString sItem = QString::fromStdString(totalInfo[row][col]);
                QTableWidgetItem *item = new QTableWidgetItem(sItem);
                item->setFlags(item->flags() & ~Qt::ItemIsEditable); // non editable cells
                ui->customersInfoTableWidget->setItem(row, col, item);
            }
        }
    } else {
        // QMessageBox::warning(this, "error", "money file is empty!");
        ui->customersInfoTableWidget->setRowCount(0);
        ui->customersInfoTableWidget->setColumnCount(0);
        return ;
    }

}


void OwnerEditCustomersInfo::on_cancelPushButton_clicked()
{
    // setVisibleAllCustomersFields(false);

    clearAllLineEdits();

    // setVisibleRegularCustomersFields(true);
}


void OwnerEditCustomersInfo::getCustomersInfo() {
    std::vector<std::vector<std::string>> customersInfo = utilities->readFileByWord(utilities->moneyFile, true);
    std::vector<std::vector<std::string>> customersPasswords = utilities->readFileByWord(utilities->passwordsFile, true);

    moneyHeader = customersInfo[0];
    passwordsHeader = customersPasswords[0];
    totalInfo.clear();
    std::vector<std::string> temp;
    for (int i = 0; i < customersInfo.size(); ++i) {
        bool was = false;
        for (int j = 0; j < customersInfo[0].size(); ++j) {
            if (j == 1 && !was) {
                temp.push_back(customersPasswords[i][1]);
                was = true;
                --j;
            } else {
                temp.push_back(customersInfo[i][j]);
            }
        }
        totalInfo.push_back(temp);
        temp.clear();
    }

    infoHeader = totalInfo[0];
    totalInfo.erase(totalInfo.begin());
    totalInfoCopy = totalInfo;
}

void OwnerEditCustomersInfo::on_deleteCustomerPushButton_clicked()
{
    currRow = ui->customersInfoTableWidget->currentRow();
    if (currRow == -1) {
        QMessageBox::warning(this, "Info", "Please select user to delete");
        return ;
    }

    totalInfo.erase(totalInfo.begin() + currRow);
    setCustomersInfoTable();
}


void OwnerEditCustomersInfo::on_editCustomerPushButton_clicked()
{
    currOperation = EDIT;
    currRow = ui->customersInfoTableWidget->currentRow();
    if (currRow == -1) {
        QMessageBox::warning(this, "Info", "Please select user to edit");
        return ;
    }

    // setVisibleAllCustomersFields(true);

    fillLineEdits();
}

void OwnerEditCustomersInfo::fillLineEdits() {
    std::vector<std::string> currRowVec = totalInfo[currRow];
    ui->loginLineEdit->setText(QString::fromStdString(currRowVec[0]));
    ui->passwordLineEdit->setText(QString::fromStdString(currRowVec[1]));

    ui->moneyLineEdit->setText(QString::fromStdString(currRowVec[3]));

    ui->totalCostLineEdit->setText(QString::fromStdString(currRowVec[4]));
    ui->NameLineEdit->setText(QString::fromStdString(currRowVec[5]));

    if (isRegular()) {
        setVisibleRegularCustomersFields(true);
        ui->statusComboBox->setCurrentIndex(0);
    } else {
        ui->statusComboBox->setCurrentIndex(1);
        setVisibleRegularCustomersFields(false);
    }
}

bool OwnerEditCustomersInfo::isRegular() {
    if (totalInfo[currRow][2] == "regular") {
        return true;
    }
    return false;
}

void OwnerEditCustomersInfo::updateTotalInfo(std::vector<std::string> &v) {
    if (currOperation == EDIT) {
        totalInfo[currRow] = v;
    } else if (currOperation == ADD_NEW) {
        std::string currNewLogin = v[0];
        std::string currNewLoginU = utilities->getUnique(currNewLogin);
        std::string oldLoginU;
        for (const auto& row : totalInfo) {
            oldLoginU = utilities->getUnique(row[0]);
            if (currNewLoginU == oldLoginU) {
                QMessageBox::warning(this, "Warning", "This user is already exist!\nIf you want to edit him, please select and press edit");
                return ;
            }
        }
        totalInfo.push_back(v);
    }
}

void OwnerEditCustomersInfo::on_savePushButton_clicked()
{
    std::vector<std::string> infoFromLineEdits;
    getInfoFromLineEdits(infoFromLineEdits);

    if (isValidLineEdits(infoFromLineEdits)) {
        updateTotalInfo(infoFromLineEdits);

        setCustomersInfoTable();
        clearAllLineEdits();
        // setVisibleAllCustomersFields(false);
    } else {
        return ;
    }
}

bool OwnerEditCustomersInfo::isValidLineEdits(const std::vector<std::string> &v) {
    int stop;
    if (editableCustomer == REGULAR) {
        stop = 6;
    } else if (editableCustomer == USUAL){
        stop = 4;
    }
    for (int i = 0; i < stop; ++i) {
        if (v[i].empty()) {
            QMessageBox::warning(this, "warning", "Fill in all fields please");
            return false;
        }
    }
    return true;
}

void OwnerEditCustomersInfo::getInfoFromLineEdits(std::vector<std::string>& result) {

    QString temp = ui->loginLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->passwordLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->statusComboBox->currentText();
    result.push_back(temp.toStdString());

    temp = ui->moneyLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->totalCostLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->NameLineEdit->text();
    result.push_back(temp.toStdString());
}

void OwnerEditCustomersInfo::on_addNewCustomerPushButton_clicked()
{
    currOperation = ADD_NEW;
    ui->customersInfoTableWidget->clearSelection();
    clearAllLineEdits();
    setVisibleAllCustomersFields(true);
//    std::vector<std::string> info = getInfoFromLineEdits();
//    updateTotalInfo(info);
}


void OwnerEditCustomersInfo::on_statusComboBox_currentTextChanged(const QString &arg1)
{
    if (arg1 == "usual") {
        editableCustomer = USUAL;
        setVisibleRegularCustomersFields(false);
        clearRegularCustomersLineEdits();
    } else {
        editableCustomer = REGULAR;
        setVisibleRegularCustomersFields(true);
    }
}


void OwnerEditCustomersInfo::clearAllLineEdits() {
    ui->loginLineEdit->clear();
    ui->passwordLineEdit->clear();
    ui->moneyLineEdit->clear();

    ui->statusComboBox->setCurrentIndex(0);

    clearRegularCustomersLineEdits();

}

void OwnerEditCustomersInfo::clearRegularCustomersLineEdits() {
    ui->totalCostLineEdit->clear();
    ui->NameLineEdit->clear();
}


void OwnerEditCustomersInfo::on_revertChangesPushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Save", "Are you sure you want to return the changes?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        totalInfo = totalInfoCopy;
        setCustomersInfoTable();
        currTableWasChanged = false;
    } else if (reply == QMessageBox::No) {
        return ;
    }
}

void OwnerEditCustomersInfo::on_saveAllPushButton_clicked()
{
    saveAll();
    clearAllLineEdits();
}


void OwnerEditCustomersInfo::saveAll() {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Save", "All changes will be saved",
                                  QMessageBox::Ok|QMessageBox::Cancel);

    if (reply) {

//            QString path = QCoreApplication::applicationDirPath();
//            QMessageBox::information(this, "app dir", "app dir is " + path);

        std::vector<std::vector<std::string>> moneyInfo;
        std::vector<std::string> temp;
        for (int i = 0; i < totalInfo.size(); ++i) {
            for (int j = 0; j < totalInfo[0].size(); ++j) {
                if (j == 1) {
                    continue;
                }
                temp.push_back(totalInfo[i][j]);
            }
            moneyInfo.push_back(temp);
            temp.clear();
        }

        QString path = utilities->moneyFile;
        utilities->saveInfoToFile(moneyHeader, moneyInfo, path);

        std::vector<std::vector<std::string>> passwordsInfo;
        for (int i = 0; i < totalInfo.size(); ++i) {
            temp.push_back(totalInfo[i][0]);
            temp.push_back(totalInfo[i][1]);
            passwordsInfo.push_back(temp);
            temp.clear();
        }

        path = utilities->passwordsFile;
        utilities->saveInfoToFile(passwordsHeader, passwordsInfo, path);
    }
}
