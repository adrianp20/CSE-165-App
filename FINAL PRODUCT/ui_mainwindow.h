/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *ContentFrame;
    QVBoxLayout *verticalLayout_2;
    QFrame *AddToDoList;
    QHBoxLayout *horizontalLayout_2;
    QFrame *AddLeft;
    QVBoxLayout *verticalLayout_3;
    QFrame *TitleBarFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *NewTaskText;
    QLineEdit *NewTaskLineEdit;
    QLabel *NewDateText;
    QDateTimeEdit *dateTimeEdit;
    QFrame *AddRight;
    QVBoxLayout *verticalLayout_4;
    QPushButton *AddNewBtn;
    QScrollArea *AllNewTasks;
    QWidget *AllNewTasksContents;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"color: rgb(112, 112, 112);\n"
"}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ContentFrame = new QFrame(centralwidget);
        ContentFrame->setObjectName(QString::fromUtf8("ContentFrame"));
        ContentFrame->setStyleSheet(QString::fromUtf8("#ContentFrame{\n"
"\n"
"width: 546px;\n"
"height: 894px;\n"
"left: -86px;\n"
"top: -52px;\n"
"background: #EDEDED;\n"
"/*\n"
"background:   qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(255, 189, 124), stop:1 rrgb(0, 0, 0))\n"
"*/\n"
"}"));
        ContentFrame->setFrameShape(QFrame::StyledPanel);
        ContentFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(ContentFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AddToDoList = new QFrame(ContentFrame);
        AddToDoList->setObjectName(QString::fromUtf8("AddToDoList"));
        AddToDoList->setStyleSheet(QString::fromUtf8("#ToDoAppsClass #AddToDoList {\n"
"border: 0;\n"
"background-color: 1px solid qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #1eacfa, stop: 0.5 #71889c, stop: 1.0 #1eacfa);;\n"
"\n"
"}"));
        AddToDoList->setFrameShape(QFrame::StyledPanel);
        AddToDoList->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(AddToDoList);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AddLeft = new QFrame(AddToDoList);
        AddLeft->setObjectName(QString::fromUtf8("AddLeft"));
        AddLeft->setStyleSheet(QString::fromUtf8("#AddLeft {\n"
"border: 0;\n"
"}"));
        AddLeft->setFrameShape(QFrame::StyledPanel);
        AddLeft->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(AddLeft);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        TitleBarFrame = new QFrame(AddLeft);
        TitleBarFrame->setObjectName(QString::fromUtf8("TitleBarFrame"));
        TitleBarFrame->setStyleSheet(QString::fromUtf8("#TitleBarFrame {\n"
"border: 0;\n"
"/*\n"
"background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(255, 189, 124), stop:1 rrgb(0, 0, 0));\n"
"*/\n"
"background: #EDEDED;\n"
"border-radius: 10px;\n"
"\n"
"\n"
"}\n"
""));
        TitleBarFrame->setFrameShape(QFrame::StyledPanel);
        TitleBarFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(TitleBarFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backBtn = new QPushButton(TitleBarFrame);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setStyleSheet(QString::fromUtf8("#backBtn{\n"
"width: 30px;\n"
"height: 30px;\n"
"border-radius: 10px;\n"
"border: 3px;\n"
"\n"
"\n"
"border-style: outset;\n"
"\n"
"background-color: #C4C4C4;\n"
"\n"
"color: black;\n"
"font: 15pt \"Verdana\";\n"
"}\n"
"\n"
"#backBtn::disabled {\n"
"background-color: #aaaaaa;\n"
"border-color: #aaaaaa;\n"
"color: #aaaaaa;\n"
"}\n"
"\n"
"#backBtn:hover {\n"
"background-color: blue;\n"
"border-color: blue;\n"
"color: white;\n"
"}\n"
"\n"
"#backBtn:pressed {\n"
"background-color: #aaaaaa;\n"
"}\n"
"\n"
"#backBtn:checked {\n"
"background-color: #1eacfa;\n"
"border-color: #16587d;\n"
"}\n"
""));

        horizontalLayout->addWidget(backBtn);

        horizontalSpacer = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(TitleBarFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"position: absolute;\n"
"width: 330px;\n"
"height: 121px;\n"
"left: 30px;\n"
"top: 143px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 700;\n"
"font-size: 30px;\n"
"line-height: 140%;\n"
"/* or 45px */\n"
"\n"
"\n"
"color: #000000;\n"
"}"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(307, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(TitleBarFrame);

        NewTaskText = new QLabel(AddLeft);
        NewTaskText->setObjectName(QString::fromUtf8("NewTaskText"));
        NewTaskText->setStyleSheet(QString::fromUtf8("#NewTaskText {\n"
"\n"
"color: black;\n"
"border: 1px;\n"
"border-radius: 20px;\n"
"border-color: white;\n"
"}"));

        verticalLayout_3->addWidget(NewTaskText);

        NewTaskLineEdit = new QLineEdit(AddLeft);
        NewTaskLineEdit->setObjectName(QString::fromUtf8("NewTaskLineEdit"));
        NewTaskLineEdit->setStyleSheet(QString::fromUtf8("#NewTaskLineEdit {\n"
"/*\n"
"background: #C4C4C4;\n"
"*/\n"
"background: #C4C4C4;\n"
"color: black;\n"
"border-color: black;\n"
"border-top: 5px;\n"
"border-botom: 5px;\n"
"\n"
"font-family: \"Inter\";\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 14px;\n"
"}"));

        verticalLayout_3->addWidget(NewTaskLineEdit);

        NewDateText = new QLabel(AddLeft);
        NewDateText->setObjectName(QString::fromUtf8("NewDateText"));
        NewDateText->setStyleSheet(QString::fromUtf8("#NewDateText {\n"
"color: black;\n"
"}"));

        verticalLayout_3->addWidget(NewDateText);

        dateTimeEdit = new QDateTimeEdit(AddLeft);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("#dateTimeEdit {\n"
"/*\n"
"background:   qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(255, 189, 124), stop:1 rrgb(0, 0, 0));\n"
"*/\n"
"background: #C4C4C4;\n"
"color: black;\n"
"font: 15pt;\n"
"\n"
"border-color: black;\n"
"}\n"
"\n"
""));

        verticalLayout_3->addWidget(dateTimeEdit);


        horizontalLayout_2->addWidget(AddLeft);

        AddRight = new QFrame(AddToDoList);
        AddRight->setObjectName(QString::fromUtf8("AddRight"));
        AddRight->setStyleSheet(QString::fromUtf8("#AddRight {\n"
"border: 0;\n"
"}"));
        AddRight->setFrameShape(QFrame::StyledPanel);
        AddRight->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(AddRight);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        AddNewBtn = new QPushButton(AddRight);
        AddNewBtn->setObjectName(QString::fromUtf8("AddNewBtn"));
        AddNewBtn->setStyleSheet(QString::fromUtf8("#AddNewBtn{\n"
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
"font: 20pt \"Verdana\";\n"
"}\n"
"\n"
"#AddNewBtn::disabled {\n"
"background-color: rgb(170, 30, 48);\n"
"border-color: rgb(255, 242, 28);\n"
"color: rgb(255, 46, 48);\n"
"}\n"
"\n"
"#AddNewBtn:hover {\n"
"background-color: green;\n"
"border-color: green;\n"
"color: white;\n"
"}\n"
"\n"
"#AddNewBtn:pressed {\n"
"background-color: #aaaaaa;\n"
"}\n"
"\n"
"#AddNewBtn:checked {\n"
"background-color: #1eacfa;\n"
"border-color: #16587d;\n"
"}\n"
""));

        verticalLayout_4->addWidget(AddNewBtn);


        horizontalLayout_2->addWidget(AddRight);


        verticalLayout_2->addWidget(AddToDoList);

        AllNewTasks = new QScrollArea(ContentFrame);
        AllNewTasks->setObjectName(QString::fromUtf8("AllNewTasks"));
        AllNewTasks->setStyleSheet(QString::fromUtf8("#AllNewTasks {\n"
"border: 0;\n"
"}"));
        AllNewTasks->setWidgetResizable(true);
        AllNewTasksContents = new QWidget();
        AllNewTasksContents->setObjectName(QString::fromUtf8("AllNewTasksContents"));
        AllNewTasksContents->setGeometry(QRect(0, 0, 762, 340));
        verticalLayout_5 = new QVBoxLayout(AllNewTasksContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 319, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        AllNewTasks->setWidget(AllNewTasksContents);

        verticalLayout_2->addWidget(AllNewTasks);


        verticalLayout->addWidget(ContentFrame);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        backBtn->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "To Do List", nullptr));
        NewTaskText->setText(QCoreApplication::translate("MainWindow", "Add New Task", nullptr));
        NewDateText->setText(QCoreApplication::translate("MainWindow", "Date Created", nullptr));
        AddNewBtn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
