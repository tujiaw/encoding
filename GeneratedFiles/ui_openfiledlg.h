/********************************************************************************
** Form generated from reading UI file 'openfiledlg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENFILEDLG_H
#define UI_OPENFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_OpenFileDlg
{
public:
    QGridLayout *gridLayout;
    QTextEdit *teShow;

    void setupUi(QDialog *OpenFileDlg)
    {
        if (OpenFileDlg->objectName().isEmpty())
            OpenFileDlg->setObjectName(QStringLiteral("OpenFileDlg"));
        OpenFileDlg->resize(562, 624);
        gridLayout = new QGridLayout(OpenFileDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teShow = new QTextEdit(OpenFileDlg);
        teShow->setObjectName(QStringLiteral("teShow"));

        gridLayout->addWidget(teShow, 0, 0, 1, 1);


        retranslateUi(OpenFileDlg);

        QMetaObject::connectSlotsByName(OpenFileDlg);
    } // setupUi

    void retranslateUi(QDialog *OpenFileDlg)
    {
        OpenFileDlg->setWindowTitle(QApplication::translate("OpenFileDlg", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenFileDlg: public Ui_OpenFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENFILEDLG_H
