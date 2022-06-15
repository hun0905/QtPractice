#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent,int data) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    ui->spinBox->setValue(data);

}
Setting::~Setting()
{
    delete ui;
}

void Setting::on_pushButton_OK_clicked()
{


    emit sendData(ui->spinBox->value());
    this->close();
}


void Setting::on_pushButton_can_clicked()
{
    this->close();
}

