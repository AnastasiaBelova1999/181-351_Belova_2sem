#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>
#include <QTextStream>
#include "Crypter.h"
#include <QVariant>
#include <QDebug>
#include "crypto.h"

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)//конструктор
{
    tcpServer = new QTcpServer(this);
       connect(tcpServer, SIGNAL(newConnection()), this, SLOT(slotNewConnection()));
       if (!tcpServer->listen(QHostAddress::Any, 6000) && server_status==0) {
           qDebug() <<  QObject::tr("Unable to start the server: %1.").arg(tcpServer->errorString());
       } else {
           server_status=1;
           qDebug() << QString::fromUtf8("Server run!");
       }
       db = QSqlDatabase::addDatabase("QSQLITE");//создание бд
       db.setDatabaseName("Test");
       if(!db.open())
           qDebug()<<db.lastError().text();
       QSqlQuery query(db);
       qDebug()<< query.exec("CREATE TABLE User("//создали табличку User
                  "login VARCHAR(40) NOT NULL, "
                  "password VARCHAR(40) NOT NULL,"
                  "product VARCHAR(40) NOT NULL,"
                  "type VARCHAR(1) NOT NULL,"
                   "pos VARCHAR(1) ,"
                   "pay VARCHAR(1) "
                  ")");
//0-user 1-admin
       query.prepare("INSERT INTO User(login, password,product,type,pay) "
                         "VALUES (:login, :password,:product,:type,:pay)");

       query.bindValue(":password","c58cda49f00748a3bc0fcfa511d516cb");
       query.bindValue(":login","admin");
       query.bindValue(":product","i am gnom");
       query.bindValue(":type","1");
       query.bindValue(":pay","0");

       qDebug()<< query.exec();// выполнить запрос
      qDebug()<<  query.exec("SELECT * FROM User WHERE login ='admin'");
      if(query.next()) {
           QString name = query.value(0).toString();
           qDebug()<<name;
      }
      else {
          qDebug()<<"error";
      }
       //qDebug()<<  query.exec("DROP TABLE User");
}

void MyTcpServer::slotNewConnection()
{
    if(server_status==1){
        qDebug() << QString::fromUtf8("new client");
        QTcpSocket* clientSocket=tcpServer->nextPendingConnection();
        int idusersocs=clientSocket->socketDescriptor();
        SClients[idusersocs]=clientSocket;
        connect(SClients[idusersocs],SIGNAL(readyRead()),this, SLOT(slotServerRead()));
        connect(SClients[idusersocs],SIGNAL(disconected()),this, SLOT(slotClientDisconnected()));
    }
}

void MyTcpServer::slotServerRead()//сервер принимает от клиента
{
 QTcpSocket* clientSocket = (QTcpSocket*)sender();
 int idusersocs=clientSocket->socketDescriptor();
 QTextStream os(clientSocket);
 crypto aes;
 QByteArray buf;
 buf =clientSocket->readAll();
 qDebug()<< buf;
 QString Data =aes.decrypt(buf);
 qDebug()<<Data;
 Routing(Data,idusersocs);
}

void MyTcpServer::slotClientDisconnected()
{

}

QByteArray MyTcpServer::QString_to_QByteArray(QString templ)//перевод Qstring в QByteArray
{
    std::string String_buffer=templ.toStdString();
    QByteArray QByteArray_buffer;
    const char *cstr_buffer = String_buffer.c_str();
    QByteArray_buffer.append(cstr_buffer);
    return QByteArray_buffer;
}

QString MyTcpServer::QByteArray_to_QString(QByteArray templ)//перевод QByteArray в Qstring
{
    const char *cstr_buffer=templ.data();
    QString str = QString::fromUtf8(cstr_buffer);
    return str;
}
void MyTcpServer::Check_register(QString Data, int descriptor)
{
    int separator = Data.toStdString().find('$');
    QString login = QString::fromStdString(Data.toStdString().substr(0,separator));

    Data.remove(0,login.length()+1);
    int separator1 = Data.toStdString().find_last_of('$');
    QString product = QString::fromStdString(Data.toStdString().substr(separator1+1,Data.length()));
    QString password = QString::fromStdString(Data.toStdString().substr(0,separator1));
    qDebug()<< login << password <<product; //<<login.length()+2<< Data.length()-number.length();
    QSqlQuery query(db);
    qDebug()<<  query.exec("SELECT * FROM User WHERE login ='"+login+"\'");
          if(query.next()) {
                qDebug()<<"no reg";
          }
          else {
              query.prepare("INSERT INTO User(login, password,product,type,pos,pay) "
                                "VALUES (:login, :password,:product,:type,:pos,:pay)");

              query.bindValue(":password",password);
              query.bindValue(":login",login);
              query.bindValue(":product",product);
              query.bindValue(":type","0");
              query.bindValue(":pos","0");
              query.bindValue(":pay","0");
                if(query.exec()){

                };// выполнить запрос
              qDebug()<<query.lastError();
          }


}

void MyTcpServer::Delete(QString Data, int descriptor)
{
    QSqlQuery query(db);
    QString buffer = "DELETE FROM User Where login =";
    buffer+="\""+Data+"\"";
    query.exec(buffer);

}

void MyTcpServer::Routing(QString Data,int descriptor)
{
    if(Data[0]=='1' && Data[1]=='0'){
        Data.remove(0,3);
        Check_login(Data,descriptor);
    }
    if(Data[0]=='2' && Data[1]=='0'){
        Data.remove(0,3);
        Check_register(Data,descriptor);
    }
    if(Data[0]=='3' && Data[1]=='0'){
        Data.remove(0,3);
        Delete(Data,descriptor);
    }
    if(Data[0]=='4' && Data[1]=='0'){
        Data.remove(0,3);
        Change(Data,descriptor);
    }
    if(Data[0]=='5' && Data[1]=='0'){
        Data.remove(0,3);
        status(descriptor);
    }
    if(Data[0]=='6' && Data[1]=='0'){
        Data.remove(0,3);
        status_pay(descriptor);
    }
}
void MyTcpServer::Change(QString Data, int descriptor)
{
  QSqlQuery query(db);
  QByteArray request = "SELECT * FROM User WHERE login=\'";
      request.append(Data);
      request.append("\'");
query.exec(request);
if(query.next()) {
     QString name = query.value(4).toString();
     qDebug()<<name;
     if(name == "1"){
         request ="UPDATE User SET pos = 0 WHERE login = \'";
         request.append(Data);
         request.append("\'");
         qDebug()<<query.exec(request);
          qDebug()<<request;
     }
     else {
         request ="UPDATE User SET pos = 1 WHERE login = \'";
         request.append(Data);
         request.append("\'");
         qDebug()<<query.exec(request);
          qDebug()<<request;
     }
}
else {
    qDebug()<<request;
}
}

void MyTcpServer::status(int descriptor)
{
    QSqlQuery query(db);
    QString buf="50$";
    QByteArray request = "SELECT pos FROM User WHERE type=\'0\'";
    qDebug()<<query.exec(request);
    while (query.next()) {
         buf+=query.value(0).toString();
    }
    SClients[descriptor]->write(QString_to_QByteArray(buf));
}

void MyTcpServer::status_pay(int descriptor)
{
    QSqlQuery query(db);
    QString buf="60$";
    QByteArray request = "SELECT product FROM User WHERE type=\'0\'";
    qDebug()<<query.exec(request);
    while (query.next()) {
         buf+=query.value(0).toString()+"$";
    }
    SClients[descriptor]->write(QString_to_QByteArray(buf));
}

void MyTcpServer::Check_login(QString Data,int descriptor)
{
int separator = Data.toStdString().find('$');
QString login = QString::fromStdString(Data.toStdString().substr(0,separator));
QString password = QString::fromStdString(Data.toStdString().substr(separator+1,Data.length()));
qDebug()<<login <<"+"<<password;
 QSqlQuery query(db);
 QByteArray request = "SELECT * FROM User WHERE Login=\'";
     request.append(login);
     request.append("\' AND password=\'");
     request.append(password);
     request.append("\'");;
     qDebug()<<request;
     qDebug()<<query.exec(request);
  if(query.next()) {
      QString a = query.value(3).toString();
      if(a=='1'){
          QString buf="11a$";
          qDebug()<<  query.exec("SELECT * FROM User WHERE type ='0'");
          while(query.next()) {
                buf += query.value(0).toString()+"$";
               qDebug()<<buf;
          }
          SClients[descriptor]->write(QString_to_QByteArray(buf));
      }
      else {
          qDebug()<<query.value(0);
          qDebug()<<query.value(1);
          qDebug()<<query.value(2);
          qDebug()<<query.value(3);
          QString buf="11u"+query.value(0).toString()+"&"+query.value(1).toString()+"&"+query.value(2).toString();
          SClients[descriptor]->write(QString_to_QByteArray(buf));
      }
  }
  else {
      qDebug()<<"error";
       SClients[descriptor]->write("10");
  }
}
