/********************************************************************************
** Form generated from reading UI file 'mynotpad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYNOTPAD_H
#define UI_MYNOTPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mynotpadClass
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveasAction;
    QAction *action_P;
    QAction *exitAction;
    QAction *undoAction;
    QAction *redoAction;
    QAction *copyAction;
    QAction *cutAction;
    QAction *selectAllAction;
    QAction *datetimeAction;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mynotpadClass)
    {
        if (mynotpadClass->objectName().isEmpty())
            mynotpadClass->setObjectName(QStringLiteral("mynotpadClass"));
        mynotpadClass->resize(600, 400);
        newAction = new QAction(mynotpadClass);
        newAction->setObjectName(QStringLiteral("newAction"));
        openAction = new QAction(mynotpadClass);
        openAction->setObjectName(QStringLiteral("openAction"));
        saveAction = new QAction(mynotpadClass);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        saveasAction = new QAction(mynotpadClass);
        saveasAction->setObjectName(QStringLiteral("saveasAction"));
        action_P = new QAction(mynotpadClass);
        action_P->setObjectName(QStringLiteral("action_P"));
        exitAction = new QAction(mynotpadClass);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        undoAction = new QAction(mynotpadClass);
        undoAction->setObjectName(QStringLiteral("undoAction"));
        redoAction = new QAction(mynotpadClass);
        redoAction->setObjectName(QStringLiteral("redoAction"));
        copyAction = new QAction(mynotpadClass);
        copyAction->setObjectName(QStringLiteral("copyAction"));
        cutAction = new QAction(mynotpadClass);
        cutAction->setObjectName(QStringLiteral("cutAction"));
        selectAllAction = new QAction(mynotpadClass);
        selectAllAction->setObjectName(QStringLiteral("selectAllAction"));
        datetimeAction = new QAction(mynotpadClass);
        datetimeAction->setObjectName(QStringLiteral("datetimeAction"));
        centralWidget = new QWidget(mynotpadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 611, 351));
        mynotpadClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mynotpadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        mynotpadClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mynotpadClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mynotpadClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mynotpadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mynotpadClass->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(saveasAction);
        menu_F->addAction(action_P);
        menu_F->addAction(exitAction);
        menu_E->addAction(undoAction);
        menu_E->addAction(redoAction);
        menu_E->addAction(copyAction);
        menu_E->addAction(cutAction);
        menu_E->addAction(selectAllAction);
        menu_E->addAction(datetimeAction);

        retranslateUi(mynotpadClass);

        QMetaObject::connectSlotsByName(mynotpadClass);
    } // setupUi

    void retranslateUi(QMainWindow *mynotpadClass)
    {
        mynotpadClass->setWindowTitle(QApplication::translate("mynotpadClass", "mynotpad", 0));
        newAction->setText(QApplication::translate("mynotpadClass", "\346\226\260\345\273\272\357\274\210&N\357\274\211", 0));
        openAction->setText(QApplication::translate("mynotpadClass", "\346\211\223\345\274\200\357\274\210&O\357\274\211", 0));
        saveAction->setText(QApplication::translate("mynotpadClass", "\344\277\235\345\255\230\357\274\210&S\357\274\211", 0));
        saveasAction->setText(QApplication::translate("mynotpadClass", "\345\217\246\345\255\230\344\270\272\357\274\210&A\357\274\211", 0));
        action_P->setText(QApplication::translate("mynotpadClass", "\346\211\223\345\215\260\357\274\210&P\357\274\211", 0));
        exitAction->setText(QApplication::translate("mynotpadClass", "\351\200\200\345\207\272\357\274\210&E\357\274\211", 0));
        undoAction->setText(QApplication::translate("mynotpadClass", "\346\222\244\351\224\200\357\274\210&U\357\274\211", 0));
        redoAction->setText(QApplication::translate("mynotpadClass", "\351\207\215\345\201\232\357\274\210&R\357\274\211", 0));
        copyAction->setText(QApplication::translate("mynotpadClass", "\345\244\215\345\210\266\357\274\210&C\357\274\211", 0));
        cutAction->setText(QApplication::translate("mynotpadClass", "\345\211\252\345\210\207\357\274\210&X\357\274\211", 0));
        selectAllAction->setText(QApplication::translate("mynotpadClass", "\347\262\230\350\264\264\357\274\210&P\357\274\211", 0));
        datetimeAction->setText(QApplication::translate("mynotpadClass", "\346\227\245\346\234\237\357\274\210&D\357\274\211", 0));
        menu_F->setTitle(QApplication::translate("mynotpadClass", "\346\226\207\344\273\266\357\274\210&F\357\274\211", 0));
        menu_E->setTitle(QApplication::translate("mynotpadClass", "\347\274\226\350\276\221\357\274\210&E\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class mynotpadClass: public Ui_mynotpadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYNOTPAD_H
