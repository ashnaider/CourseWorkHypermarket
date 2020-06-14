#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <vector>
#include <sstream>

#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>

class Utilities
{
public:
    Utilities();

    std::vector<std::vector<std::string>> readFileByWord(std::string fileName) const;
};

#endif // UTILITIES_H
