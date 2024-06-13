/********************************************************************************
** Form generated from reading UI file 'perfil.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFIL_H
#define UI_PERFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Perfil
{
public:
    QLabel *label_saludo;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *btnMenu;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QLabel *label_3;
    QLabel *nombre;

    void setupUi(QDialog *Perfil)
    {
        if (Perfil->objectName().isEmpty())
            Perfil->setObjectName(QString::fromUtf8("Perfil"));
        Perfil->resize(1247, 715);
        label_saludo = new QLabel(Perfil);
        label_saludo->setObjectName(QString::fromUtf8("label_saludo"));
        label_saludo->setGeometry(QRect(51, 41, 64, 39));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        label_saludo->setFont(font);
        label_saludo->setStyleSheet(QString::fromUtf8("#label_saludo{\n"
"background-color:yellow;\n"
"}"));
        scrollArea = new QScrollArea(Perfil);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(110, 170, 611, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 239));
        scrollArea->setWidget(scrollAreaWidgetContents);
        btnMenu = new QPushButton(Perfil);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        btnMenu->setGeometry(QRect(150, 490, 451, 71));
        btnMenu->setFont(font);
        btnMenu->setStyleSheet(QString::fromUtf8("#btnMenu{\n"
"border-radius:15px;\n"
"background-color: rgb(255, 82, 85)}"));
        groupBox = new QGroupBox(Perfil);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(750, 30, 391, 561));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background-color: rgb(93, 193, 255);\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"background-color:white;\n"
"border-radius: 14x;\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 80, 351, 51));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 150, 351, 51));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 220, 351, 51));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 360, 351, 51));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 430, 351, 51));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 500, 351, 51));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 290, 351, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("#pushButton_7{\n"
"background-color: rgb(255, 213, 0);\n"
"border-radius:4px;\n"
"}"));
        label_3 = new QLabel(Perfil);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 120, 201, 41));
        label_3->setFont(font);
        nombre = new QLabel(Perfil);
        nombre->setObjectName(QString::fromUtf8("nombre"));
        nombre->setGeometry(QRect(120, 40, 171, 38));
        nombre->setFont(font);
        nombre->setStyleSheet(QString::fromUtf8("#nombre{\n"
"color:rgb(0, 0, 0);\n"
"background-color:yellow;\n"
"}"));

        retranslateUi(Perfil);

        QMetaObject::connectSlotsByName(Perfil);
    } // setupUi

    void retranslateUi(QDialog *Perfil)
    {
        Perfil->setWindowTitle(QCoreApplication::translate("Perfil", "Dialog", nullptr));
        label_saludo->setText(QCoreApplication::translate("Perfil", "Hola", nullptr));
        btnMenu->setText(QCoreApplication::translate("Perfil", "Cerrar Sesi\303\263n", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Perfil", " Operaciones:", nullptr));
        pushButton->setText(QCoreApplication::translate("Perfil", "Ver historial de cuenta", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Perfil", "Estadisticas de mi cuenta", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Perfil", "Trasferir dinero", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Perfil", "Pagar servicios", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Perfil", "Pagar cr\303\251ditos y tarjetas", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Perfil", "Configuraci\303\263n", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Perfil", "Depositar dinero", nullptr));
        label_3->setText(QCoreApplication::translate("Perfil", "Mis productos", nullptr));
        nombre->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Perfil: public Ui_Perfil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFIL_H
