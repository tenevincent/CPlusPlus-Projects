#ifndef FILEWATCHER_H
#define FILEWATCHER_H


#include <QObject>
#include <QDebug>
#include <QDir>
#include <QFileSystemWatcher>

class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QObject *parent = nullptr);

signals:

public slots:
    void fileChanged(const QString &path);
    void directoryChanged(const QString &path);

private:
    QFileSystemWatcher fsw;
};
#endif // FILEWATCHER_H
