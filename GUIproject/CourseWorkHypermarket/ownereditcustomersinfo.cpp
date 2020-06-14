#include "ownereditcustomersinfo.h"
#include "ui_ownereditcustomersinfo.h"

OwnerEditCustomersInfo::OwnerEditCustomersInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OwnerEditCustomersInfo)
{
    ui->setupUi(this);

    QWidget::setWindowTitle("Edit customer's info");
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
