#include "logindlg.h"
#include "ui_logindlg.h"
#include <QtGui>
#include "registerdlg.h"
#include "client_db.h"

#include <iostream>
extern user current_user;
loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDlg)
{
    //setWindowTitle("客户端————登录");

    ui->setupUi(this);
}

loginDlg::~loginDlg()
{
    delete ui;
}

void loginDlg::on_loginBtn_clicked()
{
    user u;
    memset(&u,'\0',sizeof(u));
    QByteArray temp=ui->userLineEdit->text().toLatin1();
    strcpy(u.name,temp.data());
    get_user_by_name(u.name,&u);
    if(ui->pwdLineEdit->text()==QString(u.passwd)){
        current_user.userno=u.userno;
        std::cout << "PID::"<<PID<<"\n";
        memcpy(&current_user, &u, sizeof(user));
        std::cout<<"Login全局变量:当前用户ID"<<current_user.userno<<"用户名"<<current_user.name<<"\n";
       // std::cout << "ddd\n";
       // std::cout << u.name;
       // strcpy(current_user.nuseame,u.name);
       // std::cout<<current_user.name;
       // ;
        accept();
    }else{
        QMessageBox::warning(this,tr("Warning"),tr("username or password error!"),QMessageBox::Yes);
    }
    ui->userLineEdit->clear();
    ui->pwdLineEdit->clear();
    ui->userLineEdit->setFocus();
}

void loginDlg::on_regBtn_clicked()
{
    registerDlg regist;
    int result =regist.exec();
    if(result==QDialog::Accepted){

    }else if(result==QDialog::Rejected){

    }

}
