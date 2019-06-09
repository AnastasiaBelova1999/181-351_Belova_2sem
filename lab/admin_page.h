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
    ~admin_page();
signals:
    void close_windows();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    //void set_data(QString a,QString b);
signals:
    void Delete(QString login);

private:
    Ui::admin_page *ui;
};

#endif // ADMIN_PAGE_H
