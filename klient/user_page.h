#ifndef USER_PAGE_H
#define USER_PAGE_H

#include <QWidget>


namespace Ui {
class user_page;
}

class user_page : public QWidget
{
    Q_OBJECT

public:
    explicit user_page(QWidget *parent = nullptr);
    void set_data(QString login,QString password,QString product);
     ~user_page();

signals:
     void close_windows();
 private slots:

     void on_pushButton_back_clicked();

     void on_pushButton_changepass_clicked();

private:
    Ui::user_page *ui;
};

#endif // USER_PAGE_H
