#ifndef OPENFILEDLG_H
#define OPENFILEDLG_H

#include <QDialog>

namespace Ui {
class OpenFileDlg;
}

class OpenFileDlg : public QDialog
{
    Q_OBJECT

public:
    explicit OpenFileDlg(QWidget *parent = 0);
    explicit OpenFileDlg(const QString &content, QWidget *parent = 0);
    ~OpenFileDlg();

private:
    Ui::OpenFileDlg *ui;
};

#endif // OPENFILEDLG_H
