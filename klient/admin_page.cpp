#include "admin_page.h"
#include "ui_admin_page.h"
#include "QDebug"
#include <QWidget>
#include <QListWidgetItem>
#include <QList>


admin_page::admin_page(QWidget *parent) : //консруктор класса
    QWidget(parent),
    ui(new Ui::admin_page)
{
    ui->setupUi(this);
}

admin_page::~admin_page()
{
    delete ui;
}

void admin_page::set_product(QString cc)
{
     QString buffer;
    for (int i = 0;i<cc.length();i++) {
        qDebug()<<cc[i];

        if(cc[i]=='$'){
             qDebug()<<buffer;
            product.append(buffer);
            buffer.clear();

        }
        else {
            buffer+=cc[i];
        }
    }
}

void admin_page::on_pushButton_delete_clicked()//кнопка удалить
{
   QString a = this->ui->listWidget->currentItem()->text();
   QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());//удаляет строку текущего элемента в строке
   delete it;
  // qDebug()<<pay.length()<<pos.length()<<login.length();
  for (int i = 0;i< login.length() ;i++) {
      if(login[i]==a){
          qDebug()<<login<<product ;
          login.removeAt(i);
          product.removeAt(i);

          break;
      }
  }
  Delete(a);

}


void admin_page::set_data(QString a, QString b, QString cc)//Передает в окно данные через сервак
{
    int c=0;
     tempstr="NONE";
     tempstr1="NONE";
     QString buffer="";
     for (int i = 0;i<a.length();i++) {
         qDebug()<<i;
         if(a[i]=='$'){
             if(buffer !=""){
                 if(b[c]=='1'){
                     login.append(buffer);
                      ui->listWidget->addItem(buffer);
                 }
                 else {
                     login.append(buffer);
                     ui->listWidget->addItem(buffer);
                 }
                 c++;
                buffer="";
          }
     }
         else {
             buffer+=a[i];
         }

     }
    set_product(cc);

     qDebug()<<a <<b<<product;
 }
void admin_page::set_data_2(QString arg)//заполняет табличку
{
    this->ui->listWidget->clear();

    for (int i =0;i< product.length();i++) {
        if(arg=="AnyThing"){
          this->ui->listWidget->addItem(login[i]);
        }
        else if (arg=="Ipad" && product[i]=="Ipad") {
           this->ui->listWidget->addItem(login[i]);
        }
        else if (arg=="Iphone" && product[i]=="Iphone") {
           this->ui->listWidget->addItem(login[i]);
        }
    }

}

void admin_page::on_pushButton_back_clicked()
{
    emit close_windows();
}

void admin_page::on_comboBox_activated(const QString &arg1)
{
    set_data_2(arg1);
}
