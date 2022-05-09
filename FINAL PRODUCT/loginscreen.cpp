#include "loginscreen.h"
#include "ui_loginscreen.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

loginScreen::loginScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginScreen)
{
    ui->setupUi(this);
}

loginScreen::~loginScreen()
{
    delete ui;
}



void loginScreen::on_loginButton_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();

    if (username == "CSE165" && password == "Project") {
        QMessageBox::information(this, "Login", "Correct Username and Password");
        this->hide();
        loginScreen log;
        log.setModal(true);
        accept();


    } else {
        QMessageBox::warning(this, "Login", "Incorrect Username and Password");
    }
}

