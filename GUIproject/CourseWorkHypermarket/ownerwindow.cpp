#include "ownerwindow.h"
#include "ui_ownerwindow.h"

OwnerWindow::OwnerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OwnerWindow)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Owner");

    ownerEditProduts = new OwnerEditProduts();

    connect(ownerEditProduts, &OwnerEditProduts::goBackToOwnerButton, this, &OwnerWindow::show);

    ownerEditCustomersInfo = new OwnerEditCustomersInfo();

    connect(ownerEditCustomersInfo, &OwnerEditCustomersInfo::goBackToOwnerWindow, this, &OwnerWindow::show);

    this->setFixedSize(this->width(), this->height());
}

OwnerWindow::~OwnerWindow()
{
    delete ui;
}

void OwnerWindow::on_BackToMainWindowFromOwnerBtn_clicked()
{
    this->close();
    emit toMainWindowFromOwner();
}


void OwnerWindow::on_toEditProdutsButton_clicked()
{
    ownerEditProduts->show();
    this->close();
}

void OwnerWindow::on_editCustomersInfoButton_clicked()
{
    ownerEditCustomersInfo->show();
    this->close();
}
