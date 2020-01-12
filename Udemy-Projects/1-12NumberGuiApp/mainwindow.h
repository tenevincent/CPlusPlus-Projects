#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonGuess_clicked();

    void on_pushButtonStartOver_clicked();

private:
    Ui::MainWindow *ui;
    int secretNumber;
    int guessNumber;
};
#endif // MAINWINDOW_H
