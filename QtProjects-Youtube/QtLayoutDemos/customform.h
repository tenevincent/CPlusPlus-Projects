#ifndef CUSTOMFORM_H
#define CUSTOMFORM_H

#include <QWidget>

namespace Ui {
class CustomForm;
}

class CustomForm : public QWidget
{
    Q_OBJECT

public:
    explicit CustomForm(QWidget *parent = nullptr);
    ~CustomForm();

private:
    Ui::CustomForm *ui;
};

#endif // CUSTOMFORM_H
