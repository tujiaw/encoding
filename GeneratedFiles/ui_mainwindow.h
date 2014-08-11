/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *lwFiles;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbLoad;
    QPushButton *pbClear;
    QPushButton *pbToAnsi;
    QPushButton *pbToUnicode;
    QPushButton *pbToUtf8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(631, 324);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lwFiles = new QListWidget(centralWidget);
        lwFiles->setObjectName(QStringLiteral("lwFiles"));

        verticalLayout->addWidget(lwFiles);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbLoad = new QPushButton(centralWidget);
        pbLoad->setObjectName(QStringLiteral("pbLoad"));

        horizontalLayout->addWidget(pbLoad);

        pbClear = new QPushButton(centralWidget);
        pbClear->setObjectName(QStringLiteral("pbClear"));

        horizontalLayout->addWidget(pbClear);

        pbToAnsi = new QPushButton(centralWidget);
        pbToAnsi->setObjectName(QStringLiteral("pbToAnsi"));

        horizontalLayout->addWidget(pbToAnsi);

        pbToUnicode = new QPushButton(centralWidget);
        pbToUnicode->setObjectName(QStringLiteral("pbToUnicode"));

        horizontalLayout->addWidget(pbToUnicode);

        pbToUtf8 = new QPushButton(centralWidget);
        pbToUtf8->setObjectName(QStringLiteral("pbToUtf8"));

        horizontalLayout->addWidget(pbToUtf8);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 631, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pbLoad->setText(QApplication::translate("MainWindow", "load", 0));
        pbClear->setText(QApplication::translate("MainWindow", "clear", 0));
        pbToAnsi->setText(QApplication::translate("MainWindow", "to ansi", 0));
        pbToUnicode->setText(QApplication::translate("MainWindow", "to unicode", 0));
        pbToUtf8->setText(QApplication::translate("MainWindow", "to utf-8", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
