#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->comboBox->addItem(QIcon(":/rec/img/new-file-icon-16.jpg"),"Mark");
    //ui->comboBox->addItem(QIcon(":/rec/img/new-file-icon-16.jpg"),"John");
    //ui->comboBox->addItem("July");
    for(int i = 0 ; i < 10 ; i++){
        ui->comboBox->addItem(QString::number(i)+"name");
    }
    ui->comboBox->insertItem(3,"New text");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",QString::number(ui->comboBox->currentIndex()));
}

