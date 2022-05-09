#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class ToDoList;
}

class ToDoList : public QMainWindow
{
    Q_OBJECT

public:
    explicit ToDoList(QWidget *parent = nullptr);
    ~ToDoList();

private:
    Ui::ToDoList *ui;
};

#endif // LOGIN_H
