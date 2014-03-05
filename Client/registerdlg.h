#ifndef REGISTERDLG_H
#define REGISTERDLG_H

#include <QDialog>
#include <qstring.h>
#include <QtGui/QMessageBox>
#include "model.h"

namespace Ui {
class registerDlg;
}

class registerDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit registerDlg(QWidget *parent = 0);
    ~registerDlg();
    
private slots:

    void on_regBtn_clicked();

    void on_backBtn_clicked();

private:
    Ui::registerDlg *ui;
};

#endif // REGISTERDLG_H
