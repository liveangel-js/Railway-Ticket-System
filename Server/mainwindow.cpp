#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "daily.h"
#include "model.h"
#include "server_db.h"
char * trans(QString q);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   //QLineEdit * b = ui->Ui_MainWindow->ticket_checi_input;
  // b->setText("aa");
   // setWindowTitle("铁路售票系统————服务器、管理员端");
    ui->setupUi(this);
    connect(ui->btn_addTicket,SIGNAL(clicked()),this,SLOT(addTickets()));
    connect(ui->btn_changeTicket,SIGNAL(clicked()),this,SLOT(changeTickets()));
    connect(ui->btn_queryTicket,SIGNAL(clicked()),this,SLOT(queryTickets()));
}
void MainWindow::setInit(){
    ui->ticketsTable->setRowCount(30);
     ui->ticketsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
     ui->update_ticket_btn->click();

     ui->place_table->setRowCount(30);
    ui->place_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->update_table_btn->click();

    ui->checi_table->setRowCount(30);
    ui->checi_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->checi_table_update->click();
}

void MainWindow::addTickets(){

        ticket t;
        memset(&t,'\0',sizeof(ticket));

        strcpy(t.checi,trans(ui->ticket_checi_input->text()));
        strcpy(t.start_place,trans(ui->ticket_start_input->text()));
        strcpy(t.finish_place,trans(ui->ticket_finish_input->text()));
        strcpy(t.start_time,trans(ui->ticket_start_time_input->text()));
        strcpy(t.finish_time,trans(ui->ticket_end_time_input->text()));
        t.price=ui->ticket_price_input->text().toInt();
        strcpy(t.date,trans(ui->ticket_date_input->text()));
        t.remain=ui->ticket_volume_input->text().toInt();
        add_ticket(&t);
    QMessageBox::about(this,"Ticket Manage","Add Success!");
    ui->update_ticket_btn->click();
}




void MainWindow::changeTickets(){
    ticket t;
    memset(&t,'\0',sizeof(ticket));
    t.ticketno=ui->ticket_id_output->text().toInt();
    strcpy(t.checi,trans(ui->ticket_checi_input->text()));
    strcpy(t.start_place,trans(ui->ticket_start_input->text()));
    strcpy(t.finish_place,trans(ui->ticket_finish_input->text()));
    strcpy(t.start_time,trans(ui->ticket_start_time_input->text()));
    strcpy(t.finish_time,trans(ui->ticket_end_time_input->text()));
    t.price=ui->ticket_price_input->text().toInt();
    strcpy(t.date,trans(ui->ticket_date_input->text()));
    t.remain=ui->ticket_volume_input->text().toInt();

    if(update_ticket_by_manage(&t)){
        QMessageBox::about(this,"Ticket Manage","Change Success!");
    }else{
        QMessageBox::about(this,"Ticket Manage","Change Failed!");
    }
    ui->update_ticket_btn->click();


}
void MainWindow::queryTickets(){
    ticket t;
    memset(&t,'\0',sizeof(ticket));
    t.ticketno=ui->ticket_id_output->text().toInt();

    if(get_ticket_by_no(t.ticketno,&t)>0){
        ui->ticket_id_output->setText(QString::number(t.ticketno));
        ui->ticket_checi_input->setText(QString(t.checi));
        ui->ticket_start_input->setText(QString(t.start_place));
        ui->ticket_finish_input->setText(QString(t.finish_place));
        ui->ticket_start_time_input->setText(QString(t.start_time));
        ui->ticket_end_time_input->setText(QString(t.finish_time));
        ui->ticket_volume_input->setText(QString::number(t.remain));
        ui->ticket_price_input->setText(QString::number(t.price));
        ui->ticket_date_input->setText(QString(t.date));
    }else{
         QMessageBox::about(this,"Ticket Manage","NO result!");
    }




}
MainWindow::~MainWindow()
{
    delete ui;
}
char * trans(QString q){
    QByteArray temp=q.toLatin1();
        return temp.data();

}

void MainWindow::on_update_ticket_btn_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));
    t.price=21;
    ticket * tset;
       tset =NULL;
       int getn;
       getn=0;
       tset=get_tickets(&t,&getn);

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


void MainWindow::on_update_table_btn_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));
    t.price=21;
    ticket * tset;
       tset =NULL;
       int getn;
       getn=0;
       tset=get_place(&t,&getn);

       for(int i=0;i<30;i++){
           for(int j=0;j<1;j++){
               ui->place_table->setItem(i,j,new QTableWidgetItem(""));
           }
       }
       if(!tset){
             QMessageBox::warning(this,tr("Warning"),tr("No Results!"),QMessageBox::Yes);
             return;
       }else{
           for(int k=0;k<getn;k++){

               ui->place_table->setItem(k,0,new QTableWidgetItem(QString((tset+k)->start_place)));

           }


       }

}

void MainWindow::on_update_place_btn_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));
    strcpy(t.start_place,trans(ui->old_place->text()));
    strcpy(t.finish_place,trans(ui->new_place->text()));
    if(update_place_by_manage(&t)){
        QMessageBox::warning(this,tr("Warning"),tr("Modify Success!"),QMessageBox::Yes);
    }else{
        QMessageBox::warning(this,tr("Warning"),tr("Failed!"),QMessageBox::Yes);
    }
    ui->update_table_btn->click();

}

void MainWindow::on_checi_query_btn_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));
    strcpy(t.checi,trans(ui->checi_checi->text()));
    if(get_ticket_by_checi(t.checi, &t)){
        ui->checi_from->setText(QString(t.start_place));
        ui->checi_to->setText(QString(t.finish_place));
        ui->checi_starttime->setText(QString(t.start_time));
        ui->checi_finishtime->setText(QString(t.finish_time));

    }else{
        QMessageBox::warning(this,tr("Warning"),tr("NO THIS TRAIN!"),QMessageBox::Yes);
    }

    ;

}

void MainWindow::on_checi_table_update_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));
    t.price=21;
    ticket * tset;
       tset =NULL;
       int getn;
       getn=0;
       tset=get_checi(&t,&getn);

       for(int i=0;i<30;i++){
           for(int j=0;j<5;j++){
               ui->checi_table->setItem(i,j,new QTableWidgetItem(""));
           }
       }
       if(!tset){
             QMessageBox::warning(this,tr("Warning"),tr("No Results!"),QMessageBox::Yes);
             return;
       }else{
           for(int k=0;k<getn;k++){
               ui->checi_table->setItem(k,0,new QTableWidgetItem(QString((tset+k)->checi)));
               ui->checi_table->setItem(k,1,new QTableWidgetItem(QString((tset+k)->start_place)));
               ui->checi_table->setItem(k,2,new QTableWidgetItem(QString((tset+k)->finish_place)));
               ui->checi_table->setItem(k,3,new QTableWidgetItem(QString((tset+k)->start_time)));
               ui->checi_table->setItem(k,4,new QTableWidgetItem(QString((tset+k)->finish_time)));
           }


       }

}

void MainWindow::on_checi_update_btn_clicked()
{
    ticket t;
    memset(&t,'\0',sizeof(t));
    strcpy(t.checi,trans(ui->checi_checi->text()));
    strcpy(t.start_place,trans(ui->checi_from->text()));
    strcpy(t.finish_place,trans(ui->checi_to->text()));
    strcpy(t.start_time,trans(ui->checi_starttime->text()));
    strcpy(t.finish_time,trans(ui->checi_finishtime->text()));
    if(update_checi_by_manage(&t)){
        QMessageBox::warning(this,tr("Warning"),tr("Modify Success!"),QMessageBox::Yes);
    }else{
        QMessageBox::warning(this,tr("Warning"),tr("Failed!"),QMessageBox::Yes);
    }

    ui->checi_table_update->click();
}
