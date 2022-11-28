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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInit;
    QAction *actionClear;
    QAction *actionInsert;
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionAllChoose;
    QAction *actionAllUnChoose;
    QAction *actionNotChoose;
    QAction *actionExit;
    QAction *actionSelItem;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page_listWidget;
    QFormLayout *formLayout;
    QToolButton *toolButtonInit;
    QToolButton *toolButtonClaer;
    QToolButton *toolButtonInsert;
    QToolButton *toolButtonAppend;
    QToolButton *toolButtonDel;
    QWidget *page_treeWidget;
    QWidget *page_tabWidget;
    QTabWidget *tabWidget;
    QWidget *tab_list;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QToolButton *toolButtonSelItem;
    QToolButton *toolButtonSeelAll;
    QToolButton *toolButtonSelNot;
    QToolButton *toolButtonSelInv;
    QListWidget *listWidget;
    QWidget *tab_Tree;
    QWidget *tab_tab;
    QToolBar *toolBar;
    QToolBar *toolBarMain;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(993, 592);
        actionInit = new QAction(MainWindow);
        actionInit->setObjectName(QStringLiteral("actionInit"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionInsert = new QAction(MainWindow);
        actionInsert->setObjectName(QStringLiteral("actionInsert"));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionAllChoose = new QAction(MainWindow);
        actionAllChoose->setObjectName(QStringLiteral("actionAllChoose"));
        actionAllUnChoose = new QAction(MainWindow);
        actionAllUnChoose->setObjectName(QStringLiteral("actionAllUnChoose"));
        actionNotChoose = new QAction(MainWindow);
        actionNotChoose->setObjectName(QStringLiteral("actionNotChoose"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSelItem = new QAction(MainWindow);
        actionSelItem->setObjectName(QStringLiteral("actionSelItem"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(130, 80));
        toolBox->setMaximumSize(QSize(130, 16777215));
        toolBox->setBaseSize(QSize(0, 0));
        page_listWidget = new QWidget();
        page_listWidget->setObjectName(QStringLiteral("page_listWidget"));
        page_listWidget->setGeometry(QRect(-11, 0, 144, 457));
        formLayout = new QFormLayout(page_listWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        toolButtonInit = new QToolButton(page_listWidget);
        toolButtonInit->setObjectName(QStringLiteral("toolButtonInit"));
        toolButtonInit->setMinimumSize(QSize(120, 30));
        toolButtonInit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        formLayout->setWidget(0, QFormLayout::LabelRole, toolButtonInit);

        toolButtonClaer = new QToolButton(page_listWidget);
        toolButtonClaer->setObjectName(QStringLiteral("toolButtonClaer"));
        toolButtonClaer->setMinimumSize(QSize(120, 30));
        toolButtonClaer->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        formLayout->setWidget(1, QFormLayout::LabelRole, toolButtonClaer);

        toolButtonInsert = new QToolButton(page_listWidget);
        toolButtonInsert->setObjectName(QStringLiteral("toolButtonInsert"));
        toolButtonInsert->setMinimumSize(QSize(120, 30));
        toolButtonInsert->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        formLayout->setWidget(2, QFormLayout::LabelRole, toolButtonInsert);

        toolButtonAppend = new QToolButton(page_listWidget);
        toolButtonAppend->setObjectName(QStringLiteral("toolButtonAppend"));
        toolButtonAppend->setMinimumSize(QSize(120, 30));
        toolButtonAppend->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        formLayout->setWidget(3, QFormLayout::LabelRole, toolButtonAppend);

        toolButtonDel = new QToolButton(page_listWidget);
        toolButtonDel->setObjectName(QStringLiteral("toolButtonDel"));
        toolButtonDel->setMinimumSize(QSize(120, 30));
        toolButtonDel->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        formLayout->setWidget(4, QFormLayout::LabelRole, toolButtonDel);

        toolBox->addItem(page_listWidget, QString::fromUtf8("QListtWidget \346\223\215\344\275\234"));
        page_treeWidget = new QWidget();
        page_treeWidget->setObjectName(QStringLiteral("page_treeWidget"));
        page_treeWidget->setGeometry(QRect(0, 0, 130, 474));
        toolBox->addItem(page_treeWidget, QString::fromUtf8("QTreewidget \346\223\215\344\275\234"));
        page_tabWidget = new QWidget();
        page_tabWidget->setObjectName(QStringLiteral("page_tabWidget"));
        toolBox->addItem(page_tabWidget, QString::fromUtf8("QTabWidget \346\223\215\344\275\234"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(500, 500));
        tab_list = new QWidget();
        tab_list->setObjectName(QStringLiteral("tab_list"));
        gridLayout_2 = new QGridLayout(tab_list);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(tab_list);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_list);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolButtonSelItem = new QToolButton(groupBox_2);
        toolButtonSelItem->setObjectName(QStringLiteral("toolButtonSelItem"));
        toolButtonSelItem->setMinimumSize(QSize(120, 30));
        toolButtonSelItem->setPopupMode(QToolButton::MenuButtonPopup);

        gridLayout->addWidget(toolButtonSelItem, 0, 0, 1, 1);

        toolButtonSeelAll = new QToolButton(groupBox_2);
        toolButtonSeelAll->setObjectName(QStringLiteral("toolButtonSeelAll"));
        toolButtonSeelAll->setMinimumSize(QSize(120, 30));
        toolButtonSeelAll->setPopupMode(QToolButton::DelayedPopup);

        gridLayout->addWidget(toolButtonSeelAll, 0, 1, 1, 1);

        toolButtonSelNot = new QToolButton(groupBox_2);
        toolButtonSelNot->setObjectName(QStringLiteral("toolButtonSelNot"));
        toolButtonSelNot->setMinimumSize(QSize(120, 30));
        toolButtonSelNot->setPopupMode(QToolButton::DelayedPopup);

        gridLayout->addWidget(toolButtonSelNot, 0, 2, 1, 1);

        toolButtonSelInv = new QToolButton(groupBox_2);
        toolButtonSelInv->setObjectName(QStringLiteral("toolButtonSelInv"));
        toolButtonSelInv->setMinimumSize(QSize(120, 30));
        toolButtonSelInv->setPopupMode(QToolButton::DelayedPopup);

        gridLayout->addWidget(toolButtonSelInv, 0, 3, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        listWidget = new QListWidget(tab_list);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(500, 500));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_2->addWidget(listWidget, 2, 0, 1, 1);

        tabWidget->addTab(tab_list, QString());
        tab_Tree = new QWidget();
        tab_Tree->setObjectName(QStringLiteral("tab_Tree"));
        tabWidget->addTab(tab_Tree, QString());
        tab_tab = new QWidget();
        tab_tab->setObjectName(QStringLiteral("tab_tab"));
        tabWidget->addTab(tab_tab, QString());
        splitter->addWidget(tabWidget);

        gridLayout_3->addWidget(splitter, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBarMain = new QToolBar(MainWindow);
        toolBarMain->setObjectName(QStringLiteral("toolBarMain"));
        toolBarMain->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarMain);

        toolBarMain->addAction(actionInit);
        toolBarMain->addAction(actionClear);
        toolBarMain->addAction(actionInsert);
        toolBarMain->addAction(actionAdd);
        toolBarMain->addAction(actionDelete);
        toolBarMain->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionInit->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
        actionClear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        actionInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
        actionAllChoose->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
        actionAllUnChoose->setText(QApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
        actionNotChoose->setText(QApplication::translate("MainWindow", "\345\217\215\351\200\211", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        actionSelItem->setText(QApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
        toolButtonInit->setText(QApplication::translate("MainWindow", "tBtnListInit", Q_NULLPTR));
        toolButtonClaer->setText(QApplication::translate("MainWindow", "tBtnListclear", Q_NULLPTR));
        toolButtonInsert->setText(QApplication::translate("MainWindow", "tBtnListInsert", Q_NULLPTR));
        toolButtonAppend->setText(QApplication::translate("MainWindow", "..tBtnListAppend.", Q_NULLPTR));
        toolButtonDel->setText(QApplication::translate("MainWindow", "tBtnListDeel", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_listWidget), QApplication::translate("MainWindow", "QListtWidget \346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_treeWidget), QApplication::translate("MainWindow", "QTreewidget \346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_tabWidget), QApplication::translate("MainWindow", "QTabWidget \346\223\215\344\275\234", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        toolButtonSelItem->setText(QApplication::translate("MainWindow", "tBtnSelectItem", Q_NULLPTR));
        toolButtonSeelAll->setText(QApplication::translate("MainWindow", "tBtnSelAll", Q_NULLPTR));
        toolButtonSelNot->setText(QApplication::translate("MainWindow", "tBtnSelNot", Q_NULLPTR));
        toolButtonSelInv->setText(QApplication::translate("MainWindow", "tBtnSelInv", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "New Item", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "New Item", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_list), QApplication::translate("MainWindow", "QLIstWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_Tree), QApplication::translate("MainWindow", "QTreeWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_tab), QApplication::translate("MainWindow", "QTableWidget", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        toolBarMain->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
