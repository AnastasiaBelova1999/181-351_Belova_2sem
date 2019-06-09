#include "registration.h"
#include "ui_registration.h"
#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>
#include <Crypter.h>
#include <QCryptographicHash>
#include "crypto.h"
registration::registration(QWidget *parent) ://конструктор
    QWidget(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

QByteArray QString_to_QByteArray(QString templ)//переход из QString в QByteArray
{
    std::string String_buffer=templ.toStdString();
    QByteArray QByteArray_buffer;
    const char *cstr_buffer = String_buffer.c_str();
    QByteArray_buffer.append(cstr_buffer);
    return QByteArray_buffer;
}
registration::~registration()
{
    delete ui;
}

bool registration::check_login(QString login)//проверка на правильный ввод логина
{
    if((login.length()<4) && (login.length()>16))
    {
        return false;
    }
    for (int i;i<login.length();i++)
    {
        if (!((login[i]>='a')&&(login[i]<='z')|| (login[i]>='A') && login[i]<='Z'))
        {
            return false;
        }
    }
   return true;
}

bool registration::check_password(QString password)//проверка на правильный ввод пароля
{
    if(password.length()<8)
    {
        return false;
    }
    return true;
}

bool registration ::check_product(QString product)//проверка на правильный ввод товара
{

    return true;
}

void registration ::on_lineEdit_login_editingFinished()//подсветка цветом поля логин
{
    QString line(this->ui->lineEdit_login->text());
    if(check_login(line)){
        this->ui->label_login->setStyleSheet("color: green");
    }
    else {
        this->ui->label_login->setStyleSheet("color: red");
    }
}

void registration ::on_lineEdit_password_editingFinished()//подсветка цветом поля пароль
{
    QString line(this->ui->lineEdit_password->text());
    if(check_password(line)){
        this->ui->label_password->setStyleSheet("color: green");
    }
    else {
        this->ui->label_password->setStyleSheet("color: red");
    }
}

void registration ::on_lineEdit_product_editingFinished()//подсветка цветом поля продукт
{
    QString line(this->ui->comboBox->currentText());
    if(check_product(line)){
        this->ui->label_product->setStyleSheet("color: green");
    }
    else {
        this->ui->label_product->setStyleSheet("color: red");
    }
}


void registration::on_pushButton_clicked()//кнопка зарегистрироваться, запрос серваку
{
    if(check_login(ui->lineEdit_login->text()) && check_password(ui->lineEdit_password->text()) && check_product(this->ui->comboBox->currentText()))
    {
        socket = new QTcpSocket(this);
        connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
        connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisc()));
        qDebug()<<"button pressed";
        socket->connectToHost("127.0.0.1",6000);
        QString buffer="20$";
        buffer+= this->ui->lineEdit_login->text()+"$";
        qDebug()<<this->ui->lineEdit_login->text();
        QCryptographicHash b(QCryptographicHash::Md4);
        b.addData(QString_to_QByteArray(this->ui->lineEdit_password->text()));
        QString temp = QString::fromStdString(b.result().toHex().toStdString());

        buffer+=temp+"$";
       qDebug()<<this->ui->comboBox->currentText();

        buffer+= this->ui->comboBox->currentText();
        crypto aes;
       // qDebug()<<buffer<<"\n"<< QString_to_QByteArray(Crypter::(buffer));

        socket->write(aes.encrypt(QString_to_QByteArray(buffer)));
    }
}
