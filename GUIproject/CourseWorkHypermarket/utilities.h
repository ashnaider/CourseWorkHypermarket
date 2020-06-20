#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <vector>
#include <sstream>

#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <QList>

#define PRODUCT_INFO std::vector<std::vector<std::string>>

class Utilities
{
public:
    Utilities();

    std::vector<std::vector<std::string>> readFileByWord(QString fileName, bool withHeader = false);

    std::vector<std::string> readFileByLine(QString fileName) const;

    std::string readFileInString(QString fileName) const;

    void replaceSymbol(std::string& str, char what, char forWhat) const;

    QString generateFilePathForProduct(QString productClass);

    QList<QString> GetProductInfoHeader(const std::vector<std::string>& productInfoHeader);

    std::vector<std::string> getProductList();

//    QString path = "/home/anton/CourseWorkDb/";

//    QString passwords = path + "passwords.txt";
//    QString money = path + "money.txt";

    QString dbPath = "../CourseWorkDb/";
    QString passwordsFile = dbPath + "passwords.txt";
    QString productsFile = dbPath + "products.txt";
    QString moneyFile = dbPath + "money.txt";
    QString mobilePhonesFile = dbPath + "MobilePhones.txt";
    QString smartphonesFile = dbPath + "Smartphones.txt";
    QString laptopsFile = dbPath + "Laptops.txt";

    std::string myTrim(const std::string& s);

    std::string myToLower(const std::string& s);

    std::string getUnique(const std::string& s);

    bool saveInfoToFile(const std::vector<std::vector<std::string>>& info, std::string file);
};

#endif // UTILITIES_H
