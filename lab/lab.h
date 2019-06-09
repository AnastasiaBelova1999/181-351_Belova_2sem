#ifndef LAB_H
#define LAB_H

#include <QMainWindow>

namespace Ui {
class lab;
}

class lab : public QMainWindow
{
    Q_OBJECT
  /*  QString login;
    QString password; */
public:
    explicit lab(QWidget *parent = nullptr);
    ~lab();
   /* QString getLogin(){
        return login;
    }
    QString getPassword () {
        return password;
    }
*/
private slots:

    void on_pushButton_authorize_clicked();

private:
    Ui::lab *ui;

};

#endif // LAB_H
