#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDebug>


class MainWindow : public QMainWindow
{
    Q_OBJECT

     QPushButton *btnHello = new QPushButton("Hello this is the button fff....................", this);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
