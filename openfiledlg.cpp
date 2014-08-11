#include "openfiledlg.h"
#include "ui_openfiledlg.h"

OpenFileDlg::OpenFileDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenFileDlg)
{
    ui->setupUi(this);
}

OpenFileDlg::OpenFileDlg(const QString &content, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenFileDlg)
{
    ui->setupUi(this);
    ui->teShow->setText(content);
}

OpenFileDlg::~OpenFileDlg()
{
    delete ui;
}
