#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QAbstractButton::clicked, this, [](){
        qDebug() << "Hello from WSL!";
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

