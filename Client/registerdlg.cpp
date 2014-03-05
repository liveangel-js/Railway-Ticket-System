#include "registerdlg.h"
#include "ui_registerdlg.h"
#include "client_db.h"
#include <string.h>
registerDlg::registerDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerDlg)
{
    ui->setupUi(this);
}

registerDlg::~registerDlg()
{
    delete ui;
}



void registerDlg::on_regBtn_clicked()
{

    user u;
    memset(&u,'\0',sizeof(u));
    QByteArray temp=ui->input_username->text().toLatin1();
    strcpy(u.name,temp.data());
    temp=ui->input_password->text().toLatin1();
    strcpy(u.passwd,temp.data());
    temp=ui->input_id->text().toLatin1();
    strcpy(u.ID,temp.data());
    temp=ui->input_phone->text().toLatin1();
    strcpy(u.phone,temp.data());
    temp=ui->input_phone_2->text().toLatin1();
    strcpy(u.email,temp.data());
    int temp1 = add_user(&u);
    if(temp1==1){
        QMessageBox::warning(this,tr("Message"),tr("register success!"),QMessageBox::Yes);
        accept();
    }else{
        QMessageBox::warning(this,tr("Message"),tr("register failed!"),QMessageBox::Yes);
    }

}

void registerDlg::on_backBtn_clicked()
{
    reject();

}
