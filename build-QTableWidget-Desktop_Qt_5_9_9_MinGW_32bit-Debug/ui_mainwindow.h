/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnSetTableHeader;
    QPushButton *btnSetRow;
    QSpinBox *spinBox;
    QPushButton *btnInitTableData;
    QPushButton *btnInsert;
    QPushButton *btnAppend;
    QPushButton *btnDeleteRow;
    QPushButton *btnAutoRowHeight;
    QPushButton *btnAutoColWeight;
    QPushButton *btnReadTableToText;
    QCheckBox *checkBoxSetTableUpdate;
    QCheckBox *checkBoxSetRowColor;
    QCheckBox *checkBoxSetDisplayTableHeader;
    QCheckBox *checkBoxSetDisplayColHeader;
    QRadioButton *radioButtonChooseRow;
    QRadioButton *radioButtonChooseCell;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1155, 816);
        MainWindow->setMinimumSize(QSize(1100, 450));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(190, 30));
        groupBox->setMaximumSize(QSize(220, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnSetTableHeader = new QPushButton(groupBox);
        btnSetTableHeader->setObjectName(QStringLiteral("btnSetTableHeader"));
        btnSetTableHeader->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnSetTableHeader, 0, 0, 1, 2);

        btnSetRow = new QPushButton(groupBox);
        btnSetRow->setObjectName(QStringLiteral("btnSetRow"));
        btnSetRow->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnSetRow, 1, 0, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setValue(10);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        btnInitTableData = new QPushButton(groupBox);
        btnInitTableData->setObjectName(QStringLiteral("btnInitTableData"));
        btnInitTableData->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnInitTableData, 2, 0, 1, 2);

        btnInsert = new QPushButton(groupBox);
        btnInsert->setObjectName(QStringLiteral("btnInsert"));
        btnInsert->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnInsert, 3, 0, 1, 1);

        btnAppend = new QPushButton(groupBox);
        btnAppend->setObjectName(QStringLiteral("btnAppend"));
        btnAppend->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnAppend, 3, 1, 1, 1);

        btnDeleteRow = new QPushButton(groupBox);
        btnDeleteRow->setObjectName(QStringLiteral("btnDeleteRow"));
        btnDeleteRow->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnDeleteRow, 4, 0, 1, 2);

        btnAutoRowHeight = new QPushButton(groupBox);
        btnAutoRowHeight->setObjectName(QStringLiteral("btnAutoRowHeight"));
        btnAutoRowHeight->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnAutoRowHeight, 5, 0, 1, 1);

        btnAutoColWeight = new QPushButton(groupBox);
        btnAutoColWeight->setObjectName(QStringLiteral("btnAutoColWeight"));
        btnAutoColWeight->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnAutoColWeight, 5, 1, 1, 1);

        btnReadTableToText = new QPushButton(groupBox);
        btnReadTableToText->setObjectName(QStringLiteral("btnReadTableToText"));
        btnReadTableToText->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btnReadTableToText, 6, 0, 1, 2);

        checkBoxSetTableUpdate = new QCheckBox(groupBox);
        checkBoxSetTableUpdate->setObjectName(QStringLiteral("checkBoxSetTableUpdate"));
        checkBoxSetTableUpdate->setMinimumSize(QSize(0, 30));
        checkBoxSetTableUpdate->setChecked(true);

        gridLayout->addWidget(checkBoxSetTableUpdate, 7, 0, 1, 1);

        checkBoxSetRowColor = new QCheckBox(groupBox);
        checkBoxSetRowColor->setObjectName(QStringLiteral("checkBoxSetRowColor"));
        checkBoxSetRowColor->setMinimumSize(QSize(0, 30));
        checkBoxSetRowColor->setChecked(true);

        gridLayout->addWidget(checkBoxSetRowColor, 7, 1, 1, 1);

        checkBoxSetDisplayTableHeader = new QCheckBox(groupBox);
        checkBoxSetDisplayTableHeader->setObjectName(QStringLiteral("checkBoxSetDisplayTableHeader"));
        checkBoxSetDisplayTableHeader->setMinimumSize(QSize(0, 30));
        checkBoxSetDisplayTableHeader->setChecked(true);

        gridLayout->addWidget(checkBoxSetDisplayTableHeader, 8, 0, 1, 1);

        checkBoxSetDisplayColHeader = new QCheckBox(groupBox);
        checkBoxSetDisplayColHeader->setObjectName(QStringLiteral("checkBoxSetDisplayColHeader"));
        checkBoxSetDisplayColHeader->setMinimumSize(QSize(0, 30));
        checkBoxSetDisplayColHeader->setChecked(true);

        gridLayout->addWidget(checkBoxSetDisplayColHeader, 8, 1, 1, 1);

        radioButtonChooseRow = new QRadioButton(groupBox);
        radioButtonChooseRow->setObjectName(QStringLiteral("radioButtonChooseRow"));
        radioButtonChooseRow->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(radioButtonChooseRow, 9, 0, 1, 1);

        radioButtonChooseCell = new QRadioButton(groupBox);
        radioButtonChooseCell->setObjectName(QStringLiteral("radioButtonChooseCell"));
        radioButtonChooseCell->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(radioButtonChooseCell, 9, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1155, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        btnSetTableHeader->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", Q_NULLPTR));
        btnSetRow->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260", Q_NULLPTR));
        btnInitTableData->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", Q_NULLPTR));
        btnInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
        btnAppend->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
        btnDeleteRow->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", Q_NULLPTR));
        btnAutoRowHeight->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", Q_NULLPTR));
        btnAutoColWeight->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", Q_NULLPTR));
        btnReadTableToText->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", Q_NULLPTR));
        checkBoxSetTableUpdate->setText(QApplication::translate("MainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        checkBoxSetRowColor->setText(QApplication::translate("MainWindow", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", Q_NULLPTR));
        checkBoxSetDisplayTableHeader->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", Q_NULLPTR));
        checkBoxSetDisplayColHeader->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", Q_NULLPTR));
        radioButtonChooseRow->setText(QApplication::translate("MainWindow", "\350\241\214\351\200\211\346\213\251", Q_NULLPTR));
        radioButtonChooseCell->setText(QApplication::translate("MainWindow", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
