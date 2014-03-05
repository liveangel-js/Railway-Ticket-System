/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Mar 15 06:15:49 2013
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
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
    QLineEdit *ticket_checi_input;
    QLineEdit *ticket_start_input;
    QLineEdit *ticket_finish_input;
    QLineEdit *ticket_start_time_input;
    QLineEdit *ticket_end_time_input;
    QLineEdit *ticket_volume_input;
    QPushButton *btn_addTicket;
    QPushButton *btn_changeTicket;
    QPushButton *btn_queryTicket;
    QLabel *label_7;
    QLineEdit *ticket_id_output;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *ticket_price_input;
    QLineEdit *ticket_date_input;
    QPushButton *update_ticket_btn;
    QTableWidget *ticketsTable;
    QWidget *tab_2;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *old_place;
    QLineEdit *new_place;
    QPushButton *update_place_btn;
    QLabel *label_12;
    QTableWidget *place_table;
    QPushButton *update_table_btn;
    QWidget *tab_3;
    QLabel *label_13;
    QLineEdit *checi_checi;
    QPushButton *checi_query_btn;
    QLabel *label_14;
    QLineEdit *checi_from;
    QLabel *label_15;
    QLineEdit *checi_to;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *checi_starttime;
    QLineEdit *checi_finishtime;
    QPushButton *checi_update_btn;
    QPushButton *checi_table_update;
    QTableWidget *checi_table;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1053, 555);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 1011, 441));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 51, 17));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 41, 17));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 40, 51, 17));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 10, 71, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 40, 91, 17));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(730, 10, 51, 21));
        ticket_checi_input = new QLineEdit(tab);
        ticket_checi_input->setObjectName(QString::fromUtf8("ticket_checi_input"));
        ticket_checi_input->setGeometry(QRect(230, 0, 113, 27));
        ticket_start_input = new QLineEdit(tab);
        ticket_start_input->setObjectName(QString::fromUtf8("ticket_start_input"));
        ticket_start_input->setGeometry(QRect(50, 30, 113, 27));
        ticket_finish_input = new QLineEdit(tab);
        ticket_finish_input->setObjectName(QString::fromUtf8("ticket_finish_input"));
        ticket_finish_input->setGeometry(QRect(230, 30, 113, 27));
        ticket_start_time_input = new QLineEdit(tab);
        ticket_start_time_input->setObjectName(QString::fromUtf8("ticket_start_time_input"));
        ticket_start_time_input->setGeometry(QRect(440, 0, 113, 27));
        ticket_end_time_input = new QLineEdit(tab);
        ticket_end_time_input->setObjectName(QString::fromUtf8("ticket_end_time_input"));
        ticket_end_time_input->setGeometry(QRect(440, 30, 113, 27));
        ticket_volume_input = new QLineEdit(tab);
        ticket_volume_input->setObjectName(QString::fromUtf8("ticket_volume_input"));
        ticket_volume_input->setGeometry(QRect(800, 10, 113, 27));
        btn_addTicket = new QPushButton(tab);
        btn_addTicket->setObjectName(QString::fromUtf8("btn_addTicket"));
        btn_addTicket->setGeometry(QRect(50, 70, 98, 27));
        btn_changeTicket = new QPushButton(tab);
        btn_changeTicket->setObjectName(QString::fromUtf8("btn_changeTicket"));
        btn_changeTicket->setGeometry(QRect(440, 70, 98, 27));
        btn_queryTicket = new QPushButton(tab);
        btn_queryTicket->setObjectName(QString::fromUtf8("btn_queryTicket"));
        btn_queryTicket->setGeometry(QRect(240, 70, 98, 27));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 41, 17));
        ticket_id_output = new QLineEdit(tab);
        ticket_id_output->setObjectName(QString::fromUtf8("ticket_id_output"));
        ticket_id_output->setGeometry(QRect(50, 0, 113, 27));
        ticket_id_output->setReadOnly(false);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 10, 51, 17));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(570, 40, 41, 17));
        ticket_price_input = new QLineEdit(tab);
        ticket_price_input->setObjectName(QString::fromUtf8("ticket_price_input"));
        ticket_price_input->setGeometry(QRect(620, 0, 101, 27));
        ticket_date_input = new QLineEdit(tab);
        ticket_date_input->setObjectName(QString::fromUtf8("ticket_date_input"));
        ticket_date_input->setGeometry(QRect(620, 30, 101, 27));
        update_ticket_btn = new QPushButton(tab);
        update_ticket_btn->setObjectName(QString::fromUtf8("update_ticket_btn"));
        update_ticket_btn->setGeometry(QRect(620, 70, 98, 27));
        ticketsTable = new QTableWidget(tab);
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
        ticketsTable->setObjectName(QString::fromUtf8("ticketsTable"));
        ticketsTable->setGeometry(QRect(20, 110, 961, 271));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 50, 66, 17));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 90, 66, 17));
        old_place = new QLineEdit(tab_2);
        old_place->setObjectName(QString::fromUtf8("old_place"));
        old_place->setGeometry(QRect(130, 40, 113, 27));
        new_place = new QLineEdit(tab_2);
        new_place->setObjectName(QString::fromUtf8("new_place"));
        new_place->setGeometry(QRect(130, 80, 113, 27));
        update_place_btn = new QPushButton(tab_2);
        update_place_btn->setObjectName(QString::fromUtf8("update_place_btn"));
        update_place_btn->setGeometry(QRect(290, 60, 98, 27));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 130, 66, 17));
        place_table = new QTableWidget(tab_2);
        if (place_table->columnCount() < 1)
            place_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        place_table->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        place_table->setObjectName(QString::fromUtf8("place_table"));
        place_table->setGeometry(QRect(50, 170, 241, 192));
        update_table_btn = new QPushButton(tab_2);
        update_table_btn->setObjectName(QString::fromUtf8("update_table_btn"));
        update_table_btn->setGeometry(QRect(290, 130, 98, 27));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 40, 66, 17));
        checi_checi = new QLineEdit(tab_3);
        checi_checi->setObjectName(QString::fromUtf8("checi_checi"));
        checi_checi->setGeometry(QRect(140, 30, 113, 27));
        checi_query_btn = new QPushButton(tab_3);
        checi_query_btn->setObjectName(QString::fromUtf8("checi_query_btn"));
        checi_query_btn->setGeometry(QRect(310, 30, 98, 27));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, 80, 66, 17));
        checi_from = new QLineEdit(tab_3);
        checi_from->setObjectName(QString::fromUtf8("checi_from"));
        checi_from->setGeometry(QRect(140, 80, 113, 27));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(270, 83, 66, 17));
        checi_to = new QLineEdit(tab_3);
        checi_to->setObjectName(QString::fromUtf8("checi_to"));
        checi_to->setGeometry(QRect(350, 80, 113, 27));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(503, 83, 66, 17));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(689, 84, 66, 17));
        checi_starttime = new QLineEdit(tab_3);
        checi_starttime->setObjectName(QString::fromUtf8("checi_starttime"));
        checi_starttime->setGeometry(QRect(550, 80, 113, 27));
        checi_finishtime = new QLineEdit(tab_3);
        checi_finishtime->setObjectName(QString::fromUtf8("checi_finishtime"));
        checi_finishtime->setGeometry(QRect(740, 80, 113, 27));
        checi_update_btn = new QPushButton(tab_3);
        checi_update_btn->setObjectName(QString::fromUtf8("checi_update_btn"));
        checi_update_btn->setGeometry(QRect(880, 80, 98, 27));
        checi_table_update = new QPushButton(tab_3);
        checi_table_update->setObjectName(QString::fromUtf8("checi_table_update"));
        checi_table_update->setGeometry(QRect(510, 30, 98, 27));
        checi_table = new QTableWidget(tab_3);
        if (checi_table->columnCount() < 5)
            checi_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        checi_table->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        checi_table->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        checi_table->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        checi_table->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        checi_table->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        checi_table->setObjectName(QString::fromUtf8("checi_table"));
        checi_table->setGeometry(QRect(170, 140, 541, 211));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1053, 28));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\223\201\350\267\257\345\224\256\347\245\250\347\263\273\347\273\237\342\200\224\342\200\224\342\200\224\342\200\224\346\234\215\345\212\241\345\231\250\343\200\201\347\256\241\347\220\206\345\221\230\347\253\257", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>11</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\345\247\213\345\217\221\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\345\217\221\350\275\246\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\345\210\260\347\253\231\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\347\245\250\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        btn_addTicket->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        btn_changeTicket->setText(QApplication::translate("MainWindow", "\345\217\230\346\233\264", 0, QApplication::UnicodeUTF8));
        btn_queryTicket->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\350\275\246\347\245\250\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\344\273\267\346\240\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237\357\274\232", 0, QApplication::UnicodeUTF8));
        update_ticket_btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\275\246\347\245\250\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\345\216\237\350\275\246\347\253\231\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\346\226\260\350\275\246\347\253\231\357\274\232", 0, QApplication::UnicodeUTF8));
        update_place_btn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\350\275\246\347\253\231\346\200\273\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = place_table->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\350\275\246\347\253\231\345\220\215", 0, QApplication::UnicodeUTF8));
        update_table_btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\350\275\246\347\253\231\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241\357\274\232", 0, QApplication::UnicodeUTF8));
        checi_query_btn->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\345\217\221\347\253\231", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\345\210\260\347\253\231", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "\345\217\221\346\227\266", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "\345\210\260\346\227\266", 0, QApplication::UnicodeUTF8));
        checi_update_btn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        checi_table_update->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\350\241\250\346\240\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = checi_table->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = checi_table->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\345\217\221\347\253\231", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = checi_table->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\345\210\260\347\253\231", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = checi_table->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\345\217\221\346\227\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = checi_table->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\345\210\260\346\227\266", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\275\246\346\254\241\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
