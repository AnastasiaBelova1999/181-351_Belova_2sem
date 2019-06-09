/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label_login;
    QLabel *label_password;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_registration;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(784, 518);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(20, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font.setPointSize(11);
        MainWindow->setFont(font);
        MainWindow->setToolTipDuration(0);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 248, 220);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 380, 191, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bell MT"));
        font1.setPointSize(12);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(360, 170, 371, 188));
        formLayout = new QFormLayout(verticalLayoutWidget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(verticalLayoutWidget_2);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bell MT"));
        font2.setPointSize(12);
        font2.setItalic(true);
        font2.setUnderline(true);
        label_login->setFont(font2);
        label_login->setToolTipDuration(5);
        label_login->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label_login->setMargin(10);
        label_login->setIndent(3);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_login);

        label_password = new QLabel(verticalLayoutWidget_2);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setBaseSize(QSize(0, 0));
        label_password->setFont(font2);
        label_password->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        label_password->setMargin(10);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_password);

        lineEdit_login = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setMinimumSize(QSize(80, 30));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_login);

        lineEdit_password = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(0, 30));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_password);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(7, QFormLayout::FieldRole, horizontalSpacer_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 170, 281, 161));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/\320\221\320\265\320\267 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217.jpg")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 20, 581, 121));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/5.png")));
        pushButton_registration = new QPushButton(centralWidget);
        pushButton_registration->setObjectName(QString::fromUtf8("pushButton_registration"));
        pushButton_registration->setGeometry(QRect(120, 380, 211, 31));
        QPalette palette;
        QBrush brush(QColor(220, 20, 60, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 248, 220, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(220, 20, 60, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(220, 20, 60, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(220, 20, 60, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        pushButton_registration->setPalette(palette);
        pushButton_registration->setFont(font1);
        pushButton_registration->setStyleSheet(QString::fromUtf8("color:rgb(220, 20, 60);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 784, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217!", nullptr));
        label_login->setText(QApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_password->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_registration->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
