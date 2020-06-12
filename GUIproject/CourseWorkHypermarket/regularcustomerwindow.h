#ifndef REGULARCUSTOMERWINDOW_H
#define REGULARCUSTOMERWINDOW_H

#include <QWidget>

#include <string>

namespace Ui {
class RegularCustomerWindow;
}

class RegularCustomerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RegularCustomerWindow(std::string customerName, QWidget *parent = 0);
    ~RegularCustomerWindow();

signals:
    void goBackToLoginWindow();

private slots:
    void on_backToLoginWindowButton_clicked();

private:
    Ui::RegularCustomerWindow *ui;

    std::string customerName;
};

#endif // REGULARCUSTOMERWINDOW_H
