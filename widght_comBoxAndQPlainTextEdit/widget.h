#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnComboBoxInit_clicked();

    void on_btnComboBoxClear_clicked();



    void on_checkBox_clicked(bool checked);

    void on_btnAddTextToComboBox_clicked();

    void on_btnTextClear_clicked(bool checked);

    void on_Read_Only_clicked(bool checked);

    void on_btnComboBox_cityInit_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
