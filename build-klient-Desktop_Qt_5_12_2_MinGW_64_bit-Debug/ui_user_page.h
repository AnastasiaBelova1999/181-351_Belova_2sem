/********************************************************************************
** Form generated from reading UI file 'user_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PAGE_H
#define UI_USER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_page
{
public:
    QLabel *label;
    QLabel *label_login;
    QLabel *label_password;
    QLabel *label_product;
    QPushButton *pushButton_back;
    QPushButton *pushButton_changepass;
    QLabel *label_login_out;
    QLabel *label_password_out;
    QLabel *label_product_out;

    void setupUi(QWidget *user_page)
    {
        if (user_page->objectName().isEmpty())
            user_page->setObjectName(QString::fromUtf8("user_page"));
        user_page->resize(465, 344);
        user_page->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 248, 220);"));
        label = new QLabel(user_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 191, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Bell MT"));
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label_login = new QLabel(user_page);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(100, 110, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bell MT"));
        font1.setPointSize(12);
        font1.setItalic(true);
        label_login->setFont(font1);
        label_login->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label_password = new QLabel(user_page);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(90, 160, 81, 21));
        label_password->setFont(font1);
        label_password->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label_product = new QLabel(user_page);
        label_product->setObjectName(QString::fromUtf8("label_product"));
        label_product->setGeometry(QRect(94, 210, 61, 20));
        label_product->setFont(font1);
        label_product->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        pushButton_back = new QPushButton(user_page);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(70, 290, 93, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bell MT"));
        font2.setPointSize(11);
        font2.setItalic(true);
        pushButton_back->setFont(font2);
        pushButton_back->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        pushButton_changepass = new QPushButton(user_page);
        pushButton_changepass->setObjectName(QString::fromUtf8("pushButton_changepass"));
        pushButton_changepass->setGeometry(QRect(230, 290, 161, 28));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Bell MT"));
        font3.setPointSize(11);
        pushButton_changepass->setFont(font3);
        pushButton_changepass->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label_login_out = new QLabel(user_page);
        label_login_out->setObjectName(QString::fromUtf8("label_login_out"));
        label_login_out->setGeometry(QRect(230, 110, 151, 21));
        label_password_out = new QLabel(user_page);
        label_password_out->setObjectName(QString::fromUtf8("label_password_out"));
        label_password_out->setGeometry(QRect(230, 170, 151, 16));
        label_product_out = new QLabel(user_page);
        label_product_out->setObjectName(QString::fromUtf8("label_product_out"));
        label_product_out->setGeometry(QRect(230, 220, 151, 20));

        retranslateUi(user_page);

        QMetaObject::connectSlotsByName(user_page);
    } // setupUi

    void retranslateUi(QWidget *user_page)
    {
        user_page->setWindowTitle(QApplication::translate("user_page", "Form", nullptr));
        label->setText(QApplication::translate("user_page", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202 ", nullptr));
        label_login->setText(QApplication::translate("user_page", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_password->setText(QApplication::translate("user_page", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_product->setText(QApplication::translate("user_page", "\320\242\320\276\320\262\320\260\321\200", nullptr));
        pushButton_back->setText(QApplication::translate("user_page", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_changepass->setText(QApplication::translate("user_page", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_login_out->setText(QApplication::translate("user_page", "TextLabel", nullptr));
        label_password_out->setText(QApplication::translate("user_page", "TextLabel", nullptr));
        label_product_out->setText(QApplication::translate("user_page", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_page: public Ui_user_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PAGE_H
