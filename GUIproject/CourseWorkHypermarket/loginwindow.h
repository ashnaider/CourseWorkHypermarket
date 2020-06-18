#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <QString>

#include "registerform.h"
#include "customerwindow.h"

#include "utilities.h"


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

    CustomerWindow *customerWindow;

    Utilities *utilities;

    QString passwordsFile = "/home/anton/CourseWorkDb/passwords.txt";

    bool isCustomerRegular(std::string customerName);

};

#endif // CUSTOMERWINDOW_H
