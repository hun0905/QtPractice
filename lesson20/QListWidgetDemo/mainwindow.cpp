#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/img/new-file-icon-16.jpg"),"Mark");
    ui->listWidget->addItem(item);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/rec/img/new-file-icon-16.jpg"),"John");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/rec/img/new-file-icon-16.jpg"),"July");
    ui->listWidget->addItem(item3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackground(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}

