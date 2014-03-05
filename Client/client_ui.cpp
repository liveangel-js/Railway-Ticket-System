#include "mainwindow.h"
#include "client_ui.h"
#include "client_db.h"
#include "client.h"
#include "logindlg.h"
int ui_start(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    loginDlg login;
    if(login.exec()==QDialog::Accepted)
    {
        w.show();
        w.setInit();
        return a.exec();
    }else{
        return 0;
    }


}
