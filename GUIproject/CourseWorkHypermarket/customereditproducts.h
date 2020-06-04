#ifndef CUSTOMEREDITPRODUCTS_H
#define CUSTOMEREDITPRODUCTS_H

#include <QWidget>

namespace Ui {
class CustomerEditProducts;
}

class CustomerEditProducts : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerEditProducts(QWidget *parent = 0);
    ~CustomerEditProducts();

private:
    Ui::CustomerEditProducts *ui;
};

#endif // CUSTOMEREDITPRODUCTS_H
