#ifndef CUSTOMTABLEMODEL_H
#define CUSTOMTABLEMODEL_H

#include <QAbstractTableModel>
#include <QTimer>
#include <QObject>

class CustomTableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    CustomTableModel(QObject * parent);

     int rowCount(const QModelIndex &parent) const override;
     int columnCount(const QModelIndex &parent) const override;
     QVariant data(const QModelIndex &index, int role) const override;//Controls the data that is shown in each cell
     QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

private:
    QTimer * timer;
};

#endif // CUSTOMTABLEMODEL_H
