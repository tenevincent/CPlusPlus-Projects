#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QList>
#include <QColor>
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void handle_font_color_selection(QPushButton &button, int index);

    void save_color(QString key, QColor color);

    QColor load_color(QString key);

    void setLoadedColor(QString key, int index,QPushButton *button);

    void load_button_colors();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonLoadColors_clicked();

    void on_pushButtonSaveColors_clicked();

private:
    Ui::Widget *ui;
    QList<QColor> listColors;
};
#endif // WIDGET_H
