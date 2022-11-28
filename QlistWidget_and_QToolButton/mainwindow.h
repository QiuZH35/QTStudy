#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
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
    void on_toolBox_currentChanged(int index);

    void on_actionInit_triggered();

    void on_actionClear_triggered();

    void on_actionInsert_triggered();

    void on_actionAdd_triggered();

    void on_actionDelete_triggered();

    void on_actionAllChoose_triggered();

    void on_actionAllUnChoose_triggered();

    void on_actionNotChoose_triggered();

    void on_checkBox_clicked(bool checked);

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
