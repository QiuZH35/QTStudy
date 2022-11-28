#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSetTableHeader_clicked()
{
    QTableWidgetItem * headerItem;
    QStringList headerText;
    headerText<<"姓 名"<<"性 别"<<"出生日期"<<"民 族"<<"学 号"<<"政治面貌";
    ui->tableWidget->setColumnCount(headerText.count());//设置行数
    for(int i=0;i<ui->tableWidget->columnCount();i++)
    {
        headerItem=new QTableWidgetItem(headerText.at(i));

        QFont font=ui->tableWidget->font();//设置字体属性
        font.setBold(true);
        font.setPointSize(14);
        headerItem->setFont(font);
        headerItem->setTextColor(Qt::red);

        ui->tableWidget->setHorizontalHeaderItem(i,headerItem);

    }


}

void MainWindow::on_btnSetRow_clicked()
{
    ui->tableWidget->setRowCount(ui->spinBox->value());//设置行数

    ui->tableWidget->setAlternatingRowColors(ui->checkBoxSetRowColor->isChecked());

}

void MainWindow::on_checkBoxSetRowColor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);  //设置行底色不同

}

void MainWindow::on_btnInitTableData_clicked()
{
    QString name,sex,political,fraction;

    QDate birth;
    birth.setDate(2020,03,03);
    ui->tableWidget->clearContents();
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        name=QString::asprintf("学生 %d",i+1);
        fraction=QString ::asprintf("%d",99-i);
        i%2==0?(sex="男",political="团员"):(sex="女",political="党员");
        createTableInit(i,name,sex,birth,"汉",fraction,political);

        birth=birth.addDays(20);
    }

}

void MainWindow::createTableInit(int Col,QString name, QString sex, QDate birth, QString nation, QString fraction, QString Political)
{
    QTableWidgetItem *item;
    item=new QTableWidgetItem(name,ctName);
    ui->tableWidget->setItem(Col,colName,item);

    QIcon icon;
    if(sex=="男")
        icon.addFile(":/new/image/boy.icon");
    else
        icon.addFile(":/new/image/girl.icon");
    item=new QTableWidgetItem(sex,ctSex);
    item->setIcon(icon);
    ui->tableWidget->setItem(Col,colSex,item);

    item=new QTableWidgetItem(birth.toString("yyyy年MM月dd日"),ctBirth);
    ui->tableWidget->setItem(Col,colBirth,item);

    item=new QTableWidgetItem(nation,ctNation);
    ui->tableWidget->setItem(Col,colNation,item);

    item=new QTableWidgetItem(fraction,ctFraction);
    ui->tableWidget->setItem(Col,colFraction,item);


    item=new QTableWidgetItem(Political,ctPolitical);
    if(Political=="党员")
        item->setBackgroundColor(Qt::yellow);
    ui->tableWidget->setItem(Col,colPolitical,item);



}

void MainWindow::on_btnInsert_clicked()
{
    int row=ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(row);
    QDate birth;
    birth.setDate(2020,11,11);
    createTableInit(row,"新学生","男",birth,"壮","85","党员");
}

void MainWindow::on_btnAppend_clicked()
{
    int row=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    QDate birth;
    birth.setDate(2020,11,11);
    createTableInit(row,"新学生","女",birth,"壮","85","党员");
}

void MainWindow::on_btnDeleteRow_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void MainWindow::on_btnAutoRowHeight_clicked()
{
    ui->tableWidget->resizeRowsToContents();
}

void MainWindow::on_btnAutoColWeight_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}

void MainWindow::on_btnReadTableToText_clicked()
{
    ui->plainTextEdit->clear();
    QTableWidgetItem * cellitem;

    QString str;
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        for(int j=0;j<ui->tableWidget->columnCount();j++)
        {
            cellitem=ui->tableWidget->item(i,j);
            str=str+cellitem->text()+"  ";
        }
        ui->plainTextEdit->appendPlainText(str);
        QFont font=ui->plainTextEdit->font();
        font.setPointSize(15);
        ui->plainTextEdit->setFont(font);

        str="";
    }
}

//是否可修改
void MainWindow::on_checkBoxSetTableUpdate_clicked(bool checked)
{
    if(checked)
    ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
    else
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

//显示表头
void MainWindow::on_checkBoxSetDisplayTableHeader_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}

//显示行号
void MainWindow::on_checkBoxSetDisplayColHeader_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}

//选择行
void MainWindow::on_radioButtonChooseRow_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}


//选择一个单元格
void MainWindow::on_radioButtonChooseCell_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);

}
