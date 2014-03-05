#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qstring.h>
#include <QtGui/QMessageBox>
#include <iostream>
#include "client.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void setInit();
    ~MainWindow();
    
private slots:
    void on_show_btn_clicked();

    void on_update_btn_clicked();

    void on_check_query_btn_clicked();

    void on_box_checi_clicked(bool checked);

    void on_box_start_clicked(bool checked);

    void on_btn_buy_ticket_clicked();

    void on_update_btn_2_clicked();

    void on_del_ticket_btn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
