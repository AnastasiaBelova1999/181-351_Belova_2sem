#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class registration;
}

class registration : public QWidget
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();
    QTcpSocket* socket;
    bool check_login(QString login);
    bool check_password(QString password);
    bool check_product(QString product);

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_login_editingFinished();

    void on_lineEdit_password_editingFinished();

    void on_lineEdit_product_editingFinished();

private:
    Ui::registration *ui;
signals:
   void on_push_register_clicked();
};

#endif // REGISTRATION_H
