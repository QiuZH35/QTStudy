#include "widget.h"
#include "ui_widget.h"
#include "qperson.h"
#include <QMetaObject>
#include <QMetaProperty>
#include <QDebug>
#include <QTextDocument>
#include <QTextBlock>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->spinBoxBoy->setProperty("isboy",true);
    ui->spinBoxGril->setProperty("isboy",false);

    boy=new QPerson("王小明");
    boy->setProperty("score",95);
    boy->setProperty("age",15);
    boy->setProperty("sex","boy");

    girl=new QPerson("王翠花");
    girl->setProperty("score",96);
    girl->setProperty("age",20);
    girl->setProperty("sex","Girl");

    //动作连接
    connect(girl,&QPerson::ageChanged,this,&Widget::on_ageChanged);
    connect(boy,&QPerson::ageChanged,this,&Widget::on_ageChanged);
    connect(ui->spinBoxBoy, SIGNAL(valueChanged(int)), this, SLOT(on_spin_vlaueChanged(int)));
    connect(ui->spinBoxGril, SIGNAL(valueChanged(int)), this, SLOT(on_spin_vlaueChanged(int)));


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_spin_vlaueChanged(int age1)
{
    Q_UNUSED(age1) //告诉编译器不使用age1
    QSpinBox* spinBox=qobject_cast<QSpinBox*>(sender());
    if(spinBox->property("isboy").toBool())//判断is Boy or girl
        boy->setAge(spinBox->value());
    else
        girl->setAge(spinBox->value());
}

void Widget::on_ageChanged(unsigned value)
{
    Q_UNUSED(value)
    QPerson*aperson=qobject_cast<QPerson*>(sender());
    QString aName=aperson->property("name").toString();
    QString aSex=aperson->property("sex").toString();
    unsigned aAge=aperson->getAge();
    ui->plainTextEdit->appendPlainText(aName+",性别："+aSex+QString("，age=%1").arg(aAge));
    if(aSex=="boy")
    {
        ui->spinBoxBoy->setValue(aAge);
    }
    if(aSex=="Girl")
    {
         ui->spinBoxGril->setValue(aAge);
    }
}

void Widget::on_btnBoyInc_clicked()
{
    boy->incAge();
}

void Widget::on_btnGirlInc_clicked()
{
    girl->incAge();
}

void Widget::on_btnClassInfo_clicked()
{
    const QMetaObject *meta=girl->metaObject();
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("==元对象信息==\n");
    ui->plainTextEdit->appendPlainText(QString("类命名：%1\n").arg(meta->className()));
    ui->plainTextEdit->appendPlainText("property\n");
    for(auto i=meta->propertyOffset();i<meta->propertyCount();i++)
    {
        QMetaProperty prop=meta->property(i);
        const char* proName=prop.name();
        QString proValue=boy->property(proName).toString();
        ui->plainTextEdit->appendPlainText(QString("属性名称：%1 ，属性值：%2").arg(proName).arg(proValue));


    }
    ui->plainTextEdit->appendPlainText("");
    ui->plainTextEdit->appendPlainText("classInfo");
    for(auto i=meta->classInfoOffset();i<meta->classInfoCount();i++)
    {
        QMetaClassInfo classInfo=meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(QString("name : %1 ,value : %2").arg(classInfo.name()).arg(classInfo.value()));
    }

    //获取控件数据
    QTextDocument*document=ui->plainTextEdit->document();

    for(QTextBlock text=document->begin();text !=document->end();text=text.next())
    {
    qDebug()<<text.text();
    }
}


