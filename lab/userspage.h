#ifndef USERSPAGE_H
#define USERSPAGE_H

#include <QWidget>

namespace Ui {
class UsersPage;
}

class UsersPage : public QWidget
{
    Q_OBJECT

public:
    explicit UsersPage(QWidget *parent = nullptr);
    ~UsersPage();

private:
    Ui::UsersPage *ui;
};

#endif // USERSPAGE_H
