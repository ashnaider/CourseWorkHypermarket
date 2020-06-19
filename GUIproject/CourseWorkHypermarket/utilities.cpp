#include "utilities.h"

Utilities::Utilities()
{

}

std::vector<std::vector<std::string>> Utilities::readFileByWord(QString fileName, bool withHeader/* =false*/) {
    QFile usersFile(fileName);

    if (!usersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // QMessageBox::warning(this, "Error!", "Can not open file!");
            qCritical() << "Error! Can not open file " + fileName;
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

    if (!withHeader) {
        result.erase(result.begin());
    }

    return result;
}

std::vector<std::string> Utilities::readFileByLine(QString fileName) const {
    QFile usersFile(fileName);

    if (!usersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // QMessageBox::warning(this, "Error!", "Can not open file!");
            qCritical() << "Error! Can not open file " + fileName;
            return {{}};
    }

    QTextStream instream(&usersFile);
    QString qstrLine = instream.readAll();
    std::string all = qstrLine.toStdString();

    usersFile.close();

    std::stringstream ss(all);
    std::vector<std::string> result;
    std::string line;
    while (std::getline(ss, line)) {
        result.push_back(line);
    }

    return result;
}

std::string Utilities::readFileInString(QString fileName) const {
    QFile usersFile(fileName);

    if (!usersFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // QMessageBox::warning(this, "Error!", "Can not open file!");
            qCritical() << "Error! Can not open file " + fileName;
            return {{}};
    }

    QTextStream instream(&usersFile);
    QString qstrLine = instream.readAll();
    std::string all = qstrLine.toStdString();

    usersFile.close();

    return all;
}


void Utilities::replaceSymbol(std::string &str, char what, char forWhat) const {
    for (auto& ch : str) {
        if (ch == what) {
            ch = forWhat;
        }
    }
}

QString Utilities::generateFilePathForProduct(QString productClass) {
    return "/home/anton/CourseWorkDb/" + productClass + ".txt";
}

std::vector<std::string> Utilities::getProductList() {
    QString fileName = "/home/anton/CourseWorkDb/products.txt";
    std::vector<std::vector<std::string>> allFile = readFileByWord(fileName);

    std::vector<std::string> productList;
    for (const auto& line : allFile) {
        productList.push_back(line[0]);
    }

    return productList;
}

QList<QString> Utilities::GetProductInfoHeader(const std::vector<std::string> &productInfoHeader) {
    QList<QString> result;
    for (const auto& word : productInfoHeader) {
        result.push_back(QString::fromStdString(word));
    }
    return result;
}
