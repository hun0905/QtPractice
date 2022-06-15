#ifndef SETTING_H
#define SETTING_H

#include <QDialog>

namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr,int data = 20);
    ~Setting();

private:
    Ui::Setting *ui;
    int data_set;
    signals:
        void sendData(int);
private slots:
        void on_pushButton_OK_clicked();
        void on_pushButton_can_clicked();
};

#endif // SETTING_H
