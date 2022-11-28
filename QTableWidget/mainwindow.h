#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDate>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSetTableHeader_clicked();

    void on_btnSetRow_clicked();

    void on_checkBoxSetRowColor_clicked(bool checked);

    void on_btnInitTableData_clicked();

    void on_btnInsert_clicked();

    void on_btnAppend_clicked();

    void on_btnDeleteRow_clicked();

    void on_btnAutoRowHeight_clicked();

    void on_btnAutoColWeight_clicked();

    void on_btnReadTableToText_clicked();

    void on_checkBoxSetTableUpdate_clicked(bool checked);



    void on_checkBoxSetDisplayTableHeader_clicked(bool checked);

    void on_checkBoxSetDisplayColHeader_clicked(bool checked);

    void on_radioButtonChooseRow_clicked();

    void on_radioButtonChooseCell_clicked();

private:
    Ui::MainWindow *ui;
    //自定义单元格的Type类型，在创建单元格的ITem时使用
    enum CellType{ctName=1000,ctSex,ctBirth,ctNation,ctFraction,ctPolitical};
    enum FieldColNum{colName=0,colSex,colBirth,colNation,colFraction,colPolitical};
    void  createTableInit(int Col,QString name,QString sex,QDate birth ,QString nation ,QString fraction,QString Political);
};
#endif // MAINWINDOW_H
