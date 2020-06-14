#include "utilities.h"

Utilities::Utilities()
{

}

std::vector<std::vector<std::string>> Utilities::readFileByWord(std::string fileName) const {
    QFile usersFile(QString::fromStdString(fileName));

    if (!usersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // QMessageBox::warning(this, "Error!", "Can not open file!");
            qCritical() << "Error! Can not open file " + QString::fromStdString(fileName);
            return {{}};
    }

    QTextStream instream(&usersFile);
    QString qstrLine = instream.readAll();
    std::string all = qstrLine.toStdString();

    usersFile.close();

    std::stringstream ss(all);
    std::vector<std::string> tempVec;
    std::vector<std::vector<std::string>> result;
    std::string line, word;

    while (std::getline(ss, line)) {
        std::stringstream ssline(line);
        while (std::getline(ssline, word, ';')) {
            tempVec.push_back(word);
        }
        result.push_back(tempVec);
        tempVec.clear();
    }

    return result;
}
