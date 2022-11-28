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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QPushButton *btnComboBoxInit;
    QPushButton *btnComboBoxClear;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QPushButton *btnComboBox_cityInit;
    QComboBox *comboBoxCity;
    QGroupBox *groupBox_3;
    QPushButton *btnAddTextToComboBox;
    QPushButton *btnTextClear;
    QCheckBox *Read_Only;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(762, 602);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 401, 161));
        btnComboBoxInit = new QPushButton(groupBox);
        btnComboBoxInit->setObjectName(QStringLiteral("btnComboBoxInit"));
        btnComboBoxInit->setGeometry(QRect(20, 50, 91, 23));
        btnComboBoxClear = new QPushButton(groupBox);
        btnComboBoxClear->setObjectName(QStringLiteral("btnComboBoxClear"));
        btnComboBoxClear->setGeometry(QRect(130, 50, 91, 23));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(260, 50, 71, 16));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 110, 301, 22));
        comboBox->setEditable(false);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(450, 10, 301, 161));
        btnComboBox_cityInit = new QPushButton(groupBox_2);
        btnComboBox_cityInit->setObjectName(QStringLiteral("btnComboBox_cityInit"));
        btnComboBox_cityInit->setGeometry(QRect(50, 50, 151, 23));
        comboBoxCity = new QComboBox(groupBox_2);
        comboBoxCity->setObjectName(QStringLiteral("comboBoxCity"));
        comboBoxCity->setGeometry(QRect(50, 100, 231, 22));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 170, 731, 421));
        btnAddTextToComboBox = new QPushButton(groupBox_3);
        btnAddTextToComboBox->setObjectName(QStringLiteral("btnAddTextToComboBox"));
        btnAddTextToComboBox->setGeometry(QRect(50, 60, 211, 23));
        btnTextClear = new QPushButton(groupBox_3);
        btnTextClear->setObjectName(QStringLiteral("btnTextClear"));
        btnTextClear->setGeometry(QRect(310, 60, 75, 23));
        Read_Only = new QCheckBox(groupBox_3);
        Read_Only->setObjectName(QStringLiteral("Read_Only"));
        Read_Only->setGeometry(QRect(530, 60, 121, 16));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(40, 110, 661, 241));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "GroupBox", Q_NULLPTR));
        btnComboBoxInit->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
        btnComboBoxClear->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\345\214\227\344\272\254\345\270\202", Q_NULLPTR)
         << QApplication::translate("Widget", "\344\270\212\346\265\267\345\270\202", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("Widget", "GroupBox", Q_NULLPTR));
        btnComboBox_cityInit->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "GroupBox", Q_NULLPTR));
        btnAddTextToComboBox->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271\346\267\273\345\212\240\345\210\260ComboBox", Q_NULLPTR));
        btnTextClear->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254", Q_NULLPTR));
        Read_Only->setText(QApplication::translate("Widget", "Read Only", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
