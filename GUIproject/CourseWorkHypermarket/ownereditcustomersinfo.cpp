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

    ui->moneyLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+[.][0-9]+"), ui->moneyLineEdit));
    ui->totalCostLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+[.][0-9]+"), ui->totalCostLineEdit));

    getCustomersInfo();
    setStatusComboBox();
    setCustomersInfoTable();
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

QList<QString> OwnerEditCustomersInfo::GetProductInfoHeader(const std::vector<std::string>& productInfoHeader) const {
    QList<QString> result;
    for (const auto& word : productInfoHeader) {
        result.push_back(QString::fromStdString(word));
    }
    return result;
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

void OwnerEditCustomersInfo::setCustomersInfoTable() {

    QList<QString> qListInfoHeader = GetProductInfoHeader(infoHeader);

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
    ui->loginLineEdit->clear();
    ui->passwordLineEdit->clear();
    ui->moneyLineEdit->clear();
    ui->totalCostLineEdit->clear();
    ui->NameLineEdit->clear();

    ui->statusComboBox->setCurrentIndex(0);

    setVisibleRegularCustomersFields(true);
}


void OwnerEditCustomersInfo::getCustomersInfo() {
    std::vector<std::vector<std::string>> customersInfo = utilities->readFileByWord(utilities->money, true);
    std::vector<std::vector<std::string>> customersPasswords = utilities->readFileByWord(utilities->passwords, true);

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
}

void OwnerEditCustomersInfo::on_deleteCustomerPushButton_clicked()
{
    int currRow = ui->customersInfoTableWidget->currentRow();
    if (currRow == -1) {
        QMessageBox::warning(this, "Info", "Please select user to delete");
        return ;
    }

    totalInfo.erase(totalInfo.begin() + currRow);
    setCustomersInfoTable();
}


void OwnerEditCustomersInfo::on_editCustomerPushButton_clicked()
{
    currRow = ui->customersInfoTableWidget->currentRow();
    if (currRow == -1) {
        QMessageBox::warning(this, "Info", "Please select user to edit");
        return ;
    }

    fillLineEdits();
}

void OwnerEditCustomersInfo::fillLineEdits() {
    std::vector<std::string> currRowVec = totalInfo[currRow];
    ui->loginLineEdit->setText(QString::fromStdString(currRowVec[0]));
    ui->passwordLineEdit->setText(QString::fromStdString(currRowVec[1]));

    ui->moneyLineEdit->setText(QString::fromStdString(currRowVec[3]));

    if (isRegular()) {
        setVisibleRegularCustomersFields(true);
        ui->statusComboBox->setCurrentIndex(0);
        ui->totalCostLineEdit->setText(QString::fromStdString(currRowVec[4]));
        ui->NameLineEdit->setText(QString::fromStdString(currRowVec[5]));
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

void OwnerEditCustomersInfo::on_savePushButton_clicked()
{

}

std::vector<std::string> OwnerEditCustomersInfo::getInfoFromLineEdits() {
    std::vector<std::string> result;

    QString temp = ui->loginLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->passwordLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->statusComboBox->currentText();
    result.push_back(temp.toStdString());

    temp = ui->moneyLineEdit->text();

}
