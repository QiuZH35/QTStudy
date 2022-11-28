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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox_3;
    QSplitter *splitter_2;
    QLabel *label;
    QLabel *labelRow;
    QLabel *label_3;
    QLabel *labelCul;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnReInit;
    QPushButton *btnAppendItem;
    QPushButton *btnInsertItem;
    QPushButton *btnDeleteItem;
    QPushButton *btnClearList;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnClearText;
    QPushButton *btnShowDataToText;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(882, 628);
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 550, 481, 71));
        splitter_2 = new QSplitter(groupBox_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(20, 30, 301, 16));
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        splitter_2->addWidget(label);
        labelRow = new QLabel(splitter_2);
        labelRow->setObjectName(QStringLiteral("labelRow"));
        splitter_2->addWidget(labelRow);
        label_3 = new QLabel(splitter_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_2->addWidget(label_3);
        labelCul = new QLabel(splitter_2);
        labelCul->setObjectName(QStringLiteral("labelCul"));
        splitter_2->addWidget(labelCul);
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(20, 20, 831, 501));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnReInit = new QPushButton(groupBox);
        btnReInit->setObjectName(QStringLiteral("btnReInit"));

        gridLayout->addWidget(btnReInit, 0, 0, 1, 1);

        btnAppendItem = new QPushButton(groupBox);
        btnAppendItem->setObjectName(QStringLiteral("btnAppendItem"));

        gridLayout->addWidget(btnAppendItem, 1, 0, 1, 1);

        btnInsertItem = new QPushButton(groupBox);
        btnInsertItem->setObjectName(QStringLiteral("btnInsertItem"));

        gridLayout->addWidget(btnInsertItem, 1, 1, 1, 1);

        btnDeleteItem = new QPushButton(groupBox);
        btnDeleteItem->setObjectName(QStringLiteral("btnDeleteItem"));

        gridLayout->addWidget(btnDeleteItem, 2, 0, 1, 1);

        btnClearList = new QPushButton(groupBox);
        btnClearList->setObjectName(QStringLiteral("btnClearList"));

        gridLayout->addWidget(btnClearList, 2, 1, 1, 1);

        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 3, 0, 1, 2);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnClearText = new QPushButton(groupBox_2);
        btnClearText->setObjectName(QStringLiteral("btnClearText"));

        gridLayout_2->addWidget(btnClearText, 0, 0, 1, 1);

        btnShowDataToText = new QPushButton(groupBox_2);
        btnShowDataToText->setObjectName(QStringLiteral("btnShowDataToText"));

        gridLayout_2->addWidget(btnShowDataToText, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 2, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label->setText(QApplication::translate("Widget", "\350\241\214\357\274\232", Q_NULLPTR));
        labelRow->setText(QString());
        label_3->setText(QApplication::translate("Widget", "\345\210\227\357\274\232", Q_NULLPTR));
        labelCul->setText(QString());
        groupBox->setTitle(QApplication::translate("Widget", "QListView", Q_NULLPTR));
        btnReInit->setText(QApplication::translate("Widget", "\346\201\242\345\244\215\345\210\227\350\241\250", Q_NULLPTR));
        btnAppendItem->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
        btnInsertItem->setText(QApplication::translate("Widget", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
        btnDeleteItem->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
        btnClearList->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "QPlaiinTextEdit", Q_NULLPTR));
        btnClearText->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
        btnShowDataToText->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\345\210\260\346\226\207\346\234\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
