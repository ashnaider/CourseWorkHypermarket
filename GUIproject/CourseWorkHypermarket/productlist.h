#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H

#include <vector>
#include <string>

#include <QString>

#include "product.h"
#include "utilities.h"
#include "mobilephone.h"
#include "smartphone.h"
#include "laptop.h"

class ProductList
{
public:
    ProductList(QString productClass);

    const Product* getProductByIndex(int index);

    std::vector<Product* > ptrVecProductList;

    std::vector<std::string> GetProductInfoInVec(int pNum) const;
    QList<QString> GetProductInfoHeader() const;

    int GetFieldsQuantity() const;

    QString GetQStringProductInfo(const Product *product) const;

    ~ProductList();

private:
    Utilities* utilities;

    int fieldsQuantity;

    std::string currectProductClass;

    std::vector<std::vector<std::string>> productsInfo;
    std::vector<std::string> productInfoHeader;

    void allocateProducts(QString productClass);
};

#endif // PRODUCTLIST_H
