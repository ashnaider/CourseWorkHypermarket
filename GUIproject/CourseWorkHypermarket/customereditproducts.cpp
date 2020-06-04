#include "customereditproducts.h"
#include "ui_customereditproducts.h"

CustomerEditProducts::CustomerEditProducts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerEditProducts)
{
    ui->setupUi(this);
}

CustomerEditProducts::~CustomerEditProducts()
{
    delete ui;
}
