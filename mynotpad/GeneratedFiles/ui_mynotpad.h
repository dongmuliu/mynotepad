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
    QAction *action_A;
    QAction *action_P;
    QAction *action_E;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
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
        action_A = new QAction(mynotpadClass);
        action_A->setObjectName(QStringLiteral("action_A"));
        action_P = new QAction(mynotpadClass);
        action_P->setObjectName(QStringLiteral("action_P"));
        action_E = new QAction(mynotpadClass);
        action_E->setObjectName(QStringLiteral("action_E"));
        centralWidget = new QWidget(mynotpadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(-20, -10, 611, 351));
        mynotpadClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mynotpadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        mynotpadClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mynotpadClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mynotpadClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mynotpadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mynotpadClass->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(action_A);
        menu_F->addAction(action_P);
        menu_F->addAction(action_E);

        retranslateUi(mynotpadClass);

        QMetaObject::connectSlotsByName(mynotpadClass);
    } // setupUi

    void retranslateUi(QMainWindow *mynotpadClass)
    {
        mynotpadClass->setWindowTitle(QApplication::translate("mynotpadClass", "mynotpad", 0));
        newAction->setText(QApplication::translate("mynotpadClass", "\346\226\260\345\273\272\357\274\210&N\357\274\211", 0));
        openAction->setText(QApplication::translate("mynotpadClass", "\346\211\223\345\274\200\357\274\210&O\357\274\211", 0));
        saveAction->setText(QApplication::translate("mynotpadClass", "\344\277\235\345\255\230\357\274\210&S\357\274\211", 0));
        action_A->setText(QApplication::translate("mynotpadClass", "\345\217\246\345\255\230\344\270\272\357\274\210&A\357\274\211", 0));
        action_P->setText(QApplication::translate("mynotpadClass", "\346\211\223\345\215\260\357\274\210&P\357\274\211", 0));
        action_E->setText(QApplication::translate("mynotpadClass", "\351\200\200\345\207\272\357\274\210&E\357\274\211", 0));
        menu_F->setTitle(QApplication::translate("mynotpadClass", "\346\226\207\344\273\266\357\274\210&F\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class mynotpadClass: public Ui_mynotpadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYNOTPAD_H
