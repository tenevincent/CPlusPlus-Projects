#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void addNewItem();

private slots:
    void on_pushButtonAddItem_clicked();

    void on_pushButtonDeleteItem_clicked();

    void on_pushButtonSelectedItems_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
