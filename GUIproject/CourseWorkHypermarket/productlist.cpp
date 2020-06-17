#include "productlist.h"
#include "product.h"

#include <sstream>
#include <string>
#include <vector>

ProductList::ProductList(QString productClass)
{
    utilities = new Utilities;

    QString filePath = utilities->generateFilePathForProduct(productClass);
    productsInfo = utilities->readFileByWord(filePath, true);
    productInfoHeader = productsInfo[0];
    productsInfo.erase(productsInfo.begin());

    allocateProducts(productClass);
}

void ProductList::allocateProducts(QString productClass) {
        currectProductClass = productClass.toStdString();
        for (const auto& line : productsInfo) {
            std::string firm = line[0];
            std::string name = line[1];
            double price = std::stod(line[2]);
            double maxDiscount = std::stod(line[3]);

            if (productClass == "MobilePhones") {

                    bool isContract = (line[4] == "1") ? true : false;
                    int maxSimCards = std::stoi(line[5]);
                    fieldsQuantity = 6;
                    MobilePhone *mobilePhone;
                    mobilePhone = new MobilePhone(firm, name, price, maxDiscount,
                                          isContract, maxSimCards);
                    ptrVecProductList.push_back(mobilePhone);
            } else if (productClass == "Smartphones") {

                    bool isContract = (line[4] == "1") ? true : false;
                    int maxSimCards = std::stoi(line[5]);

                    std::string OS = line[6];
                    std::string preinstalledProgramms = line[7];
                    fieldsQuantity = 8;

                    std::stringstream sspp(preinstalledProgramms);
                    std::vector<std::string> pp;
                    std::string temp;
                    while (sspp >> temp) {
                        pp.push_back(temp);
                    }


                    Smartphone *smartphone;
                    smartphone = new Smartphone(firm, name, price, maxDiscount,
                                             isContract, maxSimCards,
                                             OS, pp);
                    ptrVecProductList.push_back(smartphone);
            } else if (productClass == "Laptops") {
                double diagonalSize = std::stod(line[4]);
                double weight = std::stod(line[5]);
                int cpuCores = std::stoi(line[6]);
                int mainMemory = std::stoi(line[7]);

                fieldsQuantity = 8;

                Laptop *laptop;
                laptop = new Laptop(firm, name, price, maxDiscount,
                                     diagonalSize, weight, cpuCores, mainMemory);
                ptrVecProductList.push_back(laptop);

        }
    }
}

const Product* ProductList::getProductByIndex(int index) {
    if (index >= 0 && index < ptrVecProductList.size()) {
        return ptrVecProductList[index];
    } else {
        return { };
    }
}

int ProductList::GetFieldsQuantity() const {
    return fieldsQuantity;
}

QString ProductList::GetQStringProductInfo(const Product *product) const {
    QString result = QString::fromStdString(product->GetFirm()) +
                    "\t" +
                    QString::fromStdString(product->GetName()) +
                    "\t" +
                    QString::number(product->GetPrice()) +
                    "\t";
    if (currectProductClass == "MobilePhones") {

    } else if (currectProductClass == "Smartphones") {

    } else if (currectProductClass == "Laptops") {

    }

    return result;

}

std::vector<std::string> ProductList::GetProductInfoInVec(int pNum) const {
    return productsInfo[pNum];
}

QList<QString> ProductList::GetProductInfoHeader() const {
    QList<QString> result;
    for (const auto& word : productInfoHeader) {
        result.push_back(QString::fromStdString(word));
    }
    return result;
}

ProductList::~ProductList() {
    delete utilities;

    for (auto& product : ptrVecProductList) {
        delete product;
    }

    productsInfo.clear();
}
