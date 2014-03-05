/********************************************************************************
** Form generated from reading UI file 'registerdlg.ui'
**
** Created: Fri Mar 15 06:20:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDLG_H
#define UI_REGISTERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registerDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *input_username;
    QLineEdit *input_password;
    QLineEdit *input_id;
    QLineEdit *input_phone;
    QLineEdit *input_phone_2;
    QPushButton *regBtn;
    QPushButton *backBtn;

    void setupUi(QDialog *registerDlg)
    {
        if (registerDlg->objectName().isEmpty())
            registerDlg->setObjectName(QString::fromUtf8("registerDlg"));
        registerDlg->resize(398, 382);
        label = new QLabel(registerDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 66, 17));
        label_2 = new QLabel(registerDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 66, 17));
        label_3 = new QLabel(registerDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 66, 17));
        label_4 = new QLabel(registerDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 210, 66, 17));
        label_5 = new QLabel(registerDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 270, 66, 17));
        input_username = new QLineEdit(registerDlg);
        input_username->setObjectName(QString::fromUtf8("input_username"));
        input_username->setGeometry(QRect(160, 50, 113, 27));
        input_password = new QLineEdit(registerDlg);
        input_password->setObjectName(QString::fromUtf8("input_password"));
        input_password->setGeometry(QRect(160, 100, 113, 27));
        input_id = new QLineEdit(registerDlg);
        input_id->setObjectName(QString::fromUtf8("input_id"));
        input_id->setGeometry(QRect(160, 150, 151, 27));
        input_phone = new QLineEdit(registerDlg);
        input_phone->setObjectName(QString::fromUtf8("input_phone"));
        input_phone->setGeometry(QRect(160, 200, 151, 27));
        input_phone_2 = new QLineEdit(registerDlg);
        input_phone_2->setObjectName(QString::fromUtf8("input_phone_2"));
        input_phone_2->setGeometry(QRect(160, 260, 191, 27));
        regBtn = new QPushButton(registerDlg);
        regBtn->setObjectName(QString::fromUtf8("regBtn"));
        regBtn->setGeometry(QRect(90, 310, 98, 27));
        backBtn = new QPushButton(registerDlg);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(230, 310, 98, 27));

        retranslateUi(registerDlg);
        QObject::connect(regBtn, SIGNAL(clicked()), registerDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(registerDlg);
    } // setupUi

    void retranslateUi(QDialog *registerDlg)
    {
        registerDlg->setWindowTitle(QApplication::translate("registerDlg", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("registerDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("registerDlg", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("registerDlg", "\350\272\253\344\273\275\350\257\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("registerDlg", "\346\211\213\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("registerDlg", "\351\202\256\347\256\261\357\274\232", 0, QApplication::UnicodeUTF8));
        regBtn->setText(QApplication::translate("registerDlg", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        backBtn->setText(QApplication::translate("registerDlg", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class registerDlg: public Ui_registerDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDLG_H
