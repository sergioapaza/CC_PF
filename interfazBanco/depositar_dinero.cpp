#include "depositar_dinero.h"
#include "ui_depositar_dinero.h"

#include <QMessageBox>

#include "usuario.h"
#include <QTextStream>



depositar_dinero::depositar_dinero(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::depositar_dinero)
{
    ui->setupUi(this);
}

depositar_dinero::~depositar_dinero()
{
    delete ui;
}
/*
void depositar_dinero::on_pushButton_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

    QString dinero = ui->monto->text();
    QString numero_de_cuenta = ui->numero_cuenta->text();

    if(db.open()){
        QSqlQuery qry;

        qry.prepare("UPDATE ahorro SET monto=:monto_ WHERE numero:numero_");
        qry.bindValue(":monto_",dinero);
        qry.exec();


        //esta parte si
        //qry.prepare("INSERT INTO users(monto)"
                    //"VALUES (:dinero)");
        qry.prepare("SELECT ahorro.identificador,ahorro.monto from ahorro ORDER BY ahorro.numero");
        qry.exec();
        qry.seek(numero_de_cuenta.toInt());

        QVariant a_modificar=qry.value(5);

        qDebug()<<a_modificar;
        qDebug()<<numero_de_cuenta.toInt();
        qDebug()<<dinero;

        QSqlQuery query;
        query.prepare("UPDATE ahorro SET monto=? WHERE monto=?");
        query.addBindValue(":dinero",dinero);


        //esto no
        if(qry.exec()){
            QMessageBox::information(this,"Finalizado","Monto Enviado");
            close();
        }

        //todo de aqui es comentado
        QSqlQuery qry;
        qry.prepare("UPDATE ahorro SET ClientName=:name, ClientCity=:city, ClientAddress=:address, ClientMol=:mol, ClientEik=:eik, ClientVat=:vat, ClientTel=:tel, ClientMail=:mail WHERE id=:id ");
        qry.bindValue(":name", ui->lineEdit_name->text());
        qry.bindValue(":city", ui->lineEdit_city->text());
        qry.bindValue(":address", ui->lineEdit_address->text());
        qry.bindValue(":mol", ui->lineEdit_mol->text());
        qry.bindValue(":eik", ui->lineEdit_eik->text());
        qry.bindValue(":vat", ui->lineEdit_vat->text());
        qry.bindValue(":tel", ui->lineEdit_tel->text());
        qry.bindValue(":mail", ui->lineEdit_mail->text());
        qry.bindValue(":id", clientid);
        QMessageBox::information(this,"", clientid);
        this->close();
        if (qry.exec())
        {
            emit updateTable();
        }
        else
        {
            QMessageBox::information(this,"", query.lastError().text());
        }

        this->close();

    }

}*/


void depositar_dinero::on_deposito_salir_clicked()
{
    close();
}


void depositar_dinero::on_pushButton_depositar_clicked()
{
   /* QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    //QSqlDatabase db2=QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

    QString dinero = ui->monto->text();
    QString numero_de_cuenta = ui->numero_cuenta->text();

    int dinero_ = dinero.toInt();
    //int dinerop = dinero.toInt();






    if(db.open()){
        QSqlQuery qry;
        int cont=0;
        QSqlQuery query(QSqlDatabase::database("MiConexion"));
        query.prepare(QString("SELECT * FROM ahorro WHERE numero = :numero"));
        qry.bindValue(":numero",numero_de_cuenta);
        //qry.exec();

        if(!query.exec()){
            QMessageBox::information(this,"Fallo","No se pudo ejecutar");
        }
        else{
            while(query.next()){
                QString numeroFromDB=query.value(1).toString();
                QString montoFromDB=query.value(4).toString();

                if(numeroFromDB==numero_de_cuenta){
                    cont++;
                    dinero_+=montoFromDB.toInt();
                }
                //QTextStream(stdout) <<nombresDB;

            }
            //if(cont==0){
                //QMessageBox::information(this,"No depositado","No se pudo depositar el dinero");
            //}





        }
        qry.prepare("UPDATE ahorro SET monto=:monto_ WHERE numero=" + numero_de_cuenta + """");
        qry.bindValue(":monto_",dinero_);
        //qry.exec();

        if(qry.exec()){
            QMessageBox::information(this,"Finalizado","Monto Enviado");
            close();
        }
        else{
            QMessageBox::information(this,"No depositado","No se pudo depositar el dinero");
        }
    }*/



    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");

        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

        QString dinero = ui->monto->text();
        QString numero_de_cuenta = ui->numero_cuenta->text();


        int dinero_ = dinero.toInt();
        //QString dni2 = nuevo_perfil2.getDniBD();
        QString dni2 = "85256441";


        if(db.open()){
            QSqlQuery qry;

            int cont=0;
            QSqlQuery query(QSqlDatabase::database("MiConexion"));
            QSqlQuery query2(QSqlDatabase::database("MiConexion2"));

            query.prepare(QString("SELECT * FROM ahorro WHERE numero = :numero"));
            query2.prepare(QString("SELECT * FROM ahorro WHERE identificador = :identificador"));
            query.bindValue(":numero",numero_de_cuenta);
            query2.bindValue(":identificador",dni2);
            if(!query2.exec()){
                QMessageBox::information(this,"Fallo!","No se pudo ejecutar");
            }else{

                while(query2.next()){
                    int dine;
                    QString dniFromDB=query2.value(0).toString();
                    QString montoFromDB=query2.value(4).toString();
                    QTextStream(stdout) <<dniFromDB;
                    if(dniFromDB==dni2){
                        cont++;
                        dine = montoFromDB.toInt()-50;
                        QTextStream(stdout) <<"good";
                        QTextStream(stdout) <<dine;
                    }

                }
            }


            if(!query.exec()){
                QMessageBox::information(this,"Fallo!","No se pudo ejecutar");
            }else{
                while(query.next()){
                    QString numeroFromDB=query.value(1).toString();
                    QString montoFromDB=query.value(4).toString();

                    if(numeroFromDB==numero_de_cuenta){
                        cont++;
                        dinero_ += montoFromDB.toInt();
                    }
                }
               /* while(query.next()){
                    QString dniFromDB=query.value(0).toString();
                    QString montoFromDB=query.value(4).toString();
                    QTextStream(stdout) <<dniFromDB;
                    if(dniFromDB==dni2){
                        cont++;
                        //dinero_ += montoFromDB.toInt();
                        QTextStream(stdout) <<dniFromDB;
                    }

                }*/

                qry.prepare("UPDATE ahorro SET monto=:monto_ WHERE numero=" + numero_de_cuenta + """");
                qry.bindValue(":monto_",dinero_);
                //qry.exec();

                if(qry.exec()){
                    QMessageBox::information(this,"Finalizado","Monto Enviado");
                    close();
                }
                else{
                    QMessageBox::information(this,"No depositado","No se pudo depositar el dinero");
                }
            }

            }



}



void depositar_dinero::setUsuario(Usuario nuevo){
    this->nuevo_perfil2=nuevo;
}

Usuario depositar_dinero::getUsuario(){
    return nuevo_perfil2;
}
