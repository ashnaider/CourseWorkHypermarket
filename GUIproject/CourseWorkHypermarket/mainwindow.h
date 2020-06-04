#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "customerwindow.h"
#include "ownerwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_OwnerBtn_clicked();

    void on_CustomerBtn_clicked();

private:
    Ui::MainWindow *ui;
    OwnerWindow *ownerWindow;
    CustomerWindow *customerWindow;
};

#endif // MAINWINDOW_H
