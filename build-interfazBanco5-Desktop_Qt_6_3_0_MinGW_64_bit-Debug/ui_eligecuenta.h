/********************************************************************************
** Form generated from reading UI file 'eligecuenta.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIGECUENTA_H
#define UI_ELIGECUENTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EligeCuenta
{
public:
    QLabel *bienvenido;
    QLabel *label_2;
    QGroupBox *contenedorAhorro;
    QPushButton *btncuentaAhorros;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QLabel *label_8;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *contenedorCredito;
    QPushButton *btncuentaCredito;
    QLabel *label_3;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *btnMenu;

    void setupUi(QDialog *EligeCuenta)
    {
        if (EligeCuenta->objectName().isEmpty())
            EligeCuenta->setObjectName(QString::fromUtf8("EligeCuenta"));
        EligeCuenta->resize(901, 617);
        EligeCuenta->setStyleSheet(QString::fromUtf8("#EligeCuenta{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));
        bienvenido = new QLabel(EligeCuenta);
        bienvenido->setObjectName(QString::fromUtf8("bienvenido"));
        bienvenido->setGeometry(QRect(50, 10, 241, 81));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        bienvenido->setFont(font);
        bienvenido->setStyleSheet(QString::fromUtf8("#bienvenido{\n"
"color:black;\n"
"}"));
        label_2 = new QLabel(EligeCuenta);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 241, 81));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"color:black;\n"
"}"));
        contenedorAhorro = new QGroupBox(EligeCuenta);
        contenedorAhorro->setObjectName(QString::fromUtf8("contenedorAhorro"));
        contenedorAhorro->setGeometry(QRect(100, 170, 291, 321));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        contenedorAhorro->setFont(font2);
        contenedorAhorro->setStyleSheet(QString::fromUtf8("#contenedorAhorro{\n"
"background-color:rgb(255, 255, 170);\n"
"border-radius:7px;\n"
"}"));
        btncuentaAhorros = new QPushButton(contenedorAhorro);
        btncuentaAhorros->setObjectName(QString::fromUtf8("btncuentaAhorros"));
        btncuentaAhorros->setGeometry(QRect(10, 270, 271, 42));
        btncuentaAhorros->setFont(font2);
        btncuentaAhorros->setStyleSheet(QString::fromUtf8("#btncuentaAhorros{\n"
"background-color: rgb(13, 195, 4);\n"
"padding:5px;\n"
"color:white;\n"
"border-radius:7px;\n"
"}\n"
"\n"
"#btncuentaAhorros:hover{\n"
"background-color: red;\n"
"}"));
        label = new QLabel(contenedorAhorro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 253, 39));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"color:black;\n"
"}"));
        layoutWidget = new QWidget(contenedorAhorro);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 54, 272, 60));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(false);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("#label_4{\n"
"color:black;\n"
"}"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("#label_5{\n"
"color:black;\n"
"}"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(contenedorAhorro);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 130, 271, 60));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("#label_9{\n"
"color:black;\n"
"}"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("#label_8{\n"
"color:black;\n"
"}"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        layoutWidget2 = new QWidget(contenedorAhorro);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 200, 271, 60));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("#label_6{\n"
"color:black;\n"
"}"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("#label_7{\n"
"color:black;\n"
"}"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        contenedorCredito = new QGroupBox(EligeCuenta);
        contenedorCredito->setObjectName(QString::fromUtf8("contenedorCredito"));
        contenedorCredito->setGeometry(QRect(490, 170, 321, 321));
        contenedorCredito->setFont(font1);
        contenedorCredito->setStyleSheet(QString::fromUtf8("#contenedorCredito{\n"
"background-color:rgb(255, 255, 170);\n"
"border-radius:7px;\n"
"}"));
        btncuentaCredito = new QPushButton(contenedorCredito);
        btncuentaCredito->setObjectName(QString::fromUtf8("btncuentaCredito"));
        btncuentaCredito->setGeometry(QRect(9, 270, 301, 42));
        btncuentaCredito->setFont(font2);
        btncuentaCredito->setStyleSheet(QString::fromUtf8("#btncuentaCredito{\n"
"background-color: rgb(13, 195, 4);\n"
"padding:5px;\n"
"color:white;\n"
"border-radius:7px;\n"
"}\n"
"\n"
"#btncuentaCredito:hover{\n"
"background-color: red;\n"
"}"));
        label_3 = new QLabel(contenedorCredito);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 10, 244, 39));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("#label_3{\n"
"color:black;\n"
"}"));
        layoutWidget3 = new QWidget(contenedorCredito);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 70, 301, 60));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font5;
        font5.setPointSize(14);
        label_10->setFont(font5);
        label_10->setStyleSheet(QString::fromUtf8("#label_10{\n"
"color:black;\n"
"}"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font5);
        label_11->setStyleSheet(QString::fromUtf8("#label_11{\n"
"color:black;\n"
"}"));

        verticalLayout->addWidget(label_11);

        layoutWidget4 = new QWidget(contenedorCredito);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 150, 301, 92));
        gridLayout_3 = new QGridLayout(layoutWidget4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font5);
        label_12->setStyleSheet(QString::fromUtf8("#label_12{\n"
"color:black;\n"
"}"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font5);
        label_13->setStyleSheet(QString::fromUtf8("#label_13{\n"
"color:black;\n"
"}"));

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("#label_14{\n"
"color:black;\n"
"}"));

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        btnMenu = new QPushButton(EligeCuenta);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        btnMenu->setGeometry(QRect(330, 520, 241, 61));
        btnMenu->setFont(font1);

        retranslateUi(EligeCuenta);

        QMetaObject::connectSlotsByName(EligeCuenta);
    } // setupUi

    void retranslateUi(QDialog *EligeCuenta)
    {
        EligeCuenta->setWindowTitle(QCoreApplication::translate("EligeCuenta", "Dialog", nullptr));
        bienvenido->setText(QCoreApplication::translate("EligeCuenta", "Bienvenido(a) ", nullptr));
        label_2->setText(QCoreApplication::translate("EligeCuenta", "Eliga una cuenta:", nullptr));
        contenedorAhorro->setTitle(QString());
        btncuentaAhorros->setText(QCoreApplication::translate("EligeCuenta", "Elegir", nullptr));
        label->setText(QCoreApplication::translate("EligeCuenta", "Cuenta de ahorros", nullptr));
        label_4->setText(QCoreApplication::translate("EligeCuenta", "* Mantenimiento sin costo.", nullptr));
        label_5->setText(QCoreApplication::translate("EligeCuenta", "* Hasta 1 dep\303\263sito en ventanilla.", nullptr));
        label_9->setText(QCoreApplication::translate("EligeCuenta", "* Sin costos en la provincia", nullptr));
        label_8->setText(QCoreApplication::translate("EligeCuenta", "donde se abri\303\263 la cuenta.", nullptr));
        label_6->setText(QCoreApplication::translate("EligeCuenta", "* Operaciones en cajeros y ", nullptr));
        label_7->setText(QCoreApplication::translate("EligeCuenta", "canales digitales.", nullptr));
        contenedorCredito->setTitle(QString());
        btncuentaCredito->setText(QCoreApplication::translate("EligeCuenta", "Elegir", nullptr));
        label_3->setText(QCoreApplication::translate("EligeCuenta", "Cuenta de cr\303\251dito", nullptr));
        label_10->setText(QCoreApplication::translate("EligeCuenta", "Puedes elegir entre estas 3", nullptr));
        label_11->setText(QCoreApplication::translate("EligeCuenta", "opciones: ", nullptr));
        label_12->setText(QCoreApplication::translate("EligeCuenta", "* Credit Black Card.", nullptr));
        label_13->setText(QCoreApplication::translate("EligeCuenta", "* Credit Gold Card.", nullptr));
        label_14->setText(QCoreApplication::translate("EligeCuenta", "* Credit Normal Card.", nullptr));
        btnMenu->setText(QCoreApplication::translate("EligeCuenta", "Volver al Men\303\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EligeCuenta: public Ui_EligeCuenta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIGECUENTA_H
