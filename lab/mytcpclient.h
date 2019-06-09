#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QString>

namespace Ui{
class MyTcpClient : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpClient(QWidget *parent = nullptr);
    ~MyTcpClient();

public slots:
    void slotConnect();
    void slotClientSend();
    void slotDisconnect();

private:
    Ui::MyTcpClient *ui;
    QTcpSocket *ClientSocket;

    void send_to_server(QString message);//в private, тк только для сервера
    //void send_to_client(const int size, char **res, QTcpSocket* clientSocket);
};



#endif // MYTCPCLIENT_H
}
