#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client_db.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <iostream>
extern user current_user;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowTitle("铁路售票系统————客户端");
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setInit(){
    std::cout<<"MainWindow::全局变量:当前用户ID"<<current_user.userno<<"用户名"<<current_user.name<<"\n";
    ui->show_userno->setText(QString::number(current_user.userno));
    ui->show_username->setText(QString(current_user.name));
    ui->show_id->setText(QString(current_user.ID));
    ui->input_mail->setText(QString(current_user.email));
    ui->input_phone->setText(QString(current_user.phone));
   // ui->ticketsTable->setColumnCount(9);
   ui->ticketsTable->setRowCount(30);
    ui->ticketsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->myTicketTable->setRowCount(30);
    ui->myTicketTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

void MainWindow::on_show_btn_clicked()
{
    ui->show_userno->setText(QString::number(current_user.userno));
    ui->show_username->setText(QString(current_user.name));
    ui->show_id->setText(QString(current_user.ID));
    ui->input_mail->setText(QString(current_user.email));
    ui->input_phone->setText(QString(current_user.phone));

}

void MainWindow::on_update_btn_clicked()
{
    int success =-1;
    user u;
    memset(&u,'\0',sizeof(u));
    u.userno=ui->show_userno->text().toInt();
    QByteArray temp=ui->show_username->text().toLatin1();
    strcpy(u.name,temp.data());
    temp=ui->input_pwd->text().toLatin1();
    strcpy(u.passwd,temp.data());
    temp=ui->show_id->text().toLatin1();
    strcpy(u.ID,temp.data());
    temp=ui->input_phone->text().toLatin1();
    strcpy(u.phone,temp.data());
    temp=ui->input_mail->text().toLatin1();
    strcpy(u.email,temp.data());
    success =update_user(&u);
    if(success==1){
        QMessageBox::warning(this,tr("Feedback"),tr("Modify Success"),QMessageBox::Yes);
        memcpy(&current_user, &u, sizeof(user));
        MainWindow::setInit();
    }else{
        QMessageBox::warning(this,tr("Warning"),tr("Modify Failed"),QMessageBox::Yes);
    }
}

void MainWindow::on_check_query_btn_clicked()
{
    if((ui->box_checi->checkState()==Qt::Unchecked)&&(ui->box_start->checkState()==Qt::Unchecked)){
        QMessageBox::warning(this,tr("Warning"),tr("Can' be empty"),QMessageBox::Yes);
        return;
    }
    ticket t;
    memset(&t,'\0',sizeof(t));
    QByteArray temp= ui->check_checi->text().toLatin1();
    if(ui->box_checi->checkState()==Qt::Checked){

        strcpy(t.checi,temp.data());
    }
    if(ui->box_start->checkState()==Qt::Checked){
        temp=ui->check_start->text().toLatin1();
        strcpy(t.start_place,temp.data());
    }
    if(ui->box_date->checkState()==Qt::Checked){
        temp=ui->check_date->text().toLatin1();
        strcpy(t.date,temp.data());
    }

    if(ui->box_date->checkState()==Qt::Unchecked){
        if(ui->box_checi->checkState()==Qt::Checked){
            t.price=0;
            //有车次无日期
        }else{
            t.price=10;
            //有发站无日期
        }

    }else{
        if(ui->box_checi->checkState()==Qt::Checked){
            t.price=1;
            //有车次有日期
        }else{
            t.price=11;
            //有发站有日期
        }

    }
    ticket * tset;
       tset =NULL;
       int getn;
       getn=0;
       tset=get_tickets(&t,&getn);
       std::cout<<"得到:"<<getn<<"个符合条件的火车票\n";
       for(int i=0;i<30;i++){
           for(int j=0;j<9;j++){
               ui->ticketsTable->setItem(i,j,new QTableWidgetItem(""));
           }
       }
       if(!tset){
             QMessageBox::warning(this,tr("Warning"),tr("No Results!"),QMessageBox::Yes);
             return;
       }else{
           for(int k=0;k<getn;k++){
               ui->ticketsTable->setItem(k,0,new QTableWidgetItem(QString::number((tset+k)->ticketno)));
               ui->ticketsTable->setItem(k,1,new QTableWidgetItem(QString((tset+k)->checi)));
               ui->ticketsTable->setItem(k,2,new QTableWidgetItem(QString((tset+k)->start_place)));
               ui->ticketsTable->setItem(k,3,new QTableWidgetItem(QString((tset+k)->finish_place)));
               ui->ticketsTable->setItem(k,4,new QTableWidgetItem(QString((tset+k)->start_time)));
               ui->ticketsTable->setItem(k,5,new QTableWidgetItem(QString((tset+k)->finish_time)));
               ui->ticketsTable->setItem(k,6,new QTableWidgetItem(QString::number((tset+k)->price)));
               ui->ticketsTable->setItem(k,7,new QTableWidgetItem(QString((tset+k)->date)));
               ui->ticketsTable->setItem(k,8,new QTableWidgetItem(QString::number((tset+k)->remain)));
           }


       }

}

void MainWindow::on_box_checi_clicked(bool checked)
{
    if(checked){
        ui->box_start->setCheckable(false);
    }else{
        ui->box_start->setCheckable(true);
    }

}

void MainWindow::on_box_start_clicked(bool checked)
{
    if(checked){
        ui->box_checi->setCheckable(false);
    }else{
        ui->box_checi->setCheckable(true);
    }
}

void MainWindow::on_btn_buy_ticket_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));

    t.ticketno=ui->buy_ticketno->text().toInt();
    int back =add_order(&current_user,&t);
    if(back==1){
        QMessageBox::warning(this,tr("Warning"),tr("Buy Success"),QMessageBox::Yes);
    }else{
        QMessageBox::warning(this,tr("Warning"),tr("Buy Failed"),QMessageBox::Yes);
    }

}

void MainWindow::on_update_btn_2_clicked()
{
        ticket * tset;
       tset =NULL;
       int getn;
       getn=0;
       tset=get_orders(&current_user,&getn);
       std::cout<<"得到:"<<getn<<"我的火车票\n";
       for(int i=0;i<30;i++){
           for(int j=0;j<9;j++){
               ui->myTicketTable->setItem(i,j,new QTableWidgetItem(""));
           }
       }
       if(!tset){
             QMessageBox::warning(this,tr("Warning"),tr("No Tickets!"),QMessageBox::Yes);
             return;
       }else{
           for(int k=0;k<getn;k++){
               ui->myTicketTable->setItem(k,0,new QTableWidgetItem(QString::number((tset+k)->ticketno)));
               ui->myTicketTable->setItem(k,1,new QTableWidgetItem(QString((tset+k)->checi)));
               ui->myTicketTable->setItem(k,2,new QTableWidgetItem(QString((tset+k)->start_place)));
               ui->myTicketTable->setItem(k,3,new QTableWidgetItem(QString((tset+k)->finish_place)));
               ui->myTicketTable->setItem(k,4,new QTableWidgetItem(QString((tset+k)->start_time)));
               ui->myTicketTable->setItem(k,5,new QTableWidgetItem(QString((tset+k)->finish_time)));
               ui->myTicketTable->setItem(k,6,new QTableWidgetItem(QString::number((tset+k)->price)));
               ui->myTicketTable->setItem(k,7,new QTableWidgetItem(QString((tset+k)->date)));
               ui->myTicketTable->setItem(k,8,new QTableWidgetItem(QString::number(1)));
           }


       }



}

void MainWindow::on_del_ticket_btn_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));
    t.ticketno=ui->input_delTicket->text().toInt();
    int back =del_order(&current_user,&t);
    if(back==1){
        QMessageBox::warning(this,tr("Warning"),tr("Return success!"),QMessageBox::Yes);
    }else{
        QMessageBox::warning(this,tr("Warning"),tr("Return Failed!!"),QMessageBox::Yes);
    }

}
