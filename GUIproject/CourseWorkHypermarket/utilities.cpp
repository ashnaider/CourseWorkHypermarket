#include "utilities.h"

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
    return dbPath + productClass + ".txt";
}

std::vector<std::string> Utilities::getProductList() {
    QString fileName = this->productsFile;
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

std::string Utilities::getUnique(const std::string &s) {
    return myToLower(myTrim(s));
}

std::string Utilities::myTrim(const std::string &s) {
    std::string result;
    for (auto ch : s) {
        if (ch != ' ') {
            result.push_back(ch);
        }
    }
    return result;
}

std::string Utilities::myToLower(const std::string& s) {
  std::string result;
  for (auto ch : s) {
    if (ch >= 'A' && ch <= 'Z') {
      result.push_back(ch - ('Z' - 'z'));
    } else {
      result.push_back(ch);
    }
  }
  return result;
}

bool Utilities::saveInfoToFile(const std::vector<std::string>& header,
                               const std::vector<std::vector<std::string>>& info, QString filePath) {
    QFile file(filePath);
          if(file.open(QIODevice::WriteOnly | QIODevice::Text))
          {
              if (!file.exists()) {
                  qDebug() << "Error while opening file to write!";
                  return false;
              }

              QTextStream stream(&file);

              for (const auto& i : header) {
                  stream << QString::fromStdString(i) << ";";
              }
              stream << endl;

              for (const auto& i : info) {
                  for (const auto& j : i) {
                      stream << QString::fromStdString(j) << ";";
                  }
                  stream << endl;
              }

              file.flush();
              file.close();
              qDebug() << "Writing finished";
              return true;
          }
}

