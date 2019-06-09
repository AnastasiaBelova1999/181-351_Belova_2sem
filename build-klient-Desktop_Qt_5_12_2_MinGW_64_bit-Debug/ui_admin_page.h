/********************************************************************************
** Form generated from reading UI file 'admin_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PAGE_H
#define UI_ADMIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_page
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_back;
    QComboBox *comboBox;
    QLabel *label_2;

    void setupUi(QWidget *admin_page)
    {
        if (admin_page->objectName().isEmpty())
            admin_page->setObjectName(QString::fromUtf8("admin_page"));
        admin_page->resize(553, 483);
        admin_page->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 248, 220);"));
        label = new QLabel(admin_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 30, 161, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Bell MT"));
        font.setPointSize(16);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        listWidget = new QListWidget(admin_page);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(60, 60, 391, 311));
        pushButton_delete = new QPushButton(admin_page);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(350, 440, 93, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bell MT"));
        font1.setPointSize(12);
        font1.setItalic(true);
        pushButton_delete->setFont(font1);
        pushButton_delete->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        pushButton_back = new QPushButton(admin_page);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(90, 440, 93, 28));
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        comboBox = new QComboBox(admin_page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 380, 241, 31));
        label_2 = new QLabel(admin_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 390, 71, 21));

        retranslateUi(admin_page);

        QMetaObject::connectSlotsByName(admin_page);
    } // setupUi

    void retranslateUi(QWidget *admin_page)
    {
        admin_page->setWindowTitle(QApplication::translate("admin_page", "Form", nullptr));
        label->setText(QApplication::translate("admin_page", "\320\222\321\201\320\265 \320\267\320\260\320\272\320\260\320\267\321\213", nullptr));
        pushButton_delete->setText(QApplication::translate("admin_page", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_back->setText(QApplication::translate("admin_page", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        comboBox->setItemText(0, QApplication::translate("admin_page", "AnyThing", nullptr));
        comboBox->setItemText(1, QApplication::translate("admin_page", "Ipad", nullptr));
        comboBox->setItemText(2, QApplication::translate("admin_page", "Iphone", nullptr));

        label_2->setText(QApplication::translate("admin_page", "\320\242\320\276\320\262\320\260\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_page: public Ui_admin_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
