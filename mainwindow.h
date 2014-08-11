#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QListWidgetItem;
class QModeIndex;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pbLoad_clicked();
    void on_pbClear_clicked();

    void slotFilesSelected(const QStringList&);
    void on_lwFiles_doubleClicked(const QModelIndex &index);

    void on_pbToAnsi_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
