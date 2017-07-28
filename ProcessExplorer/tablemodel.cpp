#include "tablemodel.h"
#include "requests.grpc.pb.h"

#include <stdlib.h>

TableModel::TableModel(QObject *parent)
    : QAbstractListModel(parent)
    , m_qSortFilterProxyModel(this)
    , m_clientService(grpc::CreateChannel("unix:/home/serg/ProcessExplorer/bin/Debug/grpc.sock"
                                         , grpc::InsecureChannelCredentials()))
{
}

int TableModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid()) {
        return 0;
    }

    return m_data.size();
}

QVariant TableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid()) {
        return QVariant();
    }

    switch (role) {
    case ProcessName:
        return m_data.at(index.row()).processName;
    case ProcessId:
        return m_data.at(index.row()).processId;
    case Mem:
        return m_data.at(index.row()).mem;
    case UserId:
        return m_data.at(index.row()).userId;
    case CPU:
        return m_data.at(index.row()).cpu;
    case CommandLine:
        return m_data.at(index.row()).commandLine;
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> TableModel::roleNames() const
{
    QHash<int, QByteArray> roles = QAbstractListModel::roleNames();
    roles[ProcessName] = "processName";
    roles[ProcessId] = "processId";
    roles[Mem] = "mem";
    roles[UserId] = "userId";
    roles[CPU] = "cpu";
    roles[CommandLine] = "commandLine";

    return roles;
}

void TableModel::Add()
{
    GeneratedRpc::ProcessesData processesData = m_clientService.GetRunningProcesses();

    uint32_t size = processesData.processes_size();

    for(uint32_t index = 0; index < size ; ++index)
    {
        GeneratedRpc::ProcessData processData = processesData.processes(index);
        ProcessData data({
                             {processData.processname().c_str()},
                             {processData.processid().c_str()},
                             {processData.mem().c_str()},
                             {processData.userid().c_str()},
                             {processData.cpu().c_str()},
                             {processData.commandline().c_str()}
                         });

        beginInsertRows(QModelIndex(), m_data.size(), m_data.size());
        m_data.push_back(data);
        endInsertRows();
    }
}

void TableModel::Search(QString procMame)
{
    Clean();

    std::string procMameStd = procMame.toStdString();
    GeneratedRpc::ProcessesData processesData = m_clientService.GetRunningProcesses();

    uint32_t size = processesData.processes_size();

    for(uint32_t index = 0; index < size ; ++index)
    {
        GeneratedRpc::ProcessData processData = processesData.processes(index);
        if(processData.processname().find(procMameStd))
        {
            continue;
        }

        ProcessData data({
                             {processData.processname().c_str()},
                             {processData.processid().c_str()},
                             {processData.mem().c_str()},
                             {processData.userid().c_str()},
                             {processData.cpu().c_str()},
                             {processData.commandline().c_str()}
                         });

        beginInsertRows(QModelIndex(), m_data.size(), m_data.size());
        m_data.push_back(data);
        endInsertRows();
    }
}

void TableModel::sort(int column, Qt::SortOrder order)
{
    std::vector<ProcessData> data = m_data;
    Clean();
    std::sort(data.begin(), data.end(), [&](ProcessData a, ProcessData b) {
            switch(column)
            {
            case 0:
                return a.processName.toLower() < b.processName.toLower();
            case 1:
                return atoi(a.processId.toStdString().c_str()) < atoi(b.processId.toStdString().c_str());
            case 2:
                return a.mem < b.mem;
            case 3:
                return a.userId < b.userId;
            case 4:
                return a.cpu < b.cpu;
            case 5:
                return a.commandLine < b.commandLine;
            }
         });

    for(auto& row : data)
    {
        beginInsertRows(QModelIndex(), m_data.size(), m_data.size());
        m_data.push_back(row);
        endInsertRows();
    }
}

void TableModel::Clean()
{
    beginResetModel();
    try
    {
        m_data.clear();
    }
    catch(const std::exception& ex)
    {
        qDebug(ex.what());
    }
    endResetModel();
}
