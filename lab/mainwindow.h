#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTcpSocket>
#include <QMessageBox>
#include <QDebug>
//#include "register.h"
#include "user_page.h"
#include"userspage.h"
#include "admin_page.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTcpSocket* socket;
    QByteArray Data;
public slots:
    void sockReady();
    void sockDisc();
    QByteArray QString_to_QByteArray(QString templ);
    QString QByteArray_to_QString(QByteArray templ);
    void Registe(QByteArray img);
    void Delete(QString login);
    void Change();
private slots:

    void on_pushButton_clicked();

signals:
    void admin(QString a,QString b,QString cc);
private:
    QString bones;
    QString bones1;
     QString login1;
    UsersPage *usr;
    Ui::MainWindow *ui;
    admin_page *adm;
};

#endif // MAINWINDOW_H
