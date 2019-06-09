#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "Crypter.h"
#include <QCryptographicHash>
#include "crypto.h"
MainWindow::MainWindow(QWidget *parent) ://конструктор
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//кнопка авторизоваться, запрос серваку
{
    socket = new QTcpSocket(this);
    connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisc()));
    qDebug()<<"Button onclick";
    socket->connectToHost("127.0.0.1",6000);
    QString buffer="10$";
    buffer+= this->ui->lineEdit_login->text()+"$";
    QCryptographicHash b(QCryptographicHash::Md4);
    b.addData(QString_to_QByteArray(this->ui->lineEdit_password->text()));
    QString temp = QString::fromStdString(b.result().toHex().toStdString());
    login1 = this->ui->lineEdit_login->text();
    buffer+=temp;
    qDebug()<<"буфер-"<<buffer;
    crypto aes;
    socket->write(aes.encrypt(QString_to_QByteArray(buffer)));
}

QByteArray MainWindow::QString_to_QByteArray(QString templ)//переход из QString в QByteArray
{
    std::string String_buffer=templ.toStdString();
    QByteArray QByteArray_buffer;
    const char *cstr_buffer = String_buffer.c_str();
    QByteArray_buffer.append(cstr_buffer);
    return QByteArray_buffer;
}

QString MainWindow::QByteArray_to_QString(QByteArray templ)//переход из QByteArray в QString
{
    const char *cstr_buffer=templ.data();
    QString str = QString::fromUtf8(cstr_buffer);
    return str;
}

void MainWindow::on_pushButton_registration_clicked()//Кнопка регистрации
{
    reg = new registration();
    reg->show();
}


void MainWindow::Delete(QString login)//удаление
{
    socket->write(QString_to_QByteArray(Crypter::cryptString("30$"+login)));
}

void MainWindow::Change()
{
    socket->write(QString_to_QByteArray(Crypter::cryptString("40$"+login1)));
}
void MainWindow::sockReady()//чтение данных
{
    if (socket->waitForConnected(100))//вход пользователя
    {
        socket->waitForReadyRead(100);
        Data = socket->readAll();
        qDebug()<<Data;
        crypto aes;
        if(Data[0]=='1' && Data[1]=='1' && Data[2]=='u'){

            usr = new user_page();
            connect(this,&MainWindow::set_userPage,usr,&user_page::set_data);
            Data.remove(0,3);
            QList <QByteArray> buffer =Data.split('&');
            emit set_userPage(QByteArray_to_QString(buffer[0]),QByteArray_to_QString(buffer[1]),QByteArray_to_QString(buffer[2]));
            usr->show();
            //connect(usr,&user_page::change,this,&MainWindow::Change);
        }
        else if (Data[0]=='1' && Data[1]=='1' && Data[2]=='a') {//вход админа
            Data.remove(0,4);
            adm = new admin_page();

            connect(this,&MainWindow::admin,adm,&admin_page::set_data);
            connect(adm,&admin_page::Delete,this,&MainWindow::Delete);
            socket->write(aes.encrypt("50$"));
            bones = Data;

        }
        else if (Data[0]=='5' && Data[1]=='0') {//
            Data.remove(0,3);
            bones1=Data;
            //emit admin(bones,Data);
            socket->write(aes.encrypt("60$"));
             adm->show();
        }
        else if (Data[0]=='6' && Data[1]=='0') {//
            Data.remove(0,3);
            emit admin(bones,bones1,Data);
        }
    }
}
void MainWindow::sockDisc()
{
    socket->deleteLater();
}


