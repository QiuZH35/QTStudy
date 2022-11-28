#include "dialog.h"

void Dialog::UI_init()
{
    //实例化对象
    checkUnderline=new QCheckBox(tr("Underline"));
    checkItalic=new QCheckBox(tr("Italic"));
    checkBold=new QCheckBox(tr("Bold"));
    //将CheckBox控制权交给QHBoxLayout
    QHBoxLayout* QHlayout=new QHBoxLayout();
    QHlayout->addWidget(checkUnderline);
    QHlayout->addWidget(checkBold);
    QHlayout->addWidget(checkItalic);

    rbtnBlack=new QRadioButton(tr("Black"));
    rbtnBule=new QRadioButton(tr("Bule"));
    rbtnRed=new QRadioButton(tr("Red"));
    QHBoxLayout* QHlayout2=new QHBoxLayout();
    QHlayout2->addWidget(rbtnRed);
    QHlayout2->addWidget(rbtnBule);
    QHlayout2->addWidget(rbtnBlack);

    textEdit=new QPlainTextEdit();
    QFont font=textEdit->font();
    font.setPointSize(20);
    textEdit->setFont(font);
    textEdit->setPlainText("Hello world !\n this is Arxibye!");


    btnOk=new QPushButton(tr("OK"));
    btnConcel=new QPushButton(tr("Concel"));
    btnClose=new QPushButton(tr("Close"));
    QHBoxLayout* QHlayout3=new QHBoxLayout();
    QHlayout3->addStretch();  //添加弹簧，控制距离
    QHlayout3->addWidget(btnOk);
    QHlayout3->addWidget(btnConcel);
    QHlayout3->addStretch();  //添加弹簧，控制距离
    QHlayout3->addWidget(btnClose);

    //设置布局
    QVBoxLayout*Vlayout=new QVBoxLayout();
    Vlayout->addLayout(QHlayout);
    Vlayout->addLayout(QHlayout2);
    Vlayout->addWidget(textEdit);
    Vlayout->addLayout(QHlayout3);
    setLayout(Vlayout);
}

void Dialog::isitSignalSlots()
{
    //绑定连接事件
  connect(btnOk,SIGNAL(clicked()),this,SLOT(accept()));
  connect(btnClose,SIGNAL(clicked()),this,SLOT(close()));
  connect(btnConcel,SIGNAL(clicked()),this,SLOT(reject()));

  connect(checkUnderline,SIGNAL(clicked(bool)),this,SLOT(on_checkBoxUnderLine(bool)));
  connect(checkItalic,SIGNAL(clicked(bool)),this,SLOT(on_checkBoxItalic(bool)));
  connect(checkBold,SIGNAL(clicked(bool)),this,SLOT(on_checkBoxBold(bool)));

  connect(rbtnRed,SIGNAL(clicked()),this,SLOT(setTextColor()));
  connect(rbtnBlack,SIGNAL(clicked()),this,SLOT(setTextColor()));
  connect(rbtnBule,SIGNAL(clicked()),this,SLOT(setTextColor()));
}

void Dialog::on_checkBoxUnderLine(bool checked)
{
    QFont font=textEdit->font();
    font.setUnderline(checked);
    textEdit->setFont(font);

}

void Dialog::on_checkBoxItalic(bool checked)
{
    QFont font=textEdit->font();
    font.setItalic(checked);
    textEdit->setFont(font);
}

void Dialog::on_checkBoxBold(bool checked)
{
    QFont font=textEdit->font();
    font.setBold(checked);
    textEdit->setFont(font);

}

void Dialog::setTextColor()
{
    QPalette pale=textEdit->palette();
    if(rbtnRed->isChecked())
       pale.setColor(QPalette::Text,Qt::red);
    else if(rbtnBule->isChecked())
       pale.setColor(QPalette::Text,Qt::blue);
    else if(rbtnBlack->isChecked())
       pale.setColor(QPalette::Text,Qt::black);

    textEdit->setPalette(pale);

}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{

    UI_init();
    isitSignalSlots();

}

Dialog::~Dialog()
{
}

