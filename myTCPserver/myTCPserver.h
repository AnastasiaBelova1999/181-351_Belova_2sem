#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = 0);

public slots:
    void slotNewConnection();
    void slotServerRead();
    void slotClientDisconnected();
    QByteArray QString_to_QByteArray(QString templ);
    QString QByteArray_to_QString(QByteArray templ);
    void Routing(QString Data,int descriptor);
    void Check_login(QString Data,int descriptor);
    void Check_register(QString Data,int descriptor);
    void Delete(QString Data,int descriptor);
    void Change(QString Data,int descriptor);
    void status(int descriptor);
    void status_pay(int descriptor);

private:
     QSqlDatabase db;
    QTcpServer *tcpServer;
    int server_status;
    QMap<int,QTcpSocket *> SClients;
};

#endif // MYTCPSERVER_H
