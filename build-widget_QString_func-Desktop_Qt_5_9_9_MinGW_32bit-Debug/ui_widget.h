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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBoxStr1;
    QLabel *label_2;
    QComboBox *comboBoxStr2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnStartsWith;
    QPushButton *btnEndswith;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPrepend;
    QPushButton *btnAppend;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnSize;
    QPushButton *btnCount;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *EditRes;
    QCheckBox *checkBox;
    QLabel *lableStust;
    QSpinBox *spinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(569, 363);
        Widget->setCursor(QCursor(Qt::IBeamCursor));
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBoxStr1 = new QComboBox(Widget);
        comboBoxStr1->setObjectName(QStringLiteral("comboBoxStr1"));
        comboBoxStr1->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxStr1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBoxStr2 = new QComboBox(Widget);
        comboBoxStr2->setObjectName(QStringLiteral("comboBoxStr2"));
        comboBoxStr2->setEditable(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxStr2);


        gridLayout_3->addLayout(formLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnStartsWith = new QPushButton(groupBox_3);
        btnStartsWith->setObjectName(QStringLiteral("btnStartsWith"));

        horizontalLayout_3->addWidget(btnStartsWith);

        btnEndswith = new QPushButton(groupBox_3);
        btnEndswith->setObjectName(QStringLiteral("btnEndswith"));

        horizontalLayout_3->addWidget(btnEndswith);


        gridLayout_2->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnPrepend = new QPushButton(groupBox);
        btnPrepend->setObjectName(QStringLiteral("btnPrepend"));

        horizontalLayout->addWidget(btnPrepend);

        btnAppend = new QPushButton(groupBox);
        btnAppend->setObjectName(QStringLiteral("btnAppend"));

        horizontalLayout->addWidget(btnAppend);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnSize = new QPushButton(groupBox_2);
        btnSize->setObjectName(QStringLiteral("btnSize"));

        horizontalLayout_2->addWidget(btnSize);

        btnCount = new QPushButton(groupBox_2);
        btnCount->setObjectName(QStringLiteral("btnCount"));

        horizontalLayout_2->addWidget(btnCount);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        EditRes = new QLineEdit(Widget);
        EditRes->setObjectName(QStringLiteral("EditRes"));

        gridLayout->addWidget(EditRes, 0, 1, 1, 3);

        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 1, 0, 1, 2);

        lableStust = new QLabel(Widget);
        lableStust->setObjectName(QStringLiteral("lableStust"));

        gridLayout->addWidget(lableStust, 1, 2, 1, 1);

        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setDisplayIntegerBase(2);

        gridLayout->addWidget(spinBox, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "str1", Q_NULLPTR));
        comboBoxStr1->clear();
        comboBoxStr1->insertItems(0, QStringList()
         << QApplication::translate("Widget", "D:\\QQ\351\243\236\350\275\246\\AGEIA Technologies", Q_NULLPTR)
         << QApplication::translate("Widget", "\351\231\210\350\220\214,010-116321,M,19000101,\345\214\227\344\272\254\345\270\202\346\265\267\346\267\200\345\214\272\350\213\217\345\267\236\350\241\2273\345\217\267\345\244\247\346\201\222\347\247\221\346\212\200\345\244\247\345\216\246\345\214\227\345\272\2476", Q_NULLPTR)
         << QApplication::translate("Widget", "F:\\C\350\257\255\350\250\200\\2C\350\257\255\350\250\200\345\205\245\351\227\250\345\210\260\345\256\236\346\210\230\\\345\244\247\346\225\260\346\215\256\347\233\270\345\205\263\346\225\260\346\215\256\\.cpp", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Widget", "str2", Q_NULLPTR));
        comboBoxStr2->clear();
        comboBoxStr2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\\", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("Widget", "\351\200\273\350\276\221\345\210\244\346\226\255", Q_NULLPTR));
        btnStartsWith->setText(QApplication::translate("Widget", "Stratswith", Q_NULLPTR));
        btnEndswith->setText(QApplication::translate("Widget", "EndsWith", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        btnPrepend->setText(QApplication::translate("Widget", "Prepend", Q_NULLPTR));
        btnAppend->setText(QApplication::translate("Widget", "Append", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\225\260\345\255\227", Q_NULLPTR));
        btnSize->setText(QApplication::translate("Widget", "Size", Q_NULLPTR));
        btnCount->setText(QApplication::translate("Widget", "Count", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\347\273\223\346\236\234", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "CheckBox", Q_NULLPTR));
        lableStust->setText(QApplication::translate("Widget", "labSpin", Q_NULLPTR));
        spinBox->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
