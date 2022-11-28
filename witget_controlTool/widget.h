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
    void on_horizontalSliderRed_valueChanged(int value);

    void on_horizontalSliderBlue_valueChanged(int value);

    void on_horizontalSliderGreen_valueChanged(int value);

    void on_horizontalSliderAlpha_valueChanged(int value);

    void on_horizontalSliderSetBar_valueChanged(int value);

    void on_horizontalScrollBar_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_radioButtonBin_clicked();

    void on_radioButtonOct_clicked();

    void on_radioButtonDec_clicked();

    void on_radioButtonHex_clicked();

    void on_verticalSlider_valueChanged(int value);

    void on_verticalScrollBar_valueChanged(int value);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
