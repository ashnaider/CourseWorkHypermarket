#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ownerWindow = new OwnerWindow();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(ownerWindow, &OwnerWindow::toMainWindowFromOwner, this, &MainWindow::show);

    loginWindow = new LoginWindow();

    connect(loginWindow, &LoginWindow::toMainWindowFromLogin, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OwnerBtn_clicked()
{
    ownerWindow->show();
    this->close();
}

void MainWindow::on_LoginBtn_clicked()
{
    loginWindow->show();
    this->close();
}
