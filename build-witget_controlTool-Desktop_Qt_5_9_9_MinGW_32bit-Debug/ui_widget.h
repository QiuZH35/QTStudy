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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderAlpha;
    QSlider *horizontalSliderGreen;
    QSlider *horizontalSliderRed;
    QLabel *Blue;
    QSlider *horizontalSliderBlue;
    QLabel *Red;
    QLabel *Green;
    QLabel *Alpha;
    QTextEdit *textEdit;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QProgressBar *progressBar;
    QScrollBar *horizontalScrollBar;
    QSlider *horizontalSliderSetBar;
    QWidget *widget2;
    QGridLayout *gridLayout_6;
    QLCDNumber *lcdNumber;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButtonBin;
    QRadioButton *radioButtonOct;
    QRadioButton *radioButtonDec;
    QRadioButton *radioButtonHex;
    QDial *dial;
    QGridLayout *gridLayout_4;
    QScrollBar *verticalScrollBar;
    QProgressBar *progressBar_2;
    QSlider *verticalSlider;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnClose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(565, 640);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter_2 = new QSplitter(Widget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSliderAlpha = new QSlider(widget);
        horizontalSliderAlpha->setObjectName(QStringLiteral("horizontalSliderAlpha"));
        horizontalSliderAlpha->setValue(99);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlpha, 3, 1, 1, 1);

        horizontalSliderGreen = new QSlider(widget);
        horizontalSliderGreen->setObjectName(QStringLiteral("horizontalSliderGreen"));
        horizontalSliderGreen->setValue(20);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 2, 1, 1, 1);

        horizontalSliderRed = new QSlider(widget);
        horizontalSliderRed->setObjectName(QStringLiteral("horizontalSliderRed"));
        horizontalSliderRed->setValue(55);
        horizontalSliderRed->setOrientation(Qt::Horizontal);
        horizontalSliderRed->setTickInterval(0);

        gridLayout->addWidget(horizontalSliderRed, 0, 1, 1, 1);

        Blue = new QLabel(widget);
        Blue->setObjectName(QStringLiteral("Blue"));

        gridLayout->addWidget(Blue, 1, 0, 1, 1);

        horizontalSliderBlue = new QSlider(widget);
        horizontalSliderBlue->setObjectName(QStringLiteral("horizontalSliderBlue"));
        horizontalSliderBlue->setValue(45);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 1, 1, 1, 1);

        Red = new QLabel(widget);
        Red->setObjectName(QStringLiteral("Red"));

        gridLayout->addWidget(Red, 0, 0, 1, 1);

        Green = new QLabel(widget);
        Green->setObjectName(QStringLiteral("Green"));

        gridLayout->addWidget(Green, 2, 0, 1, 1);

        Alpha = new QLabel(widget);
        Alpha->setObjectName(QStringLiteral("Alpha"));

        gridLayout->addWidget(Alpha, 3, 0, 1, 1);

        splitter->addWidget(widget);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(146, 79, 246, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        textEdit->setPalette(palette);
        splitter->addWidget(textEdit);
        splitter_2->addWidget(splitter);
        widget1 = new QWidget(splitter_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(widget1);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout_3->addWidget(progressBar, 3, 0, 1, 1);

        horizontalScrollBar = new QScrollBar(widget1);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalScrollBar, 1, 0, 1, 1);

        horizontalSliderSetBar = new QSlider(widget1);
        horizontalSliderSetBar->setObjectName(QStringLiteral("horizontalSliderSetBar"));
        horizontalSliderSetBar->setOrientation(Qt::Horizontal);
        horizontalSliderSetBar->setTickPosition(QSlider::TicksBothSides);

        gridLayout_3->addWidget(horizontalSliderSetBar, 0, 0, 1, 1);

        splitter_2->addWidget(widget1);
        widget2 = new QWidget(splitter_2);
        widget2->setObjectName(QStringLiteral("widget2"));
        gridLayout_6 = new QGridLayout(widget2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(widget2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setLineWidth(1);
        lcdNumber->setDigitCount(3);

        gridLayout_6->addWidget(lcdNumber, 0, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        radioButtonBin = new QRadioButton(widget2);
        radioButtonBin->setObjectName(QStringLiteral("radioButtonBin"));

        gridLayout_5->addWidget(radioButtonBin, 0, 0, 1, 1);

        radioButtonOct = new QRadioButton(widget2);
        radioButtonOct->setObjectName(QStringLiteral("radioButtonOct"));

        gridLayout_5->addWidget(radioButtonOct, 1, 0, 1, 1);

        radioButtonDec = new QRadioButton(widget2);
        radioButtonDec->setObjectName(QStringLiteral("radioButtonDec"));

        gridLayout_5->addWidget(radioButtonDec, 2, 0, 1, 1);

        radioButtonHex = new QRadioButton(widget2);
        radioButtonHex->setObjectName(QStringLiteral("radioButtonHex"));

        gridLayout_5->addWidget(radioButtonHex, 3, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 2, 1, 1);

        dial = new QDial(widget2);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setOrientation(Qt::Horizontal);
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        gridLayout_6->addWidget(dial, 0, 0, 1, 1);

        splitter_2->addWidget(widget2);

        gridLayout_2->addWidget(splitter_2, 0, 0, 2, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalScrollBar = new QScrollBar(Widget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(verticalScrollBar, 0, 1, 1, 1);

        progressBar_2 = new QProgressBar(Widget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setLayoutDirection(Qt::LeftToRight);
        progressBar_2->setValue(24);
        progressBar_2->setTextVisible(true);
        progressBar_2->setOrientation(Qt::Vertical);
        progressBar_2->setInvertedAppearance(false);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_4->addWidget(progressBar_2, 0, 3, 1, 1);

        verticalSlider = new QSlider(Widget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout_4->addWidget(verticalSlider, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 1, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 3, 0, 1, 1);

        btnClose = new QPushButton(Widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/images/1610238979-87853820ef5e558-300x300.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon);

        gridLayout_7->addWidget(btnClose, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_7, 1, 1, 1, 1);


        retranslateUi(Widget);
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        Blue->setText(QApplication::translate("Widget", "Blue", Q_NULLPTR));
        Red->setText(QApplication::translate("Widget", "Red", Q_NULLPTR));
        Green->setText(QApplication::translate("Widget", "Green", Q_NULLPTR));
        Alpha->setText(QApplication::translate("Widget", "Alpha", Q_NULLPTR));
        radioButtonBin->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        radioButtonOct->setText(QApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266", Q_NULLPTR));
        radioButtonDec->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        radioButtonHex->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
