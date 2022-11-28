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
    void on_btnPrepend_clicked();

    void on_btnAppend_clicked();

    void on_btnSize_clicked();

    void on_btnCount_clicked();

    void on_btnStartsWith_clicked();

    void on_btnEndswith_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
