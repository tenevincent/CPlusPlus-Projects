#ifndef CUSTOMERFORM_H
#define CUSTOMERFORM_H

#include <QWidget>

namespace Ui {
class CustomerForm;
}

class CustomerForm : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerForm(QWidget *parent = nullptr);
    ~CustomerForm();

private:
    Ui::CustomerForm *ui;
};

#endif // CUSTOMERFORM_H
