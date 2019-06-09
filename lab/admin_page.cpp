#include "admin_page.h"
#include "ui_admin_page.h"
#include "QDebug"
#include <QListWidgetItem>

admin_page::admin_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin_page)
{
    ui->setupUi(this);
}

admin_page::~admin_page()
{
    delete ui;
}

void admin_page::on_pushButton_clicked()
{
      emit close_windows();
}

void admin_page::on_pushButton_2_clicked()
{
       QString a = this->ui->listWidget->currentItem()->text();
       Delete(a);
}
