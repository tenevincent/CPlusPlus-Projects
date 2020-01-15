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

    void handle_open_file();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonOpenFile_clicked();

    void on_pushButtonOpenFileMultiple_clicked();

    void on_pushButtonSaveFile_clicked();

    void on_pushButtonFontDialog_clicked();

    void on_pushButtonTextColor_clicked();

    void on_pushButtonBackgroundColor_clicked();

    void on_pushButtonFontColor_clicked();

    void on_pushButtonInputDialog_clicked();

private:
    Ui::Widget *ui;
    QString readFileContent(QString &fileName);
    void handle_read_file_Qt();
     void handle_read_file_CppStl();

};
#endif // WIDGET_H
