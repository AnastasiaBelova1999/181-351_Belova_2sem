/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QLabel *label_product;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QWidget *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QString::fromUtf8("registration"));
        registration->resize(461, 421);
        QFont font;
        font.setFamily(QString::fromUtf8("Bell MT"));
        font.setPointSize(10);
        font.setItalic(true);
        registration->setFont(font);
        registration->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 248, 220);"));
        label_login = new QLabel(registration);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(60, 160, 55, 16));
        label_login->setFont(font);
        label_login->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        lineEdit_login = new QLineEdit(registration);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(160, 160, 151, 22));
        lineEdit_login->setStyleSheet(QString::fromUtf8(""));
        label_password = new QLabel(registration);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(60, 220, 61, 20));
        label_password->setFont(font);
        label_password->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        lineEdit_password = new QLineEdit(registration);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(160, 220, 151, 22));
        label_product = new QLabel(registration);
        label_product->setObjectName(QString::fromUtf8("label_product"));
        label_product->setGeometry(QRect(60, 280, 61, 20));
        label_product->setFont(font);
        label_product->setStyleSheet(QString::fromUtf8("color:rgb(0, 255, 127);"));
        pushButton = new QPushButton(registration);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 340, 121, 28));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label = new QLabel(registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 241, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bell MT"));
        font1.setPointSize(16);
        font1.setItalic(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label_2 = new QLabel(registration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 281, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        comboBox = new QComboBox(registration);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 280, 171, 22));

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QWidget *registration)
    {
        registration->setWindowTitle(QApplication::translate("registration", "Form", nullptr));
        label_login->setText(QApplication::translate("registration", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_password->setText(QApplication::translate("registration", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_product->setText(QApplication::translate("registration", "\320\242\320\276\320\262\320\260\321\200", nullptr));
        pushButton->setText(QApplication::translate("registration", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QApplication::translate("registration", "\320\222\321\213  \321\203 \320\275\320\260\321\201 \320\262\320\277\320\265\321\200\320\262\321\213\320\265?", nullptr));
        label_2->setText(QApplication::translate("registration", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\321\203\320\271\321\202\320\265\321\201\321\214 \320\277\321\200\321\217\320\274\320\276 \321\201\320\265\320\271\321\207\320\260\321\201!", nullptr));
        comboBox->setItemText(0, QApplication::translate("registration", "Iphone", nullptr));
        comboBox->setItemText(1, QApplication::translate("registration", "Ipad", nullptr));

    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
