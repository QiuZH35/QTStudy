#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include <QLabel>
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
    void on_actWindowsHide_toggled(bool arg1);

    void on_dockWidget_topLevelChanged(bool topLevel);

    void on_actWindowsFloat_toggled(bool arg1);

    void on_dockWidget_visibilityChanged(bool visible);

    void on_actAddFolder_triggered();
    void on_actAddfiles_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actFitHeight_triggered();

    void on_actForeachList_triggered();

    void on_actDelList_triggered();

    void on_actFFitWeight_triggered();

    void on_actActSize_triggered();

    void on_actZoomIn_triggered();

    void on_actZoomOut_triggered();

private:
    enum treeItemType{itTopItem=1001,itGroupItem,itImageItem};
    enum treeColnum{colItem=0,colItemType=1};//目录树列的编号定义
    QPixmap curPixmap;
    QLabel labFileName;
    float pixRatio;
    void changeItemCaption(QTreeWidgetItem * item);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
