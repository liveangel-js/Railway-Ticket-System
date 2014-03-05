/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Mar 15 06:20:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *show_userno;
    QLineEdit *show_username;
    QLineEdit *input_pwd;
    QLineEdit *show_id;
    QLineEdit *input_phone;
    QLineEdit *input_mail;
    QPushButton *show_btn;
    QPushButton *update_btn;
    QWidget *tab_2;
    QLineEdit *check_checi;
    QLineEdit *check_start;
    QLineEdit *check_date;
    QCheckBox *box_checi;
    QCheckBox *box_date;
    QCheckBox *box_start;
    QPushButton *check_query_btn;
    QLabel *label_7;
    QLineEdit *buy_ticketno;
    QPushButton *btn_buy_ticket;
    QTableWidget *ticketsTable;
    QWidget *tab_3;
    QTableWidget *myTicketTable;
    QLabel *label_8;
    QLineEdit *input_delTicket;
    QPushButton *del_ticket_btn;
    QPushButton *update_btn_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1064, 528);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 1011, 451));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 66, 17));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 66, 17));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 120, 66, 17));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 170, 66, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 220, 66, 17));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 260, 66, 17));
        show_userno = new QLineEdit(tab);
        show_userno->setObjectName(QString::fromUtf8("show_userno"));
        show_userno->setGeometry(QRect(140, 30, 113, 27));
        show_userno->setReadOnly(true);
        show_username = new QLineEdit(tab);
        show_username->setObjectName(QString::fromUtf8("show_username"));
        show_username->setGeometry(QRect(140, 70, 113, 27));
        show_username->setReadOnly(true);
        input_pwd = new QLineEdit(tab);
        input_pwd->setObjectName(QString::fromUtf8("input_pwd"));
        input_pwd->setGeometry(QRect(140, 120, 113, 27));
        show_id = new QLineEdit(tab);
        show_id->setObjectName(QString::fromUtf8("show_id"));
        show_id->setGeometry(QRect(140, 170, 221, 27));
        show_id->setReadOnly(true);
        input_phone = new QLineEdit(tab);
        input_phone->setObjectName(QString::fromUtf8("input_phone"));
        input_phone->setGeometry(QRect(140, 210, 221, 27));
        input_mail = new QLineEdit(tab);
        input_mail->setObjectName(QString::fromUtf8("input_mail"));
        input_mail->setGeometry(QRect(140, 260, 221, 27));
        show_btn = new QPushButton(tab);
        show_btn->setObjectName(QString::fromUtf8("show_btn"));
        show_btn->setGeometry(QRect(460, 20, 98, 27));
        update_btn = new QPushButton(tab);
        update_btn->setObjectName(QString::fromUtf8("update_btn"));
        update_btn->setGeometry(QRect(460, 70, 98, 27));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        check_checi = new QLineEdit(tab_2);
        check_checi->setObjectName(QString::fromUtf8("check_checi"));
        check_checi->setGeometry(QRect(90, 10, 121, 27));
        check_start = new QLineEdit(tab_2);
        check_start->setObjectName(QString::fromUtf8("check_start"));
        check_start->setGeometry(QRect(90, 40, 121, 27));
        check_date = new QLineEdit(tab_2);
        check_date->setObjectName(QString::fromUtf8("check_date"));
        check_date->setGeometry(QRect(390, 10, 113, 27));
        box_checi = new QCheckBox(tab_2);
        box_checi->setObjectName(QString::fromUtf8("box_checi"));
        box_checi->setGeometry(QRect(20, 10, 97, 22));
        box_date = new QCheckBox(tab_2);
        box_date->setObjectName(QString::fromUtf8("box_date"));
        box_date->setGeometry(QRect(290, 10, 97, 22));
        box_start = new QCheckBox(tab_2);
        box_start->setObjectName(QString::fromUtf8("box_start"));
        box_start->setGeometry(QRect(20, 40, 97, 22));
        check_query_btn = new QPushButton(tab_2);
        check_query_btn->setObjectName(QString::fromUtf8("check_query_btn"));
        check_query_btn->setGeometry(QRect(550, 20, 98, 27));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 380, 66, 17));
        buy_ticketno = new QLineEdit(tab_2);
        buy_ticketno->setObjectName(QString::fromUtf8("buy_ticketno"));
        buy_ticketno->setGeometry(QRect(140, 370, 113, 27));
        btn_buy_ticket = new QPushButton(tab_2);
        btn_buy_ticket->setObjectName(QString::fromUtf8("btn_buy_ticket"));
        btn_buy_ticket->setGeometry(QRect(310, 370, 98, 27));
        ticketsTable = new QTableWidget(tab_2);
        if (ticketsTable->columnCount() < 9)
            ticketsTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ticketsTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        if (ticketsTable->rowCount() < 1)
            ticketsTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ticketsTable->setVerticalHeaderItem(0, __qtablewidgetitem9);
        ticketsTable->setObjectName(QString::fromUtf8("ticketsTable"));
        ticketsTable->setGeometry(QRect(10, 80, 981, 271));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        myTicketTable = new QTableWidget(tab_3);
        if (myTicketTable->columnCount() < 9)
            myTicketTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        myTicketTable->setHorizontalHeaderItem(8, __qtablewidgetitem18);
        if (myTicketTable->rowCount() < 1)
            myTicketTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        myTicketTable->setVerticalHeaderItem(0, __qtablewidgetitem19);
        myTicketTable->setObjectName(QString::fromUtf8("myTicketTable"));
        myTicketTable->setGeometry(QRect(20, 60, 1031, 341));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(210, 10, 66, 17));
        input_delTicket = new QLineEdit(tab_3);
        input_delTicket->setObjectName(QString::fromUtf8("input_delTicket"));
        input_delTicket->setGeometry(QRect(320, 10, 113, 27));
        del_ticket_btn = new QPushButton(tab_3);
        del_ticket_btn->setObjectName(QString::fromUtf8("del_ticket_btn"));
        del_ticket_btn->setGeometry(QRect(480, 10, 98, 27));
        update_btn_2 = new QPushButton(tab_3);
        update_btn_2->setObjectName(QString::fromUtf8("update_btn_2"));
        update_btn_2->setGeometry(QRect(30, 10, 98, 27));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1064, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\223\201\350\267\257\345\224\256\347\245\250\347\263\273\347\273\237\342\200\224\342\200\224\345\256\242\346\210\267\347\253\257", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267ID\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\346\211\213\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261", 0, QApplication::UnicodeUTF8));
        show_btn->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        update_btn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        box_checi->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241", 0, QApplication::UnicodeUTF8));
        box_date->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        box_start->setText(QApplication::translate("MainWindow", "\345\217\221\347\253\231", 0, QApplication::UnicodeUTF8));
        check_query_btn->setText(QApplication::translate("MainWindow", "\346\237\245\347\245\250", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\350\275\246\347\245\250\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        btn_buy_ticket->setText(QApplication::translate("MainWindow", "\344\271\260\347\245\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = ticketsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\275\246\347\245\250\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = ticketsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = ticketsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\217\221\347\253\231", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = ticketsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\210\260\347\253\231", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = ticketsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\217\221\346\227\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = ticketsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\210\260\346\227\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = ticketsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\347\245\250\344\273\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = ticketsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = ticketsTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\344\275\231\347\245\250\351\207\217", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\237\245\347\245\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = myTicketTable->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\350\275\246\347\245\250\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = myTicketTable->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = myTicketTable->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\345\217\221\347\253\231", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = myTicketTable->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\345\210\260\347\253\231", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = myTicketTable->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\345\217\221\346\227\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = myTicketTable->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\345\210\260\346\227\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = myTicketTable->horizontalHeaderItem(6);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\347\245\250\344\273\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = myTicketTable->horizontalHeaderItem(7);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = myTicketTable->horizontalHeaderItem(8);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\351\200\200\347\245\250\357\274\232", 0, QApplication::UnicodeUTF8));
        del_ticket_btn->setText(QApplication::translate("MainWindow", "\351\200\200\347\245\250", 0, QApplication::UnicodeUTF8));
        update_btn_2->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\210\221\347\232\204\350\275\246\347\245\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
