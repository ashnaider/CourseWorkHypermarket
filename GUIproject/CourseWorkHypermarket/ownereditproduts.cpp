#include "ownereditproduts.h"
#include "ui_ownereditproduts.h"

#include <QMessageBox>
#include <QLabel>

OwnerEditProduts::OwnerEditProduts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OwnerEditProduts)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Edit products");

    this->setFixedSize(this->width(), this->height());

    utilities = new Utilities;

    setProductClassesComboBox();
    getCurrProductList(ui->productClassesComboBox->currentText());

    ui->maxSimCardsSpinBox->setMinimum(1);
    ui->maxSimCardsSpinBox->setMaximum(3);

    setLineEditsValidators();
}

OwnerEditProduts::~OwnerEditProduts()
{
    delete ui;
}

void OwnerEditProduts::on_goBackToOwnerButton_clicked()
{
    this->close();
    emit goBackToOwnerButton();
}

void OwnerEditProduts::setLineEditsValidators() {
    QString doubleRegEx = "[0-9]{0,7}[.]{1}[0-9]{0,2}";
    QString twoDigitsDoubleRegEx = "[0-9]{0,2}[.]{1}[0-9]{0,2}";
    QString twoDigitsIntRegEx = "[0-9]{1,2}";

    ui->priceLineEdit->setValidator(new QRegExpValidator(QRegExp(doubleRegEx), ui->priceLineEdit));
    ui->maxDiscountLineEdit->setValidator(new QRegExpValidator(QRegExp(twoDigitsDoubleRegEx), ui->maxDiscountLineEdit));
    ui->weightLineEdit->setValidator(new QRegExpValidator(QRegExp(twoDigitsDoubleRegEx), ui->weightLineEdit));
    ui->cpuCoresLineEdit->setValidator(new QRegExpValidator(QRegExp(twoDigitsIntRegEx), ui->cpuCoresLineEdit));
    ui->mainMemoryLineEdit->setValidator(new QRegExpValidator(QRegExp(twoDigitsIntRegEx), ui->mainMemoryLineEdit));
}

void OwnerEditProduts::setProductClassesComboBox() {
    std::vector<std::string> productClasses = utilities->getProductList();

    for (const auto& product : productClasses) {
        ui->productClassesComboBox->addItem(QString::fromStdString(product));
    }
}

void OwnerEditProduts::setVisibleEditLines(const QString &productClass, bool set) {
    if (productClass == "MobilePhones") {
        setVisibleMobilePhone(set);
        setVisibleSmartphone(!set);
        setVisibleLaptop(!set);

        currProductClass = MOBILEPHONE;

    } else if (productClass == "Smartphones") {
        setVisibleSmartphone(set);
        setVisibleMobilePhone(set);
        setVisibleLaptop(!set);

        currProductClass = SMARTPHONE;

    } else if (productClass == "Laptops") {
        setVisibleLaptop(set);
        setVisibleMobilePhone(!set);
        setVisibleSmartphone(!set);

        currProductClass = LAPTOP;
    }
}

void OwnerEditProduts::setVisibleMobilePhone(bool set) {
    ui->contractLabel->setVisible(set);
    ui->contractRadioButton->setVisible(set);

    ui->maxSimCardsLabel->setVisible(set);
    ui->maxSimCardsSpinBox->setVisible(set);

}

void OwnerEditProduts::setVisibleSmartphone(bool set) {
    ui->osLabel->setVisible(set);
    ui->osComboBox->setVisible(set);

    ui->programmsLabel->setVisible(set);
    ui->programmsLineEdit->setVisible(set);

}

void OwnerEditProduts::setVisibleLaptop(bool set) {
    ui->DiagonalSizeLabel->setVisible(set);
    ui->diagonalSizeComboBox->setVisible(set);

    ui->weightLabel->setVisible(set);
    ui->weightLineEdit->setVisible(set);

    ui->cpuCoresLabel->setVisible(set);
    ui->cpuCoresLineEdit->setVisible(set);

    ui->mainMemoryLabel->setVisible(set);
    ui->mainMemoryLineEdit->setVisible(set);
}

void OwnerEditProduts::deleteInputWidget(const QString &widgetName) {
    int size = currInputWidgets.size();
    for (int i = 0; i < size; ++i) {
        if (currInputWidgets[i]->objectName() == widgetName) {
            currInputWidgets.erase(currInputWidgets.begin() + i);
            --size;
            --i;
        }
    }
}

void OwnerEditProduts::on_productClassesComboBox_currentIndexChanged(const QString &arg1)
{
    if (currTableWasChanged) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Save", "Save information that you changed?",
                                      QMessageBox::Ok|QMessageBox::Cancel);
    }

    clearLineInputs();
    setVisibleEditLines(arg1, true);
    currTableWasChanged = false;
    getCurrProductList(arg1);
    setProductListTable();
}

void OwnerEditProduts::getCurrProductList(const QString& productClass) {
    currProductList = utilities->readFileByWord(utilities->generateFilePathForProduct(productClass), true);
    currProductListHeader = currProductList[0];
    currProductList.erase(currProductList.begin());
}

void OwnerEditProduts::setProductListTable() {

    QList<QString> qListInfoHeader = utilities->GetProductInfoHeader(currProductListHeader);


    int rows = currProductList.size();
    int cols;
    if (rows) {
        cols = currProductList[0].size();

        ui->productListTableWidget->setRowCount(rows);
        ui->productListTableWidget->setColumnCount(cols);

        ui->productListTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        QHeaderView *header = ui->productListTableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::ResizeToContents);

        ui->productListTableWidget->setHorizontalHeaderLabels(qListInfoHeader);


        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                QString sItem = QString::fromStdString(currProductList[row][col]);
                QTableWidgetItem *item = new QTableWidgetItem(sItem);
                item->setFlags(item->flags() & ~Qt::ItemIsEditable); // non editable cells
                ui->productListTableWidget->setItem(row, col, item);
            }
        }
    } else {
        // QMessageBox::warning(this, "error", "money file is empty!");
        ui->productListTableWidget->setRowCount(0);
        ui->productListTableWidget->setColumnCount(0);
        return ;
    }
}

void OwnerEditProduts::on_deletePushButton_clicked()
{
    currRow = ui->productListTableWidget->currentRow();
    if (currRow == -1) {
        QMessageBox::warning(this, "Info", "Please item to delete");
        return ;
    }

    currTableWasChanged = true;

    currProductList.erase(currProductList.begin() + currRow);
    setProductListTable();
}

void OwnerEditProduts::on_editPushButton_clicked()
{
    currRow = ui->productListTableWidget->currentRow();
    if (currRow == -1) {
        QMessageBox::warning(this, "Warning", "Please select product to edit");
        return ;
    }
    currOperation = EDIT;
    fillEditLines();
}

void OwnerEditProduts::fillEditLines() {
    fillProductInfo();
    if (currProductClass == MOBILEPHONE || currProductClass == SMARTPHONE) {
        fillMobilePhone();
        if (currProductClass == SMARTPHONE) {
            fillSmartphone();
        }
    } else if (currProductClass == LAPTOP) {
        fillLaptop();
    }
}

void OwnerEditProduts::fillProductInfo() {
    ui->firmLineEdit->setText(QString::fromStdString(currProductList[currRow][0]));
    ui->nameLineEdit->setText(QString::fromStdString(currProductList[currRow][1]));
    ui->priceLineEdit->setText(QString::fromStdString(currProductList[currRow][2]));
    ui->maxDiscountLineEdit->setText(QString::fromStdString(currProductList[currRow][3]));
}

void OwnerEditProduts::fillMobilePhone() {
    if (currProductList[currRow][4] == "yes") {
        ui->contractRadioButton->setChecked(true);
    } else {
        ui->contractRadioButton->setChecked(false);
    }

    ui->maxSimCardsSpinBox->setValue(std::stoi(currProductList[currRow][5]));

}

void OwnerEditProduts::fillSmartphone() {
    int index = ui->osComboBox->findText(QString::fromStdString(currProductList[currRow][6]));
    ui->osComboBox->setCurrentIndex(index);

    ui->programmsLineEdit->setText(QString::fromStdString(currProductList[currRow][7]));
}

void OwnerEditProduts::fillLaptop() {
    int index = ui->diagonalSizeComboBox->findText(QString::fromStdString(currProductList[currRow][4]));
    ui->diagonalSizeComboBox->setCurrentIndex(index);

    ui->weightLineEdit->setText(QString::fromStdString(currProductList[currRow][5]));
    ui->cpuCoresLineEdit->setText(QString::fromStdString(currProductList[currRow][6]));
    ui->mainMemoryLineEdit->setText(QString::fromStdString(currProductList[currRow][7]));

}

void OwnerEditProduts::on_cancelPushButton_clicked()
{
    currOperation = ADD_NEW;
    clearLineInputs();
}

void OwnerEditProduts::clearLineInputs() {
    ui->firmLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->priceLineEdit->clear();
    ui->maxDiscountLineEdit->clear();
    ui->contractRadioButton->setChecked(false);
    ui->maxSimCardsSpinBox->setValue(1);
    ui->osComboBox->setCurrentIndex(ui->osComboBox->findText("Android"));
    ui->programmsLineEdit->clear();
    ui->diagonalSizeComboBox->setCurrentIndex(ui->diagonalSizeComboBox->findText("15.6"));
    ui->weightLineEdit->clear();
    ui->cpuCoresLineEdit->clear();
    ui->mainMemoryLineEdit->clear();
}

void OwnerEditProduts::on_savePushButton_clicked()
{
    std::vector<std::string> info = getInfoFromLineEdits();
    for (const auto& i : info) {
        if (i.empty()) {
            QMessageBox::warning(this, "warning", "Please fill all fields");
            return ;
        }
    }
    if (currOperation == EDIT) {
        currProductList[currRow] = info;
    } else if (currOperation == ADD_NEW) {
        if (productExist(info)) {
            QMessageBox::warning(this, "warning", "Product with this name is already exist\nIf you want to edit it, select and click edit");
            return ;
        } else {
            currProductList.push_back(info);
        }
    }

    clearLineInputs();
    setProductListTable();
}

bool OwnerEditProduts::productExist(const std::vector<std::string> &product) {
    std::string name = product[1];

    for (const auto& p : currProductList) {
        if (name == p[1]) {
            return true;
        }
    }
    return false;
}

std::vector<std::string> OwnerEditProduts::getInfoFromLineEdits() {
    std::vector<std::string> result;

    QString temp = ui->firmLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->nameLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->priceLineEdit->text();
    result.push_back(temp.toStdString());

    temp = ui->maxDiscountLineEdit->text();
    result.push_back(temp.toStdString());

    if (currProductClass == MOBILEPHONE || currProductClass == SMARTPHONE) {
        std::string contract = ui->contractRadioButton->isChecked() ? "yes" : "no";
        result.push_back(contract);
        temp = ui->maxSimCardsSpinBox->text();
        result.push_back(temp.toStdString());
        if (currProductClass == SMARTPHONE) {
            temp = ui->osComboBox->currentText();
            result.push_back(temp.toStdString());

            temp = ui->programmsLineEdit->text();
            result.push_back(temp.toStdString());
        }
    } else if (currProductClass == LAPTOP) {
        temp = ui->diagonalSizeComboBox->currentText();
        result.push_back(temp.toStdString());

        temp = ui->weightLineEdit->text();
        result.push_back(temp.toStdString());

        temp = ui->cpuCoresLineEdit->text();
        result.push_back(temp.toStdString());

        temp = ui->mainMemoryLineEdit->text();
        result.push_back(temp.toStdString());
    }

    return result;
}

void OwnerEditProduts::on_addNewPushButton_clicked()
{
    clearLineInputs();
    currOperation = ADD_NEW;
}
