#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resource/img/final.png");
    int width = ui->label_pic->width();
    int height = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label_7,1);
    ui->statusbar->addPermanentWidget(ui->progressBar,3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_passeord->text();
    if(username == "test" && password =="test"){
        //QMessageBox::information(this,"Login","Username and password is correct");
        //hide();
        //secdialog = new SecDialog(this);
        //secdialog->show();
        ui->statusbar->showMessage("Username and password is correct",3000);
        ui->label_7->setText("Username and password is correct");
    }else{
        //QMessageBox::information(this,"Login","Username and password is not correct"); //3 s disaapear
        ui->statusbar->showMessage("Username and password is not correct",3000);
        ui->label_7->setText("Username and password is not correct");
    }
}

