/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *topPanel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *loginIcon;
    QLabel *label;
    QGroupBox *caja_registro;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *nombre_usuario;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *contrasenia;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *email;
    QPushButton *boton_registro;
    QGroupBox *caja_login;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *nombre_usuario_login;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *contrasenia_login;
    QPushButton *boton_login;
    QPushButton *salir_main;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(947, 657);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/icono.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"border-image: url(:/images/img/bg.jpg);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName(QString::fromUtf8("topPanel"));
        topPanel->setGeometry(QRect(0, 0, 951, 91));
        topPanel->setStyleSheet(QString::fromUtf8("#topPanel{\n"
"border-image:url(:/images/img/banner.jpg);\n"
"}"));
        layoutWidget = new QWidget(topPanel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 10, 581, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginIcon = new QWidget(layoutWidget);
        loginIcon->setObjectName(QString::fromUtf8("loginIcon"));
        loginIcon->setStyleSheet(QString::fromUtf8("#loginIcon{\n"
"border-image:url(:/images/img/login.png);\n"
"}"));

        horizontalLayout->addWidget(loginIcon);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette;
        label->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(36);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        caja_registro = new QGroupBox(centralwidget);
        caja_registro->setObjectName(QString::fromUtf8("caja_registro"));
        caja_registro->setGeometry(QRect(80, 110, 321, 391));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        caja_registro->setFont(font1);
        caja_registro->setStyleSheet(QString::fromUtf8("#caja_registro{\n"
"color:black;\n"
"background-color:rgb(85, 255, 127);\n"
"border-radius:10px;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(caja_registro);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(caja_registro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"color:black;\n"
"}"));

        verticalLayout->addWidget(label_2);

        nombre_usuario = new QLineEdit(caja_registro);
        nombre_usuario->setObjectName(QString::fromUtf8("nombre_usuario"));
        nombre_usuario->setFont(font2);
        nombre_usuario->setStyleSheet(QString::fromUtf8("#nombre_usuario{\n"
"background-color:white;\n"
"}"));

        verticalLayout->addWidget(nombre_usuario);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(caja_registro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("#label_3{\n"
"color:black;\n"
"}"));

        verticalLayout_2->addWidget(label_3);

        contrasenia = new QLineEdit(caja_registro);
        contrasenia->setObjectName(QString::fromUtf8("contrasenia"));
        contrasenia->setFont(font2);
        contrasenia->setStyleSheet(QString::fromUtf8("#contrasenia{\n"
"background-color:white;\n"
"}"));
        contrasenia->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(contrasenia);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(caja_registro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("#label_4{\n"
"color:black;\n"
"}"));

        verticalLayout_3->addWidget(label_4);

        email = new QLineEdit(caja_registro);
        email->setObjectName(QString::fromUtf8("email"));
        email->setFont(font2);
        email->setStyleSheet(QString::fromUtf8("#email{\n"
"background-color:white;\n"
"}"));

        verticalLayout_3->addWidget(email);


        verticalLayout_4->addLayout(verticalLayout_3);

        boton_registro = new QPushButton(caja_registro);
        boton_registro->setObjectName(QString::fromUtf8("boton_registro"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        boton_registro->setFont(font3);
        boton_registro->setStyleSheet(QString::fromUtf8("#boton_registro{\n"
"color:black;\n"
"background-color:rgb(255, 255, 0);\n"
"border-radius:4px;\n"
"padding:7px;\n"
"}\n"
"\n"
"#boton_registro:hover{\n"
"color:white;\n"
"background-color:red;\n"
"}"));

        verticalLayout_4->addWidget(boton_registro);

        caja_login = new QGroupBox(centralwidget);
        caja_login->setObjectName(QString::fromUtf8("caja_login"));
        caja_login->setGeometry(QRect(510, 160, 351, 301));
        caja_login->setFont(font1);
        caja_login->setStyleSheet(QString::fromUtf8("#caja_login{\n"
"color:black;\n"
"background-color:rgb(85, 255, 127);\n"
"border-radius:10px;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(caja_login);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(caja_login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("#label_5{\n"
"color:black;\n"
"}"));

        verticalLayout_5->addWidget(label_5);

        nombre_usuario_login = new QLineEdit(caja_login);
        nombre_usuario_login->setObjectName(QString::fromUtf8("nombre_usuario_login"));
        nombre_usuario_login->setFont(font2);
        nombre_usuario_login->setStyleSheet(QString::fromUtf8("#nombre_usuario_login{\n"
"background-color:white;\n"
"}"));

        verticalLayout_5->addWidget(nombre_usuario_login);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(caja_login);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("#label_6{\n"
"color:black;\n"
"}"));

        verticalLayout_6->addWidget(label_6);

        contrasenia_login = new QLineEdit(caja_login);
        contrasenia_login->setObjectName(QString::fromUtf8("contrasenia_login"));
        contrasenia_login->setFont(font2);
        contrasenia_login->setStyleSheet(QString::fromUtf8("#contrasenia_login{\n"
"background-color:white;\n"
"}"));
        contrasenia_login->setEchoMode(QLineEdit::Password);

        verticalLayout_6->addWidget(contrasenia_login);


        verticalLayout_7->addLayout(verticalLayout_6);

        boton_login = new QPushButton(caja_login);
        boton_login->setObjectName(QString::fromUtf8("boton_login"));
        boton_login->setFont(font3);
        boton_login->setStyleSheet(QString::fromUtf8("#boton_login{\n"
"color:black;\n"
"background-color:rgb(255, 255, 0);\n"
"border-radius:4px;\n"
"padding:7px;\n"
"}\n"
"\n"
"#boton_login:hover{\n"
"color:white;\n"
"background-color:red;\n"
"}"));

        verticalLayout_7->addWidget(boton_login);

        salir_main = new QPushButton(centralwidget);
        salir_main->setObjectName(QString::fromUtf8("salir_main"));
        salir_main->setGeometry(QRect(390, 570, 151, 51));
        salir_main->setFont(font1);
        salir_main->setStyleSheet(QString::fromUtf8("#salir_main{\n"
"background-color:rgb(255, 0, 0);\n"
"color:rgb(255, 255, 255);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login and Register", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SISTEMA BANCARIO", nullptr));
        caja_registro->setTitle(QCoreApplication::translate("MainWindow", "Registrarse", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre de usuario:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        boton_registro->setText(QCoreApplication::translate("MainWindow", "Registrarse", nullptr));
        caja_login->setTitle(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nombre de usuario:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        boton_login->setText(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        salir_main->setText(QCoreApplication::translate("MainWindow", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
