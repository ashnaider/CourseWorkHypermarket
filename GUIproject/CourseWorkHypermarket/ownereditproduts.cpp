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

    currInputWidgets.push_back(ui->firmLineEdit);
    currInputWidgets.push_back(ui->nameLineEdit);
    currInputWidgets.push_back(ui->priceLineEdit);
    currInputWidgets.push_back(ui->maxDiscountLineEdit);
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

    if (set) {
        currInputWidgets.push_back(ui->contractRadioButton);
        currInputWidgets.push_back(ui->maxSimCardsSpinBox);
    } else {
        deleteInputWidget(ui->contractRadioButton->objectName());
        deleteInputWidget(ui->maxSimCardsSpinBox->objectName());
    }
}

void OwnerEditProduts::setVisibleSmartphone(bool set) {
    ui->osLabel->setVisible(set);
    ui->osComboBox->setVisible(set);

    ui->programmsLabel->setVisible(set);
    ui->programmsLineEdit->setVisible(set);

    if (set) {
        currInputWidgets.push_back(ui->osComboBox);
        currInputWidgets.push_back(ui->programmsLineEdit);
    } else {
        deleteInputWidget(ui->osComboBox->objectName());
        deleteInputWidget(ui->programmsLineEdit->objectName());
    }
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

    if (set) {
        currInputWidgets.push_back(ui->diagonalSizeComboBox);
        currInputWidgets.push_back(ui->weightLineEdit);
        currInputWidgets.push_back(ui->cpuCoresLineEdit);
        currInputWidgets.push_back(ui->mainMemoryLineEdit);
    } else {
        deleteInputWidget(ui->diagonalSizeComboBox->objectName());
        deleteInputWidget(ui->weightLineEdit->objectName());
        deleteInputWidget(ui->cpuCoresLineEdit->objectName());
        deleteInputWidget(ui->mainMemoryLineEdit->objectName());
    }
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
    fillEditLines();
}

void OwnerEditProduts::fillEditLines() {
    fillProductInfo();
    if (currProductClass == MOBILEPHONE) {
        fillMobilePhone();
    } else if (currProductClass == SMARTPHONE) {
        fillSmartphone();
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
}

void OwnerEditProduts::fillSmartphone() {

}

void OwnerEditProduts::fillLaptop() {

}
