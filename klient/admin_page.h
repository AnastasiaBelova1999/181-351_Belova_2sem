#ifndef ADMIN_PAGE_H
#define ADMIN_PAGE_H

#include <QWidget>

namespace Ui {
class admin_page;
}

class admin_page : public QWidget
{
    Q_OBJECT

public:
    explicit admin_page(QWidget *parent = nullptr);
    admin_page(QString a);
    ~admin_page();
    void set_product(QString cc);
public slots:
    void set_data(QString a,QString b,QString cc);

signals:
    void Delete(QString login);
    void close_windows();

private slots:
  void on_pushButton_delete_clicked();

  void set_data_2(QString arg);

  void on_pushButton_back_clicked();

  void on_comboBox_activated(const QString &arg1);

private:
    Ui::admin_page *ui;
    QList <QString> login;//full
    QList <QString> product;
  //  QList <QString> pay;
    QString tempstr;
    QString tempstr1;
};

#endif // ADMIN_PAGE_H
