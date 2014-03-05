#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qstring.h>
#include <QtGui/QMessageBox>
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
signals:

private slots:
    void addTickets();
    void changeTickets();
    void queryTickets();
  //  char * QStringtoChar(const Qstring *x);
    void on_update_ticket_btn_clicked();



    void on_update_table_btn_clicked();

    void on_update_place_btn_clicked();

    void on_checi_query_btn_clicked();

    void on_checi_table_update_clicked();

    void on_checi_update_btn_clicked();

private:
    Ui::MainWindow *ui;

};
//char * QStringtoChar(Qstring * q);
#endif // MAINWINDOW_H
