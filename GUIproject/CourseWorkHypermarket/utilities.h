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
#include <QMessageBox>

#define PRODUCT_INFO std::vector<std::vector<std::string>>

class Utilities
{
public:

    std::vector<std::vector<std::string>> readFileByWord(QString fileName, bool withHeader = false);

    std::vector<std::string> readFileByLine(QString fileName) const;

    std::string readFileInString(QString fileName) const;

    void replaceSymbol(std::string& str, char what, char forWhat) const;

    QString generateFilePathForProduct(QString productClass);

    QList<QString> GetProductInfoHeader(const std::vector<std::string>& productInfoHeader);

    std::vector<std::string> getProductList();

    QString newUserInfo = ";usual;1500;;;";

    QString dbPath = "../CourseWorkDb/";
    QString passwordsFile = dbPath + "passwords.txt";
    QString productsFile = dbPath + "products.txt";
    QString moneyFile = dbPath + "money.txt";
    QString mobilePhonesFile = dbPath + "MobilePhones.txt";
    QString smartphonesFile = dbPath + "Smartphones.txt";
    QString laptopsFile = dbPath + "Laptops.txt";

    QString doubleRegEx = "[0-9]{0,7}[.]{1}[0-9]{0,2}";
    QString twoDigitsDoubleRegEx = "[0-9]{0,2}[.]{1}[0-9]{0,2}";
    QString twoDigitsIntRegEx = "[0-9]{1,2}";

    QString loginRegEx = "[a-z0-9]+";
    QString passwordRegEx = "[a-z0-9!@#$%^&*]+";

    std::string myTrim(const std::string& s);

    std::string myToLower(const std::string& s);

    std::string getUnique(const std::string& s);

    bool saveInfoToFile(const std::vector<std::string>& header,
                        const std::vector<std::vector<std::string>>& info,
                        QString fileName);

    bool appendInfoToFile(const std::vector<std::string>& info, QString fileName);
};

#endif // UTILITIES_H
