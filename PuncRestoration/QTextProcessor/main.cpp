#include "mainwindow.h"
#include <Python.h>
#include <QApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Py_Initialize();
    if ( !Py_IsInitialized() )
    {
        return -1;
    }
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('/home/yunghuan/Desktop/Qt_Practice/PuncRestoration/process/')");
    w.show();
    return a.exec();
}
