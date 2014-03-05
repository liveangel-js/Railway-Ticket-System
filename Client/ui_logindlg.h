/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created: Fri Mar 15 06:20:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

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

class Ui_loginDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *loginBtn;
    QPushButton *regBtn;

    void setupUi(QDialog *loginDlg)
    {
        if (loginDlg->objectName().isEmpty())
            loginDlg->setObjectName(QString::fromUtf8("loginDlg"));
        loginDlg->resize(572, 397);
        label = new QLabel(loginDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 130, 66, 17));
        label_2 = new QLabel(loginDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 200, 66, 17));
        userLineEdit = new QLineEdit(loginDlg);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setGeometry(QRect(230, 130, 113, 27));
        pwdLineEdit = new QLineEdit(loginDlg);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(230, 190, 113, 27));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        loginBtn = new QPushButton(loginDlg);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(130, 260, 98, 27));
        regBtn = new QPushButton(loginDlg);
        regBtn->setObjectName(QString::fromUtf8("regBtn"));
        regBtn->setGeometry(QRect(290, 260, 98, 27));

        retranslateUi(loginDlg);

        QMetaObject::connectSlotsByName(loginDlg);
    } // setupUi

    void retranslateUi(QDialog *loginDlg)
    {
        loginDlg->setWindowTitle(QApplication::translate("loginDlg", "\345\256\242\346\210\267\347\253\257\342\200\224\342\200\224\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("loginDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("loginDlg", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("loginDlg", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        regBtn->setText(QApplication::translate("loginDlg", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class loginDlg: public Ui_loginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
