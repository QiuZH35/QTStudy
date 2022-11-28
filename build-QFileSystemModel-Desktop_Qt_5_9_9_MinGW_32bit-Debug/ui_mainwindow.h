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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelPath;
    QSplitter *splitter_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QTreeView *treeView;
    QSplitter *splitter;
    QSplitter *splitter_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QSplitter *splitter_4;
    QLabel *labelName;
    QLabel *labelSize;
    QLabel *labelType;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1234, 928);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        labelPath = new QLabel(centralwidget);
        labelPath->setObjectName(QStringLiteral("labelPath"));
        labelPath->setGeometry(QRect(40, 800, 521, 41));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(31, 47, 1071, 651));
        splitter_3->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout_3->addWidget(treeView, 0, 0, 1, 1);

        splitter_3->addWidget(groupBox);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout_2->addWidget(listView, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox_3);
        splitter->addWidget(splitter_2);
        splitter_3->addWidget(splitter);
        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(40, 720, 1051, 41));
        splitter_4->setOrientation(Qt::Horizontal);
        labelName = new QLabel(splitter_4);
        labelName->setObjectName(QStringLiteral("labelName"));
        splitter_4->addWidget(labelName);
        labelSize = new QLabel(splitter_4);
        labelSize->setObjectName(QStringLiteral("labelSize"));
        splitter_4->addWidget(labelSize);
        labelType = new QLabel(splitter_4);
        labelType->setObjectName(QStringLiteral("labelType"));
        splitter_4->addWidget(labelType);
        checkBox = new QCheckBox(splitter_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        splitter_4->addWidget(checkBox);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        labelPath->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "treeView", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "listView", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "tableView", Q_NULLPTR));
        labelName->setText(QString());
        labelSize->setText(QString());
        labelType->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\346\230\257\346\226\207\344\273\266\345\244\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
