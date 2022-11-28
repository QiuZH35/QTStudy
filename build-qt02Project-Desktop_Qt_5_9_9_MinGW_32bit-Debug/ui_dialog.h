/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxUnderline;
    QCheckBox *Italic;
    QCheckBox *checkBox_Bold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *Blue;
    QRadioButton *Red;
    QRadioButton *Black;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonConcel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(594, 501);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxUnderline = new QCheckBox(groupBox);
        checkBoxUnderline->setObjectName(QStringLiteral("checkBoxUnderline"));

        horizontalLayout->addWidget(checkBoxUnderline);

        Italic = new QCheckBox(groupBox);
        Italic->setObjectName(QStringLiteral("Italic"));

        horizontalLayout->addWidget(Italic);

        checkBox_Bold = new QCheckBox(groupBox);
        checkBox_Bold->setObjectName(QStringLiteral("checkBox_Bold"));

        horizontalLayout->addWidget(checkBox_Bold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Blue = new QRadioButton(groupBox_2);
        Blue->setObjectName(QStringLiteral("Blue"));

        horizontalLayout_2->addWidget(Blue);

        Red = new QRadioButton(groupBox_2);
        Red->setObjectName(QStringLiteral("Red"));

        horizontalLayout_2->addWidget(Red);

        Black = new QRadioButton(groupBox_2);
        Black->setObjectName(QStringLiteral("Black"));

        horizontalLayout_2->addWidget(Black);


        verticalLayout->addWidget(groupBox_2);

        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setPointSize(20);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(groupBox_3);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));

        horizontalLayout_3->addWidget(pushButtonOK);

        pushButtonConcel = new QPushButton(groupBox_3);
        pushButtonConcel->setObjectName(QStringLiteral("pushButtonConcel"));

        horizontalLayout_3->addWidget(pushButtonConcel);

        horizontalSpacer_2 = new QSpacerItem(187, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonClose = new QPushButton(groupBox_3);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));

        horizontalLayout_3->addWidget(pushButtonClose);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(Dialog);
        QObject::connect(pushButtonOK, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(pushButtonConcel, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(pushButtonClose, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        checkBoxUnderline->setText(QApplication::translate("Dialog", "Underline", Q_NULLPTR));
        Italic->setText(QApplication::translate("Dialog", "Italic", Q_NULLPTR));
        checkBox_Bold->setText(QApplication::translate("Dialog", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Color", Q_NULLPTR));
        Blue->setText(QApplication::translate("Dialog", "Blue", Q_NULLPTR));
        Red->setText(QApplication::translate("Dialog", "Red", Q_NULLPTR));
        Black->setText(QApplication::translate("Dialog", "Black", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:22pt;\">hello world!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:22pt;\">This is Arxbye!</span></p></body></html>", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pushButtonOK->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButtonConcel->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButtonClose->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
