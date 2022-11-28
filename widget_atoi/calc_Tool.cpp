#include "calc_Tool.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("calc_Tool");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString str=ui->editNUm->text();  //获取控件文本
    int num=str.toInt();
    str=ui->editPrice->text();
    float price=str.toFloat();
    float total=num*price;
    str=str.setNum(total,'f',2); //设置total 格式，保留两位小数
    ui->editTotal->setText(str);
}

void Widget::on_btnDec_clicked()
{
    QString str=ui->editDec->text();
    long value=str.toLong();
    str=str.setNum(value,2);//转换二进制
    ui->editBin->setText(str);
    str=str.setNum(value,16).toUpper();
    ui->editHex->setText(str);
}

void Widget::on_btnBin_clicked()
{
    QString str=ui->editBin->text();
    bool ok;
    long value=str.toLong(&ok,2);   //设置bool值，判断是否为合适的类型
//    str=str.setNum(value,10);
    ui->editDec->setText(QString ::number(value));
//    str=str.setNum(value,16).toUpper();
    ui->editHex->setText(QString::number(value,16).toUpper());
}

void Widget::on_btnHex_clicked()
{
    QString str=ui->editHex->text();
    bool ok;
    long value=str.toLong(&ok,16);  //判断是否为16进制
 //   str=str.setNum(value,2);
    ui->editBin->setText(QString::number(value,2));
 //   str=str.setNum(value,10);
    ui->editDec->setText(QString ::number(value));
}

void Widget::on_btnClear_clicked()
{
    ui->editBin->clear();
    ui->editDec->clear();
    ui->editHex->clear();
}
