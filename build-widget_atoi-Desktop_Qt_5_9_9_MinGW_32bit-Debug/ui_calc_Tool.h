/********************************************************************************
** Form generated from reading UI file 'calc_Tool.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_TOOL_H
#define UI_CALC_TOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editNUm;
    QLabel *label_2;
    QLineEdit *editPrice;
    QPushButton *pushButton;
    QLineEdit *editTotal;
    QLabel *label_3;
    QGridLayout *gridLayout_3;
    QPushButton *btnDec;
    QPushButton *btnHex;
    QLineEdit *editBin;
    QLineEdit *editDec;
    QPushButton *btnBin;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *editHex;
    QSpacerItem *verticalSpacer;
    QPushButton *btnClear;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(637, 393);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editNUm = new QLineEdit(Widget);
        editNUm->setObjectName(QStringLiteral("editNUm"));

        gridLayout->addWidget(editNUm, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        editPrice = new QLineEdit(Widget);
        editPrice->setObjectName(QStringLiteral("editPrice"));

        gridLayout->addWidget(editPrice, 0, 3, 1, 1);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        editTotal = new QLineEdit(Widget);
        editTotal->setObjectName(QStringLiteral("editTotal"));

        gridLayout->addWidget(editTotal, 1, 3, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        btnDec = new QPushButton(Widget);
        btnDec->setObjectName(QStringLiteral("btnDec"));

        gridLayout_3->addWidget(btnDec, 1, 2, 1, 1);

        btnHex = new QPushButton(Widget);
        btnHex->setObjectName(QStringLiteral("btnHex"));

        gridLayout_3->addWidget(btnHex, 2, 2, 1, 1);

        editBin = new QLineEdit(Widget);
        editBin->setObjectName(QStringLiteral("editBin"));

        gridLayout_3->addWidget(editBin, 0, 1, 1, 1);

        editDec = new QLineEdit(Widget);
        editDec->setObjectName(QStringLiteral("editDec"));

        gridLayout_3->addWidget(editDec, 1, 1, 1, 1);

        btnBin = new QPushButton(Widget);
        btnBin->setObjectName(QStringLiteral("btnBin"));

        gridLayout_3->addWidget(btnBin, 0, 2, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        editHex = new QLineEdit(Widget);
        editHex->setObjectName(QStringLiteral("editHex"));

        gridLayout_3->addWidget(editHex, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(94, 197, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        btnClear = new QPushButton(Widget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout_4->addWidget(btnClear, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "calc_Tool", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        editNUm->setText(QApplication::translate("Widget", "12", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", Q_NULLPTR));
        editPrice->setText(QApplication::translate("Widget", "5.3", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\350\256\241\347\256\227", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", Q_NULLPTR));
        btnDec->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        btnHex->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        btnBin->setText(QApplication::translate("Widget", "\350\275\254\346\215\242\345\205\266\344\273\226\350\277\233\345\210\266", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_TOOL_H
