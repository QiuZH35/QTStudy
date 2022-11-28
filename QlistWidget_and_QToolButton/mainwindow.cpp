#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);

    //设置button的默认活动
    ui->toolButtonInit->setDefaultAction(ui->actionInit);
    ui->toolButtonClaer->setDefaultAction(ui->actionClear);
    ui->toolButtonDel->setDefaultAction(ui->actionDelete);
    ui->toolButtonAppend->setDefaultAction(ui->actionAdd);
    ui->toolButtonInsert->setDefaultAction(ui->actionInsert);
    ui->toolButtonSeelAll->setDefaultAction(ui->actionAllChoose);
    ui->toolButtonSelNot->setDefaultAction(ui->actionAllUnChoose);
    ui->toolButtonSelInv->setDefaultAction(ui->actionNotChoose);

    //绑定下拉menu
    QMenu *menu=new QMenu(this);
    menu->addAction(ui->actionAllChoose);
    menu->addAction(ui->actionNotChoose);
    menu->addAction(ui->actionAllUnChoose);
    ui->actionSelItem->setMenu(menu);

    ui->toolBarMain->addAction(ui->actionSelItem);
    ui->toolButtonSelItem->setDefaultAction(ui->actionSelItem);

    ui->toolBarMain->addSeparator();
    ui->toolBarMain->addAction(ui->actionExit);




}

MainWindow::~MainWindow()
{
    delete ui;
}


//设置联动效果
void MainWindow::on_toolBox_currentChanged(int index)
{
    ui->tabWidget->setCurrentIndex(index);
}


//初始化
void MainWindow::on_actionInit_triggered()
{
    ui->listWidget->clear();
    QListWidgetItem * aItem;

    bool chk=ui->checkBox->isChecked();
    for(int i=0;i<20;i++)
    {
        QString str =QString::asprintf("Item %d",i);
        aItem=new QListWidgetItem(str);
        aItem->setCheckState(Qt::Checked);

        //设置状态
        if(chk)
        {
          aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsEditable|Qt::ItemIsUserCheckable);
        }else
        {

            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
        }
        ui->listWidget->addItem(aItem);
    }


}

void MainWindow::on_actionClear_triggered()
{
    ui->listWidget->clear();
}

//插入项
void MainWindow::on_actionInsert_triggered()
{
    QListWidgetItem * aItem;

    bool chk=ui->checkBox->isChecked();


        QString str =QString::asprintf("Item new Insert ");
        aItem=new QListWidgetItem(str);
        aItem->setCheckState(Qt::Checked);
        if(chk)
        {
          aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsEditable|Qt::ItemIsUserCheckable);
        }else
        {

            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
        }
        ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);

}

void MainWindow::on_actionAdd_triggered()
{
    QListWidgetItem * aItem;

    bool chk=ui->checkBox->isChecked();


        QString str =QString::asprintf("Item new Add ");
        aItem=new QListWidgetItem(str);
        aItem->setCheckState(Qt::Checked);
        if(chk)
        {
          aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsEditable|Qt::ItemIsUserCheckable);
        }else
        {

            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
        }
        ui->listWidget->addItem(aItem);

}

void MainWindow::on_actionDelete_triggered()
{
    //获取当前行，删除
        QListWidgetItem * aItem=ui->listWidget->takeItem(ui->listWidget->currentRow());

        delete aItem;
}

void MainWindow::on_actionAllChoose_triggered()
{
    int count=ui->listWidget->count();
    for(int i=0;i<count;i++)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);
        aItem->setCheckState(Qt::Checked);

    }
}

void MainWindow::on_actionAllUnChoose_triggered()
{
    int count=ui->listWidget->count();
    for(int i=0;i<count;i++)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);
        aItem->setCheckState(Qt::Unchecked);

    }
}

void MainWindow::on_actionNotChoose_triggered()
{
    int count=ui->listWidget->count();
    for(int i=0;i<count;i++)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);
        if(aItem->checkState()==Qt::Checked)
            aItem->setCheckState(Qt::Unchecked);
        else
            aItem->setCheckState(Qt::Checked);
    }
}

//设置可编辑状态
void MainWindow::on_checkBox_clicked(bool checked)
{
    int count=ui->listWidget->count();
    for(int i=0;i<count;i++)
    {
        QListWidgetItem *aItem=ui->listWidget->item(i);
        if(checked)
            aItem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable);
        else
            aItem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable);
    }
}


//获取item当前项
void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str;
    if(current!=NULL)
    {
        if(previous!=NULL)
        {
            str="前一项 : "+previous->text()+" 当前项 : "+current->text();
        }
        else
        {
            str="当前项 : "+current->text();
        }
        ui->lineEdit->setText(str);
    }

}

void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos)

    QMenu * menuList=new QMenu(this);

    //添加Action创建菜单项

    menuList->addAction(ui->actionAdd);
    menuList->addAction(ui->actionInit);
    menuList->addAction(ui->actionDelete);
    menuList->addAction(ui->actionClear);
    menuList->addAction(ui->actionInsert);

    menuList->addSeparator();

    menuList->addAction(ui->actionAllChoose);
    menuList->addAction(ui->actionNotChoose);
    menuList->addAction(ui->actionAllUnChoose);

    menuList->exec(QCursor::pos());

    delete menuList;


}
