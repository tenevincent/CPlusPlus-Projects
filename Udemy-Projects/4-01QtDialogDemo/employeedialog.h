#ifndef EMPLOYEEDIALOG_H
#define EMPLOYEEDIALOG_H

#include <QDialog>

namespace Ui {
class EmployeeDialog;
}

class EmployeeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeDialog(QWidget *parent = nullptr);
    ~EmployeeDialog();

public:

    QString getFavoriteOs() const;

    QString getPosition() const;


private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::EmployeeDialog *ui;

private:
    QString position;
    QString favoriteOs;


};

#endif // EMPLOYEEDIALOG_H
