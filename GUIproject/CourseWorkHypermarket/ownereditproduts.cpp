#include "ownereditproduts.h"
#include "ui_ownereditproduts.h"

OwnerEditProduts::OwnerEditProduts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OwnerEditProduts)
{
    ui->setupUi(this);
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