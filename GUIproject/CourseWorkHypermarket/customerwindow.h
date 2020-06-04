#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QWidget>

namespace Ui {
class CustomerWindow;
}

class CustomerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerWindow(QWidget *parent = 0);
    ~CustomerWindow();

signals:
    void toMainWindowFromCustomer();

private slots:
    void on_BackToMainWindowFromCustomerBtn_clicked();

private:
    Ui::CustomerWindow *ui;
};

#endif // CUSTOMERWINDOW_H
