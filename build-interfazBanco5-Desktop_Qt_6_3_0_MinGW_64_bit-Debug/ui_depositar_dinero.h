/********************************************************************************
** Form generated from reading UI file 'depositar_dinero.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITAR_DINERO_H
#define UI_DEPOSITAR_DINERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_depositar_dinero
{
public:
    QLabel *titulo_depositar;
    QPushButton *pushButton_depositar;
    QPushButton *deposito_salir;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_monto;
    QLineEdit *monto;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_cuenta;
    QLineEdit *numero_cuenta;

    void setupUi(QDialog *depositar_dinero)
    {
        if (depositar_dinero->objectName().isEmpty())
            depositar_dinero->setObjectName(QString::fromUtf8("depositar_dinero"));
        depositar_dinero->resize(272, 362);
        depositar_dinero->setStyleSheet(QString::fromUtf8("#depositar_dinero{\n"
"background-color:rgb(255, 255, 255);\n"
"}"));
        titulo_depositar = new QLabel(depositar_dinero);
        titulo_depositar->setObjectName(QString::fromUtf8("titulo_depositar"));
        titulo_depositar->setGeometry(QRect(30, 30, 211, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        titulo_depositar->setFont(font);
        titulo_depositar->setStyleSheet(QString::fromUtf8("#titulo_depositar{\n"
"background-color:rgb(255, 255, 127);\n"
"border-radius:10px;\n"
"}"));
        titulo_depositar->setAlignment(Qt::AlignCenter);
        pushButton_depositar = new QPushButton(depositar_dinero);
        pushButton_depositar->setObjectName(QString::fromUtf8("pushButton_depositar"));
        pushButton_depositar->setGeometry(QRect(80, 250, 111, 41));
        pushButton_depositar->setStyleSheet(QString::fromUtf8("#pushButton_depositar{\n"
"border-radius:10px;\n"
"background-color:rgb(85, 255, 0);\n"
"}"));
        deposito_salir = new QPushButton(depositar_dinero);
        deposito_salir->setObjectName(QString::fromUtf8("deposito_salir"));
        deposito_salir->setGeometry(QRect(80, 300, 111, 41));
        deposito_salir->setStyleSheet(QString::fromUtf8("#deposito_salir{\n"
"border-radius:10px;\n"
"background-color:rgb(255, 97, 100);\n"
"}"));
        layoutWidget = new QWidget(depositar_dinero);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(48, 168, 171, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_monto = new QLabel(layoutWidget);
        label_monto->setObjectName(QString::fromUtf8("label_monto"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_monto->setFont(font1);
        label_monto->setStyleSheet(QString::fromUtf8("#label_monto{\n"
"background-color: rgb(248, 165, 0);\n"
"border-radius:4px;\n"
"\n"
"}"));
        label_monto->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_monto);

        monto = new QLineEdit(layoutWidget);
        monto->setObjectName(QString::fromUtf8("monto"));
        monto->setStyleSheet(QString::fromUtf8("#monto{\n"
"border-radius:5px;\n"
"border: 1px solid #000000;\n"
"}"));

        verticalLayout->addWidget(monto);

        layoutWidget1 = new QWidget(depositar_dinero);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 100, 171, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_cuenta = new QLabel(layoutWidget1);
        label_cuenta->setObjectName(QString::fromUtf8("label_cuenta"));
        label_cuenta->setFont(font1);
        label_cuenta->setStyleSheet(QString::fromUtf8("#label_cuenta{\n"
"background-color: rgb(248, 165, 0);\n"
"border-radius:4px;\n"
"}"));
        label_cuenta->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_cuenta);

        numero_cuenta = new QLineEdit(layoutWidget1);
        numero_cuenta->setObjectName(QString::fromUtf8("numero_cuenta"));
        numero_cuenta->setStyleSheet(QString::fromUtf8("#numero_cuenta{\n"
"border-radius:5px;\n"
"border: 1px solid #000000;\n"
"}"));

        verticalLayout_2->addWidget(numero_cuenta);


        retranslateUi(depositar_dinero);

        QMetaObject::connectSlotsByName(depositar_dinero);
    } // setupUi

    void retranslateUi(QDialog *depositar_dinero)
    {
        depositar_dinero->setWindowTitle(QCoreApplication::translate("depositar_dinero", "Dialog", nullptr));
        titulo_depositar->setText(QCoreApplication::translate("depositar_dinero", "DEPOSITAR DINERO", nullptr));
        pushButton_depositar->setText(QCoreApplication::translate("depositar_dinero", "ENVIAR", nullptr));
        deposito_salir->setText(QCoreApplication::translate("depositar_dinero", "SALIR", nullptr));
        label_monto->setText(QCoreApplication::translate("depositar_dinero", "Ingresar Monto", nullptr));
        label_cuenta->setText(QCoreApplication::translate("depositar_dinero", "Numero de Cuenta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depositar_dinero: public Ui_depositar_dinero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITAR_DINERO_H
