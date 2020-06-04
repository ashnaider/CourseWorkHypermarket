#ifndef REGISTERFORM_H
#define REGISTERFORM_H

#include <QWidget>

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
    void on_backToLoginButton_clicked();

private:
    Ui::RegisterForm *ui;
};

#endif // REGISTERFORM_H
