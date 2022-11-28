#include "widget.h"
#include "ui_widget.h"
#include <QPalette>
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

//设置颜色
void Widget::on_horizontalSliderRed_valueChanged(int value)
{
    Q_UNUSED(value);
    QPalette pale=ui->textEdit->palette();
    QColor color;
    color.setRgb(ui->horizontalSliderRed->value(),ui->horizontalSliderGreen->value(),ui->horizontalSliderBlue->value(),ui->horizontalSliderAlpha->value());
    pale.setColor(QPalette::Base,color);

    ui->textEdit->setPalette(pale);

}

void Widget::on_horizontalSliderBlue_valueChanged(int value)
{
    on_horizontalSliderRed_valueChanged( value);
}

void Widget::on_horizontalSliderGreen_valueChanged(int value)
{
    on_horizontalSliderRed_valueChanged(value);
}

void Widget::on_horizontalSliderAlpha_valueChanged(int value)
{
    on_horizontalSliderRed_valueChanged( value);
}

//获取控件数值，设置value
void Widget::on_horizontalSliderSetBar_valueChanged(int value)
{
    ui->horizontalScrollBar->setValue(value);
    ui->progressBar->setValue(value);

}

void Widget::on_horizontalScrollBar_valueChanged(int value)
{
    on_horizontalSliderSetBar_valueChanged(value);
    ui->horizontalSliderSetBar->setValue(value);
}

void Widget::on_dial_valueChanged(int value)
{
    ui->lcdNumber->display(value);
}

void Widget::on_radioButtonBin_clicked()
{
    ui->lcdNumber->setDigitCount(8);
    ui->lcdNumber->setBinMode();
}

void Widget::on_radioButtonOct_clicked()
{
    ui->lcdNumber->setDigitCount(5);
    ui->lcdNumber->setOctMode();
}

void Widget::on_radioButtonDec_clicked()
{
    ui->lcdNumber->setDigitCount(3);
    ui->lcdNumber->setDecMode();
}

void Widget::on_radioButtonHex_clicked()
{
    ui->lcdNumber->setDigitCount(2);
    ui->lcdNumber->setHexMode();
}


void Widget::on_verticalSlider_valueChanged(int value)
{
    ui->verticalScrollBar->setValue(value);
    ui->progressBar_2->setValue(value);
}

void Widget::on_verticalScrollBar_valueChanged(int value)
{
    ui->verticalSlider->setValue(value);
    ui->progressBar_2->setValue(value);
}
