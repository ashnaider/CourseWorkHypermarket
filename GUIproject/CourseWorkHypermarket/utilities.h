#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <vector>
#include <sstream>

#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>

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
};

#endif // UTILITIES_H
