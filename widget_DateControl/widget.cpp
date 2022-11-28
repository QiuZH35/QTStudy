#include "widget.h"
#include "ui_widget.h"

#include <QTimer>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置定时器，动态显示时间
    QTimer *timer=new QTimer(this);
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(on_btnGetNowDate_clicked()));


    fTimer=new QTimer(this);
    connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));

}

Widget::~Widget()
{
    delete ui;

}


void Widget::on_pushButton_clicked()
{

}

void Widget::on_btnGetNowDate_clicked()
{
    //获取当前时间日期
    QDateTime curDateTime=QDateTime:: currentDateTime();
    ui->dateEdit->setDate(curDateTime.date());
    ui->lineEditDate->setText(curDateTime.toString("yyyy年MM月dd日"));

    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->lineEditDateTime->setText(curDateTime.toString("yyyy年MM月dd日 hh:mm:ss"));

    ui->timeEdit->setTime(curDateTime.time());
    ui->lineEditTime->setText(curDateTime.toString("hh:mm:ss"));

}



void Widget::on_pushButton_2_clicked()
{
    QString str=ui->lineEditTime->text();
    QTime time=QTime::fromString(str,"hh:mm:ss");
    ui->timeEdit->setTime(time);
}

void Widget::on_pushButton_3_clicked()
{
    QString str=ui->lineEditDate->text();
    QDate date=QDate::fromString(str,"yyyy年MM月dd日");
    ui->dateEdit->setDate(date);
}

void Widget::on_pushButton_4_clicked()
{
    QString str=ui->lineEditDateTime->text();
    QDateTime dateTime =QDateTime::fromString(str,"yyyy年MM月dd日 hh:mm:ss");
    ui->dateTimeEdit->setDateTime(dateTime);
}

void Widget::on_calendarWidgetDate_selectionChanged()
{
    QDate dt=ui->calendarWidgetDate->selectedDate();
    ui->lineEditSeletionDateTime->setText(dt.toString("yyyy年MM月dd日"));
}

void Widget::on_btnStartTime_clicked()
{

    ui->btnStopTime->setEnabled(true);
    fTimer->start(ui->spinBoxTimes->value());
    ui->lable_showDate->clear();
    ui->btnStartTime->setEnabled(false);
}

void Widget::on_btnStopTime_clicked()
{
    ui->btnStopTime->setEnabled(false);
    fTimer->stop();
    ui->btnStartTime->setEnabled(true);
    ui->lable_showDate->setText(QString::asprintf("%d分%d秒%d毫秒",minuets,seconds,msec));
}

void Widget::on_btnSetTimes_clicked()
{
    fTimer->start(ui->spinBoxTimes->value());
}

//计时器启动计数
void Widget::on_timer_timeout()
{

    //获取定时器计数值
    msec+=fTimer->interval();
    if((msec/999) >=1)
    {

        if(msec>1000)
        {
            seconds+=msec/1000;  //当毫秒数大于一千后，就计算其折算后的秒数
            msec=msec%1000;  //获取相除之后的精度
        }
        else
        {
            seconds++;
            msec=0;
        }

    }

    //lcd控件使用display设置数值
    ui->lcdms->display(msec);
    ui->lcdSeconds->display(seconds);
    ui->lcdMints->display(minuets);
    ui->progressBar->setValue(seconds);
    if((seconds/59)>=1)
    {

        if(seconds>60)
        {
            minuets+=seconds/60;
            seconds%=60;
        }else
        {
            minuets++;
            seconds=0;
        }
    }




//    if(seconds==59)
//    {
//        seconds=0;
//    }
    if(minuets==59)
    {
        minuets=0;
    }

}

void Widget::on_btnResetStart_clicked()
{
    ui->lcdms->display(0);
    ui->lcdSeconds->display(0);
    ui->lcdMints->display(0);
    seconds=0;
    minuets=0;
    msec=0;
}
