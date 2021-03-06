#ifndef REGISTERFORM_H
#define REGISTERFORM_H

#include <QWidget>

#include "utilities.h"

namespace Ui {
class RegisterForm;
}

class RegisterForm : public QWidget
{
    Q_OBJECT

signals:
    void goBackToLoginForm();

public:
    explicit RegisterForm(QWidget *parent = 0);
    ~RegisterForm();

private slots:
    void on_finishRegistrationButton_clicked();

    void on_BackToLoginButton_clicked();

private:
    Ui::RegisterForm *ui;

    Utilities *utilities;

    void saveNewUser(std::string newName, std::string newPassword);

    void setLineEditValidation();

    void clearLineInputFields();
};

#endif // REGISTERFORM_H
