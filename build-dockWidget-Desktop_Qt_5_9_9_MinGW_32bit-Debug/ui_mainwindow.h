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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actAddfiles;
    QAction *actAddFolder;
    QAction *actZoomIn;
    QAction *actZoomOut;
    QAction *actForeachList;
    QAction *actDelList;
    QAction *actActSize;
    QAction *actFitHeight;
    QAction *actFFitWeight;
    QAction *actWindowsHide;
    QAction *actWindowsFloat;
    QAction *actQuit;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1090, 924);
        actAddfiles = new QAction(MainWindow);
        actAddfiles->setObjectName(QStringLiteral("actAddfiles"));
        actAddFolder = new QAction(MainWindow);
        actAddFolder->setObjectName(QStringLiteral("actAddFolder"));
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QStringLiteral("actZoomIn"));
        actZoomIn->setEnabled(false);
        actZoomOut = new QAction(MainWindow);
        actZoomOut->setObjectName(QStringLiteral("actZoomOut"));
        actZoomOut->setEnabled(false);
        actForeachList = new QAction(MainWindow);
        actForeachList->setObjectName(QStringLiteral("actForeachList"));
        actDelList = new QAction(MainWindow);
        actDelList->setObjectName(QStringLiteral("actDelList"));
        actDelList->setEnabled(false);
        actActSize = new QAction(MainWindow);
        actActSize->setObjectName(QStringLiteral("actActSize"));
        actActSize->setEnabled(false);
        actFitHeight = new QAction(MainWindow);
        actFitHeight->setObjectName(QStringLiteral("actFitHeight"));
        actFitHeight->setEnabled(false);
        actFFitWeight = new QAction(MainWindow);
        actFFitWeight->setObjectName(QStringLiteral("actFFitWeight"));
        actFFitWeight->setEnabled(false);
        actWindowsHide = new QAction(MainWindow);
        actWindowsHide->setObjectName(QStringLiteral("actWindowsHide"));
        actWindowsHide->setCheckable(true);
        actWindowsFloat = new QAction(MainWindow);
        actWindowsFloat->setObjectName(QStringLiteral("actWindowsFloat"));
        actWindowsFloat->setCheckable(true);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 841, 851));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 839, 849));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 821, 821));
        label->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1090, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        toolBar_2->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QStringLiteral("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(200, 38));
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 40, 171, 781));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actAddfiles);
        menu->addAction(actDelList);
        menu->addAction(actForeachList);
        menu->addAction(actAddFolder);
        menu->addAction(actQuit);
        menu_2->addAction(actActSize);
        menu_2->addAction(actZoomOut);
        menu_2->addAction(actZoomIn);
        menu_2->addAction(actFitHeight);
        menu_2->addAction(actFFitWeight);
        menu_2->addAction(actWindowsHide);
        menu_2->addAction(actWindowsFloat);
        toolBar->addAction(actAddFolder);
        toolBar->addAction(actAddfiles);
        toolBar->addAction(actForeachList);
        toolBar->addAction(actDelList);
        toolBar_2->addAction(actZoomIn);
        toolBar_2->addAction(actZoomOut);
        toolBar_2->addAction(actActSize);
        toolBar_2->addAction(actFitHeight);
        toolBar_2->addAction(actFFitWeight);
        toolBar_3->addAction(actWindowsHide);
        toolBar_3->addAction(actWindowsFloat);
        toolBar_3->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actAddfiles->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", Q_NULLPTR));
        actAddFolder->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", Q_NULLPTR));
        actZoomIn->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
        actZoomOut->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
        actForeachList->setText(QApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", Q_NULLPTR));
        actDelList->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", Q_NULLPTR));
        actActSize->setText(QApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", Q_NULLPTR));
        actFitHeight->setText(QApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", Q_NULLPTR));
        actFFitWeight->setText(QApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", Q_NULLPTR));
        actWindowsHide->setText(QApplication::translate("MainWindow", "\347\252\227\344\275\223\345\217\257\350\247\201", Q_NULLPTR));
        actWindowsFloat->setText(QApplication::translate("MainWindow", "\347\252\227\344\275\223\346\265\256\345\212\250", Q_NULLPTR));
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", Q_NULLPTR));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindow", "toolBar_3", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\345\233\276\347\211\207\347\233\256\345\275\225\346\240\221", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "type", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Item", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "root", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "new item", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
