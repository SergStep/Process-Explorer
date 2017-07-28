#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractListModel>
#include <QSortFilterProxyModel>
#include <QStringList>

#include "grpcclient.h"

class TableModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum Roles {
        ProcessName = Qt::UserRole + 1,
        ProcessId,
        Mem,
        UserId,
        CPU,
        CommandLine
    };

    struct ProcessData
    {
        QString processName;
        QString processId;
        QString mem;
        QString userId;
        QString cpu;
        QString commandLine;
    } ;

public:
    TableModel(QObject *parent = 0);

    virtual int rowCount(const QModelIndex &parent) const;
    virtual QVariant data(const QModelIndex &index, int role) const;
    virtual QHash<int, QByteArray> roleNames() const;

    Q_INVOKABLE void Add();
    Q_INVOKABLE void Clean();
    Q_INVOKABLE void Search(QString procMame);
    Q_INVOKABLE void sort(int column, Qt::SortOrder order = Qt::AscendingOrder);

private:
    std::vector<ProcessData> m_data;
    QSortFilterProxyModel m_qSortFilterProxyModel;
    ClientService m_clientService;
};

#endif // TABLEMODEL_H
