#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

#include "registerform.h"

// customerwindow.h

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

signals:
    void toMainWindowFromLogin();

private slots:
    void on_BackToMainWindowFromLoginBtn_clicked();

    void on_goToResgisterButton_clicked();

    void on_confirmLoginButton_clicked();

private:
    Ui::LoginWindow *ui;
    RegisterForm *registerForm;
};

#endif // CUSTOMERWINDOW_H
