#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include"Crypter.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    socket = new QTcpSocket(this);
    connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisc()));
    qDebug()<<"button is pressed";
    socket->connectToHost("127.0.0.1",6000);
    QString buffer="10$";
    buffer+= this->ui->lineEdit_login->text()+"$";
    QCryptographicHash b(QCryptographicHash::Md4);
    b.addData(QString_to_QByteArray(this->ui->lineEdit_password->text()));
    QString str = QString::fromStdString(b.result().toHex().toStdString());
    QCharRef str2=str[0];
    login1 = this->ui->lineEdit_login->text();
     str[0]=str[1];
     str[1]=str2;
     buffer+=str;

    socket->write(QString_to_QByteArray(Crypter::cryptString(buffer)));

}


QByteArray MainWindow::QString_to_QByteArray(QString templ)
{
    std::string String_buffer=templ.toStdString();
    QByteArray QByteArray_buffer;
    const char *cstr_buffer = String_buffer.c_str();
    QByteArray_buffer.append(cstr_buffer);
    return QByteArray_buffer;
}

QString MainWindow::QByteArray_to_QString(QByteArray templ)
{
    const char *cstr_buffer=templ.data();
    QString str = QString::fromUtf8(cstr_buffer);
    return str;
}

void MainWindow::Registe(QByteArray img)
{
}

void MainWindow::Delete(QString login)
{
    socket->write(QString_to_QByteArray(("30$"+login)));
}

void MainWindow::Change()
{
    socket->write(QString_to_QByteArray(("40$"+login1)));
}
void MainWindow::sockReady()
{
    if (socket->waitForConnected(100))
    {
        socket->waitForReadyRead(100);
        Data = socket->readAll();
        qDebug()<<Data;
        if(Data[0]=='1' && Data[1]=='1' && Data[2]=='u'){
            usr = new UsersPage();
            usr->show();
            //connect(usr,UsersPage::change,this,&MainWindow::Change);
        }
        else if (Data[0]=='1' && Data[1]=='1' && Data[2]=='a') {
            Data.remove(0,4);
            adm = new admin_page();
            connect(adm,&admin_page::Delete,this,&MainWindow::Delete);
            socket->write(QString_to_QByteArray("50$"));
            bones = Data;

        }
        else if (Data[0]=='5' && Data[1]=='0') {
            Data.remove(0,3);
            bones1=Data;
            //emit admin(bones,Data);
            socket->write(QString_to_QByteArray("60$"));
             adm->show();
        }
        else if (Data[0]=='6' && Data[1]=='0') {
            Data.remove(0,3);

            emit admin(bones,bones1,Data);
            socket->write(QString_to_QByteArray(Crypter::cryptString("60$")));
             adm->show();
        }
    }
}
void MainWindow::sockDisc()
{
    socket->deleteLater();
}

