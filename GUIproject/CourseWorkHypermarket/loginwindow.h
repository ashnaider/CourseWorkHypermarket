#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

// #include "customer.h"

#include "registerform.h"
#include "customerwindow.h"
#include "regularcustomerwindow.h"


namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

    void clearInputFields();

signals:
    void toMainWindowFromLogin();

private slots:
    void on_BackToMainWindowFromLoginBtn_clicked();

    void on_goToResgisterButton_clicked();

    void on_confirmLoginButton_clicked();

private:
    Ui::LoginWindow *ui;
    RegisterForm *registerForm;

    Customer* customer;

    CustomerWindow *customerWindow;

    RegularCustomerWindow *regularCustomerWindow;

    bool isCustomerRegular(std::string customerName);
};

#endif // CUSTOMERWINDOW_H
