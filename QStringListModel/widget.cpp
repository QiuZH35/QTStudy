#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    theModel=new QStringListModel(this);

    QStringList list;
    list<<"Item1"<<"Item2"<<"Item3"<<"Item4"<<"Item5"<<"Item6"<<"Item77"<<"Item8";
    theModel->setStringList(list);
    ui->listView->setModel(theModel);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnClearText_clicked()
{
    ui->plainTextEdit->clear();
}

void Widget::on_btnShowDataToText_clicked()
{
    QStringList list=theModel->stringList();
    foreach(auto i ,list)
    ui->plainTextEdit->appendPlainText(i);
}

void Widget::on_btnReInit_clicked()
{

    QStringList list;
    list<<"Item1"<<"Item2"<<"Item3"<<"Item4"<<"Item5"<<"Item6"<<"Item77"<<"Item8";
    theModel->setStringList(list);
//    ui->listView->setModel(theModel);
//    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
}

void Widget::on_btnClearList_clicked()
{
    theModel->removeRows(0,theModel->rowCount());
}

void Widget::on_btnDeleteItem_clicked()
{
    theModel->removeRow(ui->listView->currentIndex().row());
}

//尾部添加
void Widget::on_btnAppendItem_clicked()
{
    theModel->insertRow(theModel->rowCount());
    QModelIndex index=theModel->index(theModel->rowCount()-1,0);
    theModel->setData(index,"new Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

//插入
void Widget::on_btnInsertItem_clicked()
{

    QModelIndex index=ui->listView->currentIndex();
    theModel->insertRow(index.row());
    theModel->setData(index,"insert Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void Widget::on_listView_clicked(const QModelIndex &index)
{
    ui->labelRow->setText(QString::asprintf("%d",index.row()));
    ui->labelCul->setText(QString::asprintf("%d",index.column()));
}
