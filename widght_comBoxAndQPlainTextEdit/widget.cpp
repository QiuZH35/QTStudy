#include "widget.h"
#include "ui_widget.h"
#include <QTextDocument>
#include <QTextBlock>
#include <QMap>
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


void Widget::on_btnComboBoxInit_clicked()
{
    ui->comboBox->clear();
    for(int i=0;i<10;i++)
    {
        ui->comboBox->addItem( QString::asprintf("item : %d",i)) ;

    }

}

void Widget::on_btnComboBoxClear_clicked()
{
    ui->comboBox->clear();
}



void Widget::on_checkBox_clicked(bool checked)
{
    ui->comboBox->setEditable(checked);

}

void Widget::on_btnAddTextToComboBox_clicked()
{
    QTextDocument *document=ui->plainTextEdit->document();
    for (int i=0;i<document->blockCount();i++)
    {
        ui->comboBox->addItem(document->findBlockByNumber(i).text());
    }

}

void Widget::on_btnTextClear_clicked(bool checked)
{
    ui->plainTextEdit->clear();
}

void Widget::on_Read_Only_clicked(bool checked)
{
    ui->plainTextEdit->setReadOnly(checked);
}

void Widget::on_btnComboBox_cityInit_clicked()
{
    QMap<QString,int> map;
    map.insert("北京",10);
    map.insert("上海",20);
    map.insert("天津",30);

    foreach(auto i,map.keys())
    {
        ui->comboBoxCity->addItem(i,map.value(i));
    }
}
