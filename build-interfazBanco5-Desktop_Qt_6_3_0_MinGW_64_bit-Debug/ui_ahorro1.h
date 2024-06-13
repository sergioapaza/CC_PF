/********************************************************************************
** Form generated from reading UI file 'ahorro1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AHORRO1_H
#define UI_AHORRO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Ahorro1
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *dni;
    QVBoxLayout *verticalLayout;
    QPushButton *atras;
    QPushButton *finalizar;

    void setupUi(QDialog *Ahorro1)
    {
        if (Ahorro1->objectName().isEmpty())
            Ahorro1->setObjectName(QString::fromUtf8("Ahorro1"));
        Ahorro1->resize(385, 335);
        gridLayout = new QGridLayout(Ahorro1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Ahorro1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Ahorro1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(Ahorro1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_3->setFont(font2);

        horizontalLayout->addWidget(label_3);

        dni = new QLineEdit(Ahorro1);
        dni->setObjectName(QString::fromUtf8("dni"));
        dni->setStyleSheet(QString::fromUtf8("#dni{\n"
"background-color: white;\n"
"}"));

        horizontalLayout->addWidget(dni);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        atras = new QPushButton(Ahorro1);
        atras->setObjectName(QString::fromUtf8("atras"));
        QFont font3;
        font3.setPointSize(16);
        atras->setFont(font3);

        verticalLayout->addWidget(atras);

        finalizar = new QPushButton(Ahorro1);
        finalizar->setObjectName(QString::fromUtf8("finalizar"));
        finalizar->setFont(font3);

        verticalLayout->addWidget(finalizar);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);


        retranslateUi(Ahorro1);

        QMetaObject::connectSlotsByName(Ahorro1);
    } // setupUi

    void retranslateUi(QDialog *Ahorro1)
    {
        Ahorro1->setWindowTitle(QCoreApplication::translate("Ahorro1", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Ahorro1", "SIMPLE, R\303\201PIDO Y SEGURO", nullptr));
        label_2->setText(QCoreApplication::translate("Ahorro1", "Por favor, termina de completar los siguientes datos:", nullptr));
        label_3->setText(QCoreApplication::translate("Ahorro1", "Documento de identidad:", nullptr));
        atras->setText(QCoreApplication::translate("Ahorro1", "Atr\303\241s", nullptr));
        finalizar->setText(QCoreApplication::translate("Ahorro1", "Finalizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ahorro1: public Ui_Ahorro1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AHORRO1_H
