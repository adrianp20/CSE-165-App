#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H
#include "mainwindow.h"
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class loginScreen;
}

class loginScreen : public QDialog
{
    Q_OBJECT

public:
    explicit loginScreen(QWidget *parent = nullptr);
    ~loginScreen();

private slots:
    //void on_pushButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::loginScreen *ui;


};

#endif // LOGINSCREEN_H
