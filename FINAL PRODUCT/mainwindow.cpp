#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVector>
#include <QString>
#include <QObject>
#include <QCheckBox>
#include <QListWidgetItem>
#include <QListWidget>
QVector<QCheckBox*> checkvec;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->AddNewBtn, &QPushButton::clicked,this, &MainWindow::appendItem);
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::appendItem(){
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*> (ui->AllNewTasksContents->layout()); //need to change centralwidget

    //TEXT
    QString ButtonText = ui->NewTaskLineEdit->text(); //maye need a return ?
    if(ButtonText==""){ //if empty dont do anyting
        return;
    }

    QPushButton* button = new QPushButton(ButtonText, ui->AllNewTasksContents);
    QHBoxLayout* TextLayout = new QHBoxLayout(ui->AllNewTasksContents);//layout of text,box
    TextLayout->addWidget(button);
    layout->insertLayout(0,TextLayout);
    ButtonToLayoutMap.insert(button, TextLayout); //button + checkboxes in layout
    QObject::connect(button, &QPushButton::clicked,this, &MainWindow::removeCompletedItems);

    //TIME
    QString TimeText = ui->dateTimeEdit->text();
    QPushButton* TimeButton = new QPushButton(TimeText, ui->AllNewTasksContents);
    QHBoxLayout* TimeLayout = new QHBoxLayout(ui->AllNewTasksContents);
    TimeLayout->addWidget(TimeButton);
    layout->insertLayout(0,TimeLayout);
    ButtonToLayoutMap.insert(TimeButton, TimeLayout); //button + checkboxes in layout

   QObject::connect(TimeButton, &QPushButton::clicked,this, &MainWindow::removeTimeStamp);

}


void MainWindow::removeCompletedItems(){ //removes only work when clicked in the list made
    QPushButton* button = qobject_cast<QPushButton*> (sender());
    QHBoxLayout* layout = ButtonToLayoutMap.take(button);

    while(layout->count() != 0){
        QLayoutItem* item = layout->takeAt(0);
        delete item->widget();
        delete item;
    }
    delete layout;
}
void MainWindow::removeTimeStamp(){
QPushButton* timebutton = qobject_cast<QPushButton*> (sender());
QHBoxLayout* timelayout = ButtonToLayoutMap.take(timebutton);

   while(timelayout->count() != 0){
        QLayoutItem* time = timelayout->takeAt(0);
        delete time->widget();
        delete time;
   }
   delete timelayout;
}
