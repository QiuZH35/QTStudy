#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTreeWidgetItem>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->statusbar->addWidget(&labFileName);  //添加状态
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actWindowsHide_toggled(bool arg1)
{
    ui->dockWidget->setVisible(arg1);

}

void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    ui->actWindowsFloat->setChecked(topLevel);
}

void MainWindow::on_actWindowsFloat_toggled(bool arg1)
{
    ui->dockWidget->setFloating(arg1);
}

void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    ui->actWindowsHide->setChecked(visible);
}

//添加目录
void MainWindow::on_actAddFolder_triggered()
{

    //获取目录名称
    QString fullname=QFileDialog::getExistingDirectory();
    if(fullname.isEmpty()) return ;//判断是否为文件

    QString dir=fullname.right(fullname.length()-fullname.lastIndexOf("/")-1);
    if(!ui->treeWidget->currentIndex().isValid()) return ;
    QTreeWidgetItem *parItem=ui->treeWidget->currentItem();

    QTreeWidgetItem *item=new QTreeWidgetItem(itGroupItem);

    item->setText(colItem,dir);
    item->setText(colItemType,"type:group");
    item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsAutoTristate|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//设置item的状态
    item->setCheckState(colItem,Qt::Checked);

    parItem->addChild(item);


}

//添加文件
void MainWindow::on_actAddfiles_triggered()
{
    QStringList files=QFileDialog::getOpenFileNames(this,"选择一个或多个文件","","Images(*.jpg)");
    QTreeWidgetItem *parItem;
    if(files.isEmpty()) return ;//判断是否为文件
    QTreeWidgetItem *item=ui->treeWidget->currentItem();

    if(item->type()==itImageItem)
        parItem=item->parent();
    else
        parItem=item;
    foreach(auto file,files){
        item=new QTreeWidgetItem(itImageItem);
        QString str=file.right(file.length()-file.lastIndexOf("/")-1);
        item->setText(colItem,str);
        item->setText(colItemType,"type:imageFile");
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsAutoTristate|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//设置item的状态
        item->setCheckState(colItem,Qt::Checked);

        item->setData(colItem,Qt::UserRole,file);
        parItem->addChild(item);
    }

}

//item选中状态
void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous);
    if(current==NULL) return ;

    int var=current->type();
    switch(var){
    case itTopItem:
        ui->actAddfiles->setEnabled(true);
        ui->actAddFolder->setEnabled(true);
        ui->actDelList->setEnabled(false);

        break;
    case itGroupItem:
        ui->actAddfiles->setEnabled(true);
        ui->actAddFolder->setEnabled(true);
        ui->actDelList->setEnabled(true);

        break;
    case itImageItem:
        ui->actAddfiles->setEnabled(true);
        ui->actAddFolder->setEnabled(false);
        ui->actDelList->setEnabled(true);

        ui->actActSize->setEnabled(true);
        ui->actZoomOut->setEnabled(true);
        ui->actZoomIn->setEnabled(true);
        ui->actFitHeight->setEnabled(true);
        ui->actFFitWeight->setEnabled(true);
        labFileName.setText(current->data(colItem,Qt::UserRole).toString());
        curPixmap.load(current->data(colItem,Qt::UserRole).toString());
        on_actFitHeight_triggered();
        break;


    }

}

//适合高度
void MainWindow::on_actFitHeight_triggered()
{
    int H =ui->scrollArea->height();
    int readH=curPixmap.height();
    pixRatio=(float)H/readH;
    QPixmap pix=curPixmap.scaledToHeight(H-20);

    ui->label->setPixmap(pix);

}


//遍历节点
void MainWindow::on_actForeachList_triggered()
{
    for(int i=0;i<ui->treeWidget->topLevelItemCount();i++)
    {
        QTreeWidgetItem * item=ui->treeWidget->topLevelItem(i);
        changeItemCaption(item);
    }
}

void MainWindow::changeItemCaption(QTreeWidgetItem *item)
{
    QString str="*"+item->text(colItem);
    item->setText(colItem,str);
    for(int i=0;i<item->childCount();i++){
        changeItemCaption(item->child(i));
    }
}

void MainWindow::on_actDelList_triggered()
{
    QTreeWidgetItem *item=ui->treeWidget->currentItem();
    QTreeWidgetItem *parent=item->parent();
    parent->removeChild(item);
    delete item;

}

//适合宽度
void MainWindow::on_actFFitWeight_triggered()
{
    int w =ui->scrollArea->width();
    int readw=curPixmap.width();
    pixRatio=(float)w/readw;
    QPixmap pix=curPixmap.scaledToHeight(w-20);

    ui->label->setPixmap(pix);
}
//实际大小
void MainWindow::on_actActSize_triggered()
{
    pixRatio=1;

    ui->label->setPixmap(curPixmap);

}
//放大
void MainWindow::on_actZoomIn_triggered()
{
    pixRatio*=1.2;
    int w =pixRatio*curPixmap.width();
    int h=pixRatio*curPixmap.height();
    QPixmap pix=curPixmap.scaled(w,h);
    ui->label->setPixmap(pix);
}

//缩小
void MainWindow::on_actZoomOut_triggered()
{
    pixRatio/=1.2;
    int w =pixRatio*curPixmap.width();
    int h=pixRatio*curPixmap.height();
    QPixmap pix=curPixmap.scaled(w,h);
    ui->label->setPixmap(pix);
}
