#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

private:
    QStringListModel *theModel;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnClearText_clicked();

    void on_btnShowDataToText_clicked();

    void on_btnReInit_clicked();

    void on_btnClearList_clicked();

    void on_btnDeleteItem_clicked();

    void on_btnAppendItem_clicked();

    void on_btnInsertItem_clicked();

    void on_listView_clicked(const QModelIndex &index);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
