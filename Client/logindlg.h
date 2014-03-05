#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <qstring.h>
#include <QtGui/QMessageBox>
#include "client.h"
namespace Ui {
class loginDlg;
}

class loginDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit loginDlg(QWidget *parent = 0);
    ~loginDlg();
    
private slots:
    void on_regBtn_clicked();

    void on_loginBtn_clicked();

private:
    Ui::loginDlg *ui;
};

#endif // LOGINDLG_H
