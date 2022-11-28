#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnPrepend_clicked()
{
    QString str1,str2;
    str1=ui->comboBoxStr1->currentText();
    str2=ui->comboBoxStr2->currentText();
    ui->EditRes->setText(str1.prepend(str2));

}

void Widget::on_btnAppend_clicked()
{
    QString str1,str2;
    str1=ui->comboBoxStr1->currentText();
    str2=ui->comboBoxStr2->currentText();
    ui->EditRes->setText(str1.append(str2));
}

void Widget::on_btnSize_clicked()
{
    QString str1=ui->comboBoxStr1->currentText();
    ui->spinBox->setValue(str1.size());
    ui->lableStust->setText("Size()");
}

void Widget::on_btnCount_clicked()
{
    QString str1=ui->comboBoxStr1->currentText();
    ui->spinBox->setValue(str1.count());
    ui->lableStust->setText("Count()");
}

void Widget::on_btnStartsWith_clicked()
{
    QString str1,str2;
    str1=ui->comboBoxStr1->currentText();
    str2=ui->comboBoxStr2->currentText();
    ui->checkBox->setChecked(str1.startsWith(str2));
    ui->checkBox->setText("StartsWith()");

}

void Widget::on_btnEndswith_clicked()
{
    QString str1,str2;
    str1=ui->comboBoxStr1->currentText();
    str2=ui->comboBoxStr2->currentText();
    ui->checkBox->setChecked(str1.endsWith(str2));
    ui->checkBox->setText("EndsWith");
}
