#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include "openfiledlg.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbLoad_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::ExistingFiles);
    fileDialog.setNameFilter("select(*.txt *.cpp *.cc *.h *.c)");
    connect(&fileDialog, SIGNAL(filesSelected(QStringList)), this, SLOT(slotFilesSelected(const QStringList&)));
    fileDialog.exec();
}

void MainWindow::slotFilesSelected(const QStringList &strList)
{
    ui->lwFiles->addItems(strList);
}

void MainWindow::on_pbClear_clicked()
{
    ui->lwFiles->clear();
}

void MainWindow::on_lwFiles_doubleClicked(const QModelIndex &index)
{
    QListWidgetItem *item = ui->lwFiles->item(index.row());
    Q_ASSERT(item != NULL);
    QFile file(item->text());
    if (file.open(QFile::ReadOnly)) {
        QTextStream textStream(&file);
        QString content = textStream.readAll();
        OpenFileDlg *showDlg = new OpenFileDlg(content, this);
        showDlg->setAttribute(Qt::WA_DeleteOnClose);
        showDlg->show();
        file.close();
    }
}

void MainWindow::on_pbToAnsi_clicked()
{
    QDir curDir = QDir::currentPath();
    curDir.mkdir("new");

    for (int i=0; i<ui->lwFiles->count(); i++) {
        QListWidgetItem *item = ui->lwFiles->item(i);
        Q_ASSERT(item != NULL);
        QFile fileRead(item->text());
        if (fileRead.open(QFile::ReadOnly)) {
            QString filename = fileRead.fileName().section('/', -1);
            QFile fileWrite(curDir.filePath("new") + "/" + filename);
            if (fileWrite.open(QFile::WriteOnly)) {
                QTextCodec *codec = QTextCodec::codecForName("GBK");
                QTextStream tsRead(&fileRead);
                tsRead.setCodec(codec);

                QTextStream tsWrite(&fileWrite);
                tsWrite << codec->fromUnicode(fileRead.readAll());
                fileWrite.close();
            }
        }
    }
}
