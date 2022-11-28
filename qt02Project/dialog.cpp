#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //动作联动
    QObject::connect(ui->Blue, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    QObject::connect(ui->Red, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    QObject::connect(ui->Black, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_checkBoxUnderline_clicked(bool checked)
{
    QFont font=ui->textEdit->font();
    font.setUnderline(checked);
    ui->textEdit->setFont(font);
}

void Dialog::on_Italic_clicked(bool checked)
{
    QFont font=ui->textEdit->font();
    font.setItalic(checked);
    ui->textEdit->setFont(font);
}

void Dialog::on_checkBox_Bold_clicked(bool checked)
{
    QFont font=ui->textEdit->font();  //获取Ui中控件的属性
    font.setBold(checked);
    ui->textEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette plet=ui->textEdit->palette();
    if(ui->Black->isChecked())
    plet.setColor(QPalette::Text,Qt::black); //设置字体颜色
    else if (ui->Blue->isChecked())
    plet.setColor(QPalette::Text,Qt::blue); //设置字体颜色
    else if(ui->Red->isChecked())
    plet.setColor(QPalette::Text,Qt::red); //设置字体颜色
    else
    plet.setColor(QPalette::Text,Qt::black); //设置字体颜色
    ui->textEdit->setPalette(plet);
}
