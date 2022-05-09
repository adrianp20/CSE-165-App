#include "mainwindow.h"
#include "loginscreen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    loginScreen log;
    if(log.exec() == QDialog::Accepted) {
        w.show();
        return a.exec();
    }
}
