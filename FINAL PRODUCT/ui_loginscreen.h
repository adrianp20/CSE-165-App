/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginScreen
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *loginButton;

    void setupUi(QDialog *loginScreen)
    {
        if (loginScreen->objectName().isEmpty())
            loginScreen->setObjectName(QString::fromUtf8("loginScreen"));
        loginScreen->resize(712, 488);
        loginScreen->setStyleSheet(QString::fromUtf8("#loginScreen {\n"
"background: #EDEDED;\n"
"}"));
        groupBox = new QGroupBox(loginScreen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 70, 361, 311));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox {\n"
"background: #EDEDED;\n"
"\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 49, 16));
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"color: black;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 130, 61, 16));
        label_2->setStyleSheet(QString::fromUtf8("#label_2 {\n"
"color: black;\n"
"}"));
        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(30, 60, 113, 24));
        username->setStyleSheet(QString::fromUtf8("#username {\n"
"background: #C4C4C4;\n"
"}"));
        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(30, 150, 113, 24));
        password->setStyleSheet(QString::fromUtf8("#password {\n"
"background: #C4C4C4;\n"
"}"));
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(30, 200, 80, 24));
        loginButton->setStyleSheet(QString::fromUtf8("#loginButton{\n"
"width: 60px;\n"
"height: 60px;\n"
"border-radius: 10px;\n"
"border: 3px;\n"
"/*\n"
"border-color: rgb(255, 255, 255);\n"
"*/\n"
"border-style: outset;\n"
"\n"
"/*\n"
"background-color: #C4C4C4;\n"
"\n"
"background-color: rgba(255, 255, 255, 0);\n"
"*/\n"
"background-color: #C4C4C4;\n"
"color: black;\n"
"font: 15pt \"Verdana\";\n"
"}\n"
"\n"
"#loginButton::disabled {\n"
"background-color: rgb(170, 30, 48);\n"
"border-color: rgb(255, 242, 28);\n"
"color: rgb(255, 46, 48);\n"
"}\n"
"\n"
"#loginButton:hover {\n"
"background-color: green;\n"
"border-color: green;\n"
"color: white;\n"
"}\n"
"\n"
"#loginButton:pressed {\n"
"background-color: #aaaaaa;\n"
"}\n"
"\n"
"#loginButton:checked {\n"
"background-color: #1eacfa;\n"
"border-color: #16587d;\n"
"}\n"
""));

        retranslateUi(loginScreen);

        QMetaObject::connectSlotsByName(loginScreen);
    } // setupUi

    void retranslateUi(QDialog *loginScreen)
    {
        loginScreen->setWindowTitle(QCoreApplication::translate("loginScreen", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("loginScreen", "Welcome", nullptr));
        label->setText(QCoreApplication::translate("loginScreen", "User", nullptr));
        label_2->setText(QCoreApplication::translate("loginScreen", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("loginScreen", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginScreen: public Ui_loginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
