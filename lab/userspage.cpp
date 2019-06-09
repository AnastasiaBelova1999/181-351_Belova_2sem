#include "userspage.h"
#include "ui_userspage.h"

UsersPage::UsersPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UsersPage)
{
    ui->setupUi(this);
}

UsersPage::~UsersPage()
{
    delete ui;
}
