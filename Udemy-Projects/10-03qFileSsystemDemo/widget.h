#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileSystemModel>
#include <QModelIndex>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void updateSelectedDirectory(const QModelIndex &index);

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::Widget *ui;
    QFileSystemModel *directoryModel; // Model the directory structure
    QFileSystemModel *fileSystemModel;  // model the file
};
#endif // WIDGET_H
