/********************************************************************************
** Form generated from reading UI file 'PDF_TAB.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDF_TAB_H
#define UI_PDF_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDF_TABClass
{
public:
    QAction *actionRun;
    QAction *actionClear;
    QAction *actionCopy;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextInput;
    QPlainTextEdit *plainTextOutput;
    QMenuBar *menuBar;
    QMenu *menuflie;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PDF_TABClass)
    {
        if (PDF_TABClass->objectName().isEmpty())
            PDF_TABClass->setObjectName(QStringLiteral("PDF_TABClass"));
        PDF_TABClass->resize(866, 505);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/mico.png"), QSize(), QIcon::Normal, QIcon::Off);
        PDF_TABClass->setWindowIcon(icon);
        actionRun = new QAction(PDF_TABClass);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        actionClear = new QAction(PDF_TABClass);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon1);
        actionCopy = new QAction(PDF_TABClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon2);
        centralWidget = new QWidget(PDF_TABClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plainTextInput = new QPlainTextEdit(centralWidget);
        plainTextInput->setObjectName(QStringLiteral("plainTextInput"));
        plainTextInput->setCursorWidth(1);

        horizontalLayout->addWidget(plainTextInput);

        plainTextOutput = new QPlainTextEdit(centralWidget);
        plainTextOutput->setObjectName(QStringLiteral("plainTextOutput"));
        plainTextOutput->setReadOnly(true);

        horizontalLayout->addWidget(plainTextOutput);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        PDF_TABClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PDF_TABClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 866, 23));
        menuflie = new QMenu(menuBar);
        menuflie->setObjectName(QStringLiteral("menuflie"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        PDF_TABClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PDF_TABClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PDF_TABClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PDF_TABClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PDF_TABClass->setStatusBar(statusBar);

        menuBar->addAction(menuflie->menuAction());
        menuBar->addAction(menu->menuAction());
        menuflie->addAction(actionRun);
        menu->addAction(actionClear);
        menu->addAction(actionCopy);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionCopy);

        retranslateUi(PDF_TABClass);
        QObject::connect(plainTextInput, SIGNAL(textChanged()), PDF_TABClass, SLOT(inputChange()));
        QObject::connect(actionClear, SIGNAL(triggered()), PDF_TABClass, SLOT(onClear()));
        QObject::connect(actionCopy, SIGNAL(triggered()), PDF_TABClass, SLOT(onCopyOut()));

        QMetaObject::connectSlotsByName(PDF_TABClass);
    } // setupUi

    void retranslateUi(QMainWindow *PDF_TABClass)
    {
        PDF_TABClass->setWindowTitle(QApplication::translate("PDF_TABClass", "PDF_TAB", Q_NULLPTR));
        actionRun->setText(QApplication::translate("PDF_TABClass", "run", Q_NULLPTR));
        actionClear->setText(QApplication::translate("PDF_TABClass", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("PDF_TABClass", "\346\270\205\347\251\272\350\276\223\345\205\245\346\241\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("PDF_TABClass", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("PDF_TABClass", "\345\244\215\345\210\266\350\276\223\345\207\272\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menuflie->setTitle(QApplication::translate("PDF_TABClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu->setTitle(QApplication::translate("PDF_TABClass", "\347\274\226\350\276\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PDF_TABClass: public Ui_PDF_TABClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDF_TAB_H
