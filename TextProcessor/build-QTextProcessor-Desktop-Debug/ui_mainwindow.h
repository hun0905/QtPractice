/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_seg;
    QPushButton *pushButton_read;
    QPushButton *pushButton_rem_p;
    QPushButton *pushButton_rem_l;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_len;
    QPushButton *pushButton_write;
    QPushButton *pushButton_add_p;
    QPushButton *pushButton_voc;
    QPushButton *pushButton_set;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 20, 661, 521));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_seg = new QPushButton(widget);
        pushButton_seg->setObjectName(QString::fromUtf8("pushButton_seg"));

        horizontalLayout_2->addWidget(pushButton_seg);

        pushButton_read = new QPushButton(widget);
        pushButton_read->setObjectName(QString::fromUtf8("pushButton_read"));

        horizontalLayout_2->addWidget(pushButton_read);

        pushButton_rem_p = new QPushButton(widget);
        pushButton_rem_p->setObjectName(QString::fromUtf8("pushButton_rem_p"));

        horizontalLayout_2->addWidget(pushButton_rem_p);

        pushButton_rem_l = new QPushButton(widget);
        pushButton_rem_l->setObjectName(QString::fromUtf8("pushButton_rem_l"));

        horizontalLayout_2->addWidget(pushButton_rem_l);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_len = new QPushButton(widget);
        pushButton_len->setObjectName(QString::fromUtf8("pushButton_len"));

        horizontalLayout->addWidget(pushButton_len);

        pushButton_write = new QPushButton(widget);
        pushButton_write->setObjectName(QString::fromUtf8("pushButton_write"));

        horizontalLayout->addWidget(pushButton_write);

        pushButton_add_p = new QPushButton(widget);
        pushButton_add_p->setObjectName(QString::fromUtf8("pushButton_add_p"));

        horizontalLayout->addWidget(pushButton_add_p);

        pushButton_voc = new QPushButton(widget);
        pushButton_voc->setObjectName(QString::fromUtf8("pushButton_voc"));

        horizontalLayout->addWidget(pushButton_voc);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton_set = new QPushButton(widget);
        pushButton_set->setObjectName(QString::fromUtf8("pushButton_set"));

        verticalLayout_3->addWidget(pushButton_set);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_seg->setText(QCoreApplication::translate("MainWindow", "segmentation", nullptr));
        pushButton_read->setText(QCoreApplication::translate("MainWindow", "Read file", nullptr));
        pushButton_rem_p->setText(QCoreApplication::translate("MainWindow", "Remove punctuation", nullptr));
        pushButton_rem_l->setText(QCoreApplication::translate("MainWindow", "Remove  line", nullptr));
        pushButton_len->setText(QCoreApplication::translate("MainWindow", "sentence length", nullptr));
        pushButton_write->setText(QCoreApplication::translate("MainWindow", "Write file", nullptr));
        pushButton_add_p->setText(QCoreApplication::translate("MainWindow", "Add punctuation", nullptr));
        pushButton_voc->setText(QCoreApplication::translate("MainWindow", "Make vocab", nullptr));
        pushButton_set->setText(QCoreApplication::translate("MainWindow", "setting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
