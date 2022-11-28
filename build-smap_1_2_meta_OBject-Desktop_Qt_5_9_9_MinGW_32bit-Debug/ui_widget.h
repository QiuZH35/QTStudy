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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnClassInfo;
    QLabel *label_2;
    QSpinBox *spinBoxGril;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(811, 593);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxBoy = new QSpinBox(Widget);
        spinBoxBoy->setObjectName(QStringLiteral("spinBoxBoy"));
        spinBoxBoy->setValue(15);

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(Widget);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnClassInfo = new QPushButton(Widget);
        btnClassInfo->setObjectName(QStringLiteral("btnClassInfo"));

        gridLayout->addWidget(btnClassInfo, 0, 3, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxGril = new QSpinBox(Widget);
        spinBoxGril->setObjectName(QStringLiteral("spinBoxGril"));
        spinBoxGril->setValue(20);

        gridLayout->addWidget(spinBoxGril, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(Widget);
        btnGirlInc->setObjectName(QStringLiteral("btnGirlInc"));

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(Widget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font;
        font.setPointSize(13);
        plainTextEdit->setFont(font);

        gridLayout->addWidget(plainTextEdit, 2, 0, 1, 4);


        retranslateUi(Widget);
        QObject::connect(btnClear, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\267\345\255\251\347\232\204\345\271\264\351\276\204", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("Widget", "Boy\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClassInfo->setText(QApplication::translate("Widget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\245\263\345\255\251\347\232\204\345\271\264\351\276\204", Q_NULLPTR));
        btnGirlInc->setText(QApplication::translate("Widget", "Girl\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
