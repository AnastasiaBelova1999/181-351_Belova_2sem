#include "user_page.h"
#include "ui_user_page.h"

user_page::user_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_page)
{
    ui->setupUi(this);
}

user_page::~user_page()
{
    delete ui;
}

void user_page::set_data(QString login, QString password,QString product)
{
   this->ui->label_login_out->setText(login);
   this->ui->label_password_out->setText(password);
   this->ui->label_product_out->setText(product);
}

void user_page::on_pushButton_back_clicked()
{
    emit close_windows();
}

void user_page::on_pushButton_changepass_clicked()
{

}
