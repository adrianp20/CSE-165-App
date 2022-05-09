//#ifndef MAINWINDOW_H
//#define MAINWINDOW_H
#pragma once

#include <QMainWindow>
#include <QVector>
#include<QPushButton>
#include <QHBoxLayout>
#include <QHash>
#include <QCheckBox>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    QHash<QPushButton*, QHBoxLayout*> ButtonToLayoutMap;
//    int checkedselect = -1;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void appendItem();//need to create push
    void removeCompletedItems(); //need to creat pop
    void removeTimeStamp();
};
