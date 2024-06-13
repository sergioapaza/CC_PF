/********************************************************************************
** Form generated from reading UI file 'ahorro.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AHORRO_H
#define UI_AHORRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ahorro
{
public:
    QLabel *label;
    QGroupBox *contenedorDatosAhorro;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *nombres;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLineEdit *apellidos;
    QWidget *widget2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *celular;
    QLabel *label_4;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *opcionesRegion;
    QWidget *widget5;
    QGridLayout *gridLayout;
    QPushButton *btnVentanaElegir;
    QPushButton *btnVentanaAhorro;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout;
    QRadioButton *soles;
    QRadioButton *dolares;
    QLabel *label_3;

    void setupUi(QDialog *Ahorro)
    {
        if (Ahorro->objectName().isEmpty())
            Ahorro->setObjectName(QString::fromUtf8("Ahorro"));
        Ahorro->resize(902, 632);
        Ahorro->setStyleSheet(QString::fromUtf8("#Ahorro{\n"
"background-color:rgb(0, 170, 255);\n"
"}"));
        label = new QLabel(Ahorro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 20, 451, 61));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"color:black;\n"
"}"));
        contenedorDatosAhorro = new QGroupBox(Ahorro);
        contenedorDatosAhorro->setObjectName(QString::fromUtf8("contenedorDatosAhorro"));
        contenedorDatosAhorro->setGeometry(QRect(470, 170, 361, 418));
        contenedorDatosAhorro->setStyleSheet(QString::fromUtf8("#contenedorDatosAhorro{\n"
"background-color:rgb(255, 255, 170);\n"
"border-radius:7px;\n"
"}"));
        widget = new QWidget(contenedorDatosAhorro);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 341, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font1;
        font1.setPointSize(14);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("#label_8{\n"
"color: black;\n"
"}"));

        verticalLayout->addWidget(label_8);

        nombres = new QLineEdit(widget);
        nombres->setObjectName(QString::fromUtf8("nombres"));
        nombres->setStyleSheet(QString::fromUtf8("#nombres{\n"
"background-color:white;\n"
"}"));

        verticalLayout->addWidget(nombres);

        widget1 = new QWidget(contenedorDatosAhorro);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(9, 73, 341, 58));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("#label_9{\n"
"color: black;\n"
"}"));

        verticalLayout_3->addWidget(label_9);

        apellidos = new QLineEdit(widget1);
        apellidos->setObjectName(QString::fromUtf8("apellidos"));
        apellidos->setStyleSheet(QString::fromUtf8("#apellidos{\n"
"background-color:white;\n"
"}"));

        verticalLayout_3->addWidget(apellidos);

        widget2 = new QWidget(contenedorDatosAhorro);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(9, 137, 343, 90));
        gridLayout_2 = new QGridLayout(widget2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"color:black;\n"
"}"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        celular = new QLineEdit(widget2);
        celular->setObjectName(QString::fromUtf8("celular"));
        celular->setStyleSheet(QString::fromUtf8("#celular{\n"
"background:white;\n"
"}"));

        gridLayout_2->addWidget(celular, 1, 0, 1, 1);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("#label_4{\n"
"color:black;\n"
"}"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        widget3 = new QWidget(contenedorDatosAhorro);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(9, 273, 341, 60));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("#label_5{\n"
"color:black;\n"
"}"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("#label_6{\n"
"color:black;\n"
"}"));

        verticalLayout_2->addWidget(label_6);

        widget4 = new QWidget(contenedorDatosAhorro);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(9, 339, 341, 28));
        horizontalLayout_2 = new QHBoxLayout(widget4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("#label_7{\n"
"color:black;\n"
"}"));

        horizontalLayout_2->addWidget(label_7);

        opcionesRegion = new QComboBox(widget4);
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->addItem(QString());
        opcionesRegion->setObjectName(QString::fromUtf8("opcionesRegion"));

        horizontalLayout_2->addWidget(opcionesRegion);

        widget5 = new QWidget(contenedorDatosAhorro);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(9, 373, 341, 36));
        gridLayout = new QGridLayout(widget5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnVentanaElegir = new QPushButton(widget5);
        btnVentanaElegir->setObjectName(QString::fromUtf8("btnVentanaElegir"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        btnVentanaElegir->setFont(font2);

        gridLayout->addWidget(btnVentanaElegir, 0, 0, 1, 1);

        btnVentanaAhorro = new QPushButton(widget5);
        btnVentanaAhorro->setObjectName(QString::fromUtf8("btnVentanaAhorro"));
        btnVentanaAhorro->setFont(font2);

        gridLayout->addWidget(btnVentanaAhorro, 0, 1, 1, 1);

        widget6 = new QWidget(contenedorDatosAhorro);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(10, 234, 341, 34));
        horizontalLayout = new QHBoxLayout(widget6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        soles = new QRadioButton(widget6);
        soles->setObjectName(QString::fromUtf8("soles"));
        soles->setFont(font1);
        soles->setStyleSheet(QString::fromUtf8("#soles{\n"
"color:black;\n"
"}"));

        horizontalLayout->addWidget(soles);

        dolares = new QRadioButton(widget6);
        dolares->setObjectName(QString::fromUtf8("dolares"));
        dolares->setFont(font1);
        dolares->setStyleSheet(QString::fromUtf8("#dolares{\n"
"color:black;\n"
"}"));

        horizontalLayout->addWidget(dolares);

        label_3 = new QLabel(Ahorro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 100, 481, 51));
        QFont font3;
        font3.setPointSize(20);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("#label_3{\n"
"color:black;\n"
"}"));

        retranslateUi(Ahorro);

        QMetaObject::connectSlotsByName(Ahorro);
    } // setupUi

    void retranslateUi(QDialog *Ahorro)
    {
        Ahorro->setWindowTitle(QCoreApplication::translate("Ahorro", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Ahorro", "Creando cuenta de Ahorro:", nullptr));
        contenedorDatosAhorro->setTitle(QString());
        label_8->setText(QCoreApplication::translate("Ahorro", "Nombres:", nullptr));
        label_9->setText(QCoreApplication::translate("Ahorro", "Apellidos:", nullptr));
        label_2->setText(QCoreApplication::translate("Ahorro", "N\303\272mero de celular:", nullptr));
        label_4->setText(QCoreApplication::translate("Ahorro", "\302\277En que moneda deseas abrir tu cuenta?", nullptr));
        label_5->setText(QCoreApplication::translate("Ahorro", "\302\277En que lugar usar\303\241s preferentemente", nullptr));
        label_6->setText(QCoreApplication::translate("Ahorro", "tu cuenta?", nullptr));
        label_7->setText(QCoreApplication::translate("Ahorro", "Eliga una regi\303\263n:", nullptr));
        opcionesRegion->setItemText(0, QCoreApplication::translate("Ahorro", "Amazonas", nullptr));
        opcionesRegion->setItemText(1, QCoreApplication::translate("Ahorro", "\303\201ncash", nullptr));
        opcionesRegion->setItemText(2, QCoreApplication::translate("Ahorro", "Apur\303\255mac", nullptr));
        opcionesRegion->setItemText(3, QCoreApplication::translate("Ahorro", "Arequipa", nullptr));
        opcionesRegion->setItemText(4, QCoreApplication::translate("Ahorro", "Ayacucho", nullptr));
        opcionesRegion->setItemText(5, QCoreApplication::translate("Ahorro", "Cajamarca", nullptr));
        opcionesRegion->setItemText(6, QCoreApplication::translate("Ahorro", "Callao", nullptr));
        opcionesRegion->setItemText(7, QCoreApplication::translate("Ahorro", "Cusco", nullptr));
        opcionesRegion->setItemText(8, QCoreApplication::translate("Ahorro", "Huancavelica", nullptr));
        opcionesRegion->setItemText(9, QCoreApplication::translate("Ahorro", "Hu\303\241nuco", nullptr));
        opcionesRegion->setItemText(10, QCoreApplication::translate("Ahorro", "Ica", nullptr));
        opcionesRegion->setItemText(11, QCoreApplication::translate("Ahorro", "Jun\303\255n", nullptr));
        opcionesRegion->setItemText(12, QCoreApplication::translate("Ahorro", "La Libertad", nullptr));
        opcionesRegion->setItemText(13, QCoreApplication::translate("Ahorro", "Lambayeque", nullptr));
        opcionesRegion->setItemText(14, QCoreApplication::translate("Ahorro", "Lima Metropolitana", nullptr));
        opcionesRegion->setItemText(15, QCoreApplication::translate("Ahorro", "Lima (departamento)", nullptr));
        opcionesRegion->setItemText(16, QCoreApplication::translate("Ahorro", "Loreto", nullptr));
        opcionesRegion->setItemText(17, QCoreApplication::translate("Ahorro", "Madre de Dios", nullptr));
        opcionesRegion->setItemText(18, QCoreApplication::translate("Ahorro", "Moquegua", nullptr));
        opcionesRegion->setItemText(19, QCoreApplication::translate("Ahorro", "Pasco", nullptr));
        opcionesRegion->setItemText(20, QCoreApplication::translate("Ahorro", "Piura", nullptr));
        opcionesRegion->setItemText(21, QCoreApplication::translate("Ahorro", "Puno", nullptr));
        opcionesRegion->setItemText(22, QCoreApplication::translate("Ahorro", "San Mart\303\255n", nullptr));
        opcionesRegion->setItemText(23, QCoreApplication::translate("Ahorro", "Tacna", nullptr));
        opcionesRegion->setItemText(24, QCoreApplication::translate("Ahorro", "Tumbes", nullptr));
        opcionesRegion->setItemText(25, QCoreApplication::translate("Ahorro", "Ucayali", nullptr));

        btnVentanaElegir->setText(QCoreApplication::translate("Ahorro", "Atr\303\241s", nullptr));
        btnVentanaAhorro->setText(QCoreApplication::translate("Ahorro", "Continuar", nullptr));
        soles->setText(QCoreApplication::translate("Ahorro", "Soles", nullptr));
        dolares->setText(QCoreApplication::translate("Ahorro", "D\303\263lares", nullptr));
        label_3->setText(QCoreApplication::translate("Ahorro", "Por favor, completa los siguientes datos:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ahorro: public Ui_Ahorro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AHORRO_H
