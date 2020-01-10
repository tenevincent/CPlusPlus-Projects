#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>
#include <QProgressBar>
#include <QLabel>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
      QProgressBar *statusBarProgress = new QProgressBar();
    QLabel *statusBarLabel = new QLabel();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    virtual void closeEvent(QCloseEvent* event) override;

private slots:
    void on_pushButton_clicked();

    void on_tabWidget_tabCloseRequested(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
