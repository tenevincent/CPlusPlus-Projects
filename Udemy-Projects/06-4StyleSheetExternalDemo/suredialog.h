#ifndef SUREDIALOG_H
#define SUREDIALOG_H

#include <QDialog>

namespace Ui {
class SureDialog;
}

class SureDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SureDialog(QWidget *parent = nullptr);
    ~SureDialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::SureDialog *ui;
};

#endif // SUREDIALOG_H
