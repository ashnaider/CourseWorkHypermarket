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

    QString path = "/home/anton/CourseWorkDb/";

    QString passwords = path + "passwords.txt";
    QString money = path + "money.txt";

    std::string myTrim(const std::string& s);

    std::string myToLower(const std::string& s);

    std::string getUnique(const std::string& s);
};

#endif // UTILITIES_H
