#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QApplication>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Add a separator here
    QWidget* empty = new QWidget();
    empty->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Preferred);
    ui->toolBar->insertWidget(ui->actionAbout,empty);


    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::quitApp()
{
    QApplication::quit();
}

void MainWindow::update()
{
    auto time = timer->remainingTime();
    qDebug() << "Remaining time is: " << time;
     statusBar()->showMessage("Remaining time " + QString::number(time) + " ..." );

}

void MainWindow::on_actionQuit_triggered()
{


    this->timer->start(1);



     QTimer::singleShot(15000,this,SLOT(quitApp()));
     statusBar()->showMessage("The app will be killed in 5 seconds");

}

void MainWindow::on_actionCopy_triggered()
{
    qDebug() << "Copy action triggered" ;
    ui->textEdit->copy();

}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionSave_triggered()
{
    // ui->textEdit->sa();
    qDebug() << "Save action triggered" ;
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this,"Message","This is a sample demo how the about dialog box should work...");
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}
