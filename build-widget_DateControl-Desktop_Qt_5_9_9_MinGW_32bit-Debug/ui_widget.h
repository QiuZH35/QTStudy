/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *lineEditDateTime;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLineEdit *lineEditTime;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditDate;
    QPushButton *btnGetNowDate;
    QDateEdit *dateEdit;
    QDateTimeEdit *timeEdit;
    QGroupBox *groupBox;
    QCalendarWidget *calendarWidgetDate;
    QLabel *label_5;
    QPushButton *btnClose;
    QLineEdit *lineEditSeletionDateTime;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdMints;
    QLCDNumber *lcdSeconds;
    QLCDNumber *lcdms;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *btnStartTime;
    QPushButton *btnStopTime;
    QSpinBox *spinBoxTimes;
    QProgressBar *progressBar;
    QLabel *lable_showDate;
    QPushButton *btnResetStart;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1099, 781);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        dateTimeEdit = new QDateTimeEdit(groupBox_3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(70, 200, 161, 22));
        lineEditDateTime = new QLineEdit(groupBox_3);
        lineEditDateTime->setObjectName(QStringLiteral("lineEditDateTime"));
        lineEditDateTime->setGeometry(QRect(270, 200, 161, 20));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 210, 54, 12));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 80, 75, 23));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(450, 200, 75, 23));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 20, 91, 21));
        lineEditTime = new QLineEdit(groupBox_3);
        lineEditTime->setObjectName(QStringLiteral("lineEditTime"));
        lineEditTime->setGeometry(QRect(270, 80, 161, 20));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 140, 75, 23));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 54, 12));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 140, 54, 12));
        lineEditDate = new QLineEdit(groupBox_3);
        lineEditDate->setObjectName(QStringLiteral("lineEditDate"));
        lineEditDate->setGeometry(QRect(270, 140, 161, 20));
        btnGetNowDate = new QPushButton(groupBox_3);
        btnGetNowDate->setObjectName(QStringLiteral("btnGetNowDate"));
        btnGetNowDate->setGeometry(QRect(30, 20, 121, 21));
        dateEdit = new QDateEdit(groupBox_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(70, 140, 141, 22));
        dateEdit->setWrapping(false);
        dateEdit->setReadOnly(false);
        dateEdit->setAccelerated(false);
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit->setCalendarPopup(true);
        timeEdit = new QDateTimeEdit(groupBox_3);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(70, 80, 131, 22));

        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        calendarWidgetDate = new QCalendarWidget(groupBox);
        calendarWidgetDate->setObjectName(QStringLiteral("calendarWidgetDate"));
        calendarWidgetDate->setGeometry(QRect(10, 130, 311, 281));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 81, 16));
        btnClose = new QPushButton(groupBox);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(10, 460, 251, 61));
        lineEditSeletionDateTime = new QLineEdit(groupBox);
        lineEditSeletionDateTime->setObjectName(QStringLiteral("lineEditSeletionDateTime"));
        lineEditSeletionDateTime->setGeometry(QRect(110, 90, 211, 20));

        gridLayout->addWidget(groupBox, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 170, 471, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdMints = new QLCDNumber(layoutWidget);
        lcdMints->setObjectName(QStringLiteral("lcdMints"));
        lcdMints->setFrameShape(QFrame::Box);
        lcdMints->setFrameShadow(QFrame::Plain);
        lcdMints->setLineWidth(2);
        lcdMints->setSmallDecimalPoint(false);
        lcdMints->setDigitCount(2);
        lcdMints->setProperty("value", QVariant(0));
        lcdMints->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcdMints);

        lcdSeconds = new QLCDNumber(layoutWidget);
        lcdSeconds->setObjectName(QStringLiteral("lcdSeconds"));
        lcdSeconds->setFrameShadow(QFrame::Plain);
        lcdSeconds->setLineWidth(2);
        lcdSeconds->setDigitCount(2);

        horizontalLayout->addWidget(lcdSeconds);

        lcdms = new QLCDNumber(layoutWidget);
        lcdms->setObjectName(QStringLiteral("lcdms"));
        lcdms->setFrameShadow(QFrame::Plain);
        lcdms->setLineWidth(2);
        lcdms->setDigitCount(3);

        horizontalLayout->addWidget(lcdms);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 70, 54, 12));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 130, 54, 12));
        btnStartTime = new QPushButton(groupBox_2);
        btnStartTime->setObjectName(QStringLiteral("btnStartTime"));
        btnStartTime->setGeometry(QRect(10, 60, 75, 23));
        btnStopTime = new QPushButton(groupBox_2);
        btnStopTime->setObjectName(QStringLiteral("btnStopTime"));
        btnStopTime->setEnabled(false);
        btnStopTime->setGeometry(QRect(100, 60, 75, 23));
        spinBoxTimes = new QSpinBox(groupBox_2);
        spinBoxTimes->setObjectName(QStringLiteral("spinBoxTimes"));
        spinBoxTimes->setGeometry(QRect(70, 120, 131, 22));
        spinBoxTimes->setMaximum(9999);
        spinBoxTimes->setValue(1);
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 260, 501, 31));
        QPalette palette;
        QBrush brush(QColor(156, 56, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        progressBar->setPalette(palette);
        progressBar->setAutoFillBackground(false);
        progressBar->setInputMethodHints(Qt::ImhNone);
        progressBar->setMaximum(59);
        progressBar->setValue(24);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::BottomToTop);
        lable_showDate = new QLabel(groupBox_2);
        lable_showDate->setObjectName(QStringLiteral("lable_showDate"));
        lable_showDate->setGeometry(QRect(260, 60, 161, 21));
        btnResetStart = new QPushButton(groupBox_2);
        btnResetStart->setObjectName(QStringLiteral("btnResetStart"));
        btnResetStart->setGeometry(QRect(10, 90, 75, 23));

        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(Widget);
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "GroupBox", Q_NULLPTR));
        dateTimeEdit->setDisplayFormat(QApplication::translate("Widget", "yyyy\345\271\264MM\346\234\210d\346\227\245 HH:mm:ss", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\227\266\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\227\245\346\234\237", Q_NULLPTR));
        btnGetNowDate->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\266\351\227\264\346\227\245\346\234\237", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("Widget", "yyyy\345\271\264MM\346\234\210dd\346\227\245", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("Widget", "hh:mm:ss", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "GroupBox", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "GroupBox", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\346\265\201\351\200\235\346\227\266\351\227\264", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", Q_NULLPTR));
        btnStartTime->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        btnStopTime->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", Q_NULLPTR));
        spinBoxTimes->setSuffix(QApplication::translate("Widget", " ms", Q_NULLPTR));
        lable_showDate->setText(QString());
        btnResetStart->setText(QApplication::translate("Widget", "\346\270\205\351\233\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
