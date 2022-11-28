#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //创建系统文件模式指针
    model=new QFileSystemModel(this);
    model->setRootPath(QDir::currentPath()); //获取当前系统文件

    //在View中显示文件
    ui->treeView->setModel(model);
    ui->tableView->setModel(model);
    ui->listView->setModel(model);
    ui->tableView->verticalHeader()->setVisible(false);//不显示表头

    //设置联动
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->listView,SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->tableView,SLOT(setRootIndex(QModelIndex)));




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->labelName->setText(model->fileName(index));
    ui->labelPath->setText(model->filePath(index));
    ui->labelType->setText(model->type(index));

    unsigned size=model->size(index)/1024;
    if(size<1024)
        ui->labelSize->setText(QString::asprintf("%d KB",size));
    else
        ui->labelSize->setText(QString::asprintf("%.f MB",(float)size/1024));
    ui->checkBox->setChecked(model->isDir(index));// 判断是否为文件
}
