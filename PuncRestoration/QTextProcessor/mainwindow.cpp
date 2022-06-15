#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <Python.h>
#include <setting.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_write_clicked()
{
    QString filter =  "ALL File (*.*) ;; Text File (*.txt) ;; XML File (*.xml)";
    QString file_name = QFileDialog::getOpenFileName(this,"open a file","/",filter);
    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text )){
        QMessageBox::warning(this,"title","file not open");
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_pushButton_read_clicked()
{
    QString filter =  "ALL File (*.*) ;; Text File (*.txt) ;; XML File (*.xml)";
    QString file_name = QFileDialog::getOpenFileName(this,"open a file","/",filter);
    QFile file(file_name);
    if(!file.open(QFile::WriteOnly | QFile::Text )){
        QMessageBox::warning(this,"title","file not open");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlaceholderText(text);
    file.close();
}
void MainWindow::on_pushButton_len_clicked()
{

    Py_Initialize();

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('/home/yunghuan/Desktop/Qt_Practice/PuncRestoration/process/')");
    QString text = ui->plainTextEdit->toPlainText();
    PyObject* pModule = PyImport_ImportModule("processor");
    if (!pModule) {
            cout<< "Cant open python file!\n" << endl;
            return ;
    }
    PyObject* p_len= PyObject_GetAttrString(pModule,"sen_len");
    if(!p_len){
        cout<<"Get function failed"<<endl;
        return ;
    }
    PyObject *Presult;
    Presult =  PyObject_CallFunction(p_len,"sI",text.toStdString().c_str(),length);
    string returnedString = PyUnicode_AsUTF8(Presult);
    ui->plainTextEdit->setPlainText( QString::fromStdString(returnedString) );
    Py_DECREF(pModule);
    Py_DECREF(p_len);
    Py_DECREF(Presult);
    Py_Finalize();
}

void MainWindow::on_pushButton_rem_p_clicked()
{
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('/home/yunghuan/Desktop/Qt_Practice/PuncRestoration/process/')");
    QString text = ui->plainTextEdit->toPlainText();
    PyObject* pModule = PyImport_ImportModule("processor");
    if (!pModule) {
            cout<< "Cant open python file!\n" << endl;
            return ;
    }
    PyObject* p_remp= PyObject_GetAttrString(pModule,"remove_punc");
    if(!p_remp){
        cout<<"Get function failed"<<endl;
        return ;
    }
    PyObject *Presult;
    Presult =  PyObject_CallFunction(p_remp,"s",text.toStdString().c_str());
    string returnedString = PyUnicode_AsUTF8(Presult);
    ui->plainTextEdit->setPlainText( QString::fromStdString(returnedString) );
    //cout<<returnedString;
    Py_DECREF(pModule);
    Py_DECREF(p_remp);
    Py_DECREF(Presult);
    Py_Finalize();
}





void MainWindow::on_pushButton_rem_l_clicked()
{
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('/home/yunghuan/Desktop/Qt_Practice/PuncRestoration/process/')");
    QString text = ui->plainTextEdit->toPlainText();
    PyObject* pModule = PyImport_ImportModule("processor");
    if (!pModule) {
            cout<< "Cant open python file!\n" << endl;
            return ;
    }
    PyObject* p_remp= PyObject_GetAttrString(pModule,"remove_line");
    if(!p_remp){
        cout<<"Get function failed"<<endl;
        return ;
    }
    PyObject *Presult;
    Presult =  PyObject_CallFunction(p_remp,"s",text.toStdString().c_str());
    string returnedString = PyUnicode_AsUTF8(Presult);
    ui->plainTextEdit->setPlainText( QString::fromStdString(returnedString) );
    //cout<<returnedString;
    Py_DECREF(pModule);
    Py_DECREF(p_remp);
    Py_DECREF(Presult);
    Py_Finalize();
}

void MainWindow::on_pushButton_set_clicked()
{
    setting = new Setting(this,length);
    connect(setting,SIGNAL(sendData(int)),this,SLOT(receive_data(int)));
    setting->show();
}
void MainWindow::receive_data(int data)
{
    string out = "sentence length: ";
    length = data;
    out = out+to_string(length);
    ui->statusbar->showMessage(QString::fromStdString(out));
}

void MainWindow::on_pushButton_add_p_clicked()
{
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('/home/yunghuan/Desktop/Qt_Practice/TextProcessor/process/')");
    QString text = ui->plainTextEdit->toPlainText();
    PyObject* pModule = PyImport_ImportModule("processor");
    if (!pModule) {
            cout<< "Cant open python file!\n" << endl;
            return ;
    }
    PyObject* p_addp= PyObject_GetAttrString(pModule,"add_punctuation");
    if(!p_addp){
        cout<<"Get function failed"<<endl;
        return ;
    }
    PyObject *Presult;
    Presult =  PyObject_CallFunction(p_addp,"s",text.toStdString().c_str());
    string returnedString = PyUnicode_AsUTF8(Presult);
    ui->plainTextEdit->setPlainText( QString::fromStdString(returnedString) );
    //cout<<returnedString;
    Py_DECREF(pModule);
    Py_DECREF(p_addp);
    Py_DECREF(Presult);
    Py_Finalize();
}
