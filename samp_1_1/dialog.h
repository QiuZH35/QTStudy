#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Dialog : public QDialog
{
    Q_OBJECT

private:
    QCheckBox *checkUnderline;
    QCheckBox *checkItalic;
    QCheckBox *checkBold;

    QRadioButton* rbtnBlack;
    QRadioButton* rbtnBule;
    QRadioButton* rbtnRed;

    QPlainTextEdit *textEdit;

    QPushButton*btnOk;
    QPushButton*btnConcel;
    QPushButton*btnClose;


    void UI_init();
    void isitSignalSlots();
private slots:
    void on_checkBoxUnderLine(bool checked);
    void on_checkBoxItalic(bool checked);
    void on_checkBoxBold(bool checked);

    void setTextColor();
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
