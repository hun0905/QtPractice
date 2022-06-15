#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <setting.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_read_clicked();

    void on_pushButton_write_clicked();

    void on_pushButton_rem_p_clicked();

    void on_pushButton_len_clicked();

    void on_pushButton_rem_l_clicked();


    void on_pushButton_set_clicked();

    void receive_data(int);

    void on_pushButton_add_p_clicked();

private:
    Ui::MainWindow *ui;
    Setting * setting;
    int length = 20;
};
#endif // MAINWINDOW_H
