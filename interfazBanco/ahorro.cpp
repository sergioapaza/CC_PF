#include "ahorro.h"
#include "ui_ahorro.h"
#include<QMessageBox>
#include<eligecuenta.h>
#include "ahorro1.h"
//editar


#include <QRadioButton>
Ahorro::Ahorro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ahorro)
{
    ui->setupUi(this);
    //ejemplo items
/*
    QStringList regiones;
    regiones<<"Chile"<<"Colombia"<<"Ecuador";
    ui->opcionesRegion->addItems(regiones);
*/
}

Ahorro::~Ahorro()
{
    delete ui;
}
//boton para continuar
void Ahorro::on_btnVentanaAhorro_clicked()
{
    QString region;
    region=ui->opcionesRegion->currentText();
    //QMessageBox::information(this, "alerta",ui->opcionesRegion->currentText());
    //edicion------------------------------
    //recogiendo y almacenando datos de los inputs
    QString nombres=ui->nombres->text();
    QString apellidos=ui->apellidos->text();
    QString celular=ui->celular->text();
    QString tipoMoneda;
    //recogiendo datos del radio-button
    if(ui->soles->isCheckable()){
        tipoMoneda="Soles";
    }else if(ui->dolares->isCheckable()){
        tipoMoneda="Dólares";
    }
    //ME QUEDE AQUI---------------------------------------------------------------
/*
    nuevo->setNombres(nombres);
    nuevo->setApellidos(apellidos);
*/
    //editar-------------------------------
    nuevo2.setDepartamento(region);
    nuevo2.setNombres(nombres);
    nuevo2.setApellidos(apellidos);
    nuevo2.setNumeroTelefono(celular);
    nuevo2.setTipoMoneda(tipoMoneda);



    //solo faltaria enviarlo a la base de datos
    //estableciendo conexion a la base de datos (MySql)
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

    if(db.open()){
        QMessageBox::information(this,"Conectado","Conexion exitosa");
        /*
        //enviando los datos a la base de datos
        QSqlQuery qry;
        qry.prepare("INSERT INTO users(nombres, apellidos,numero)"
                    "VALUES (:nombres, :apellidos, :celular)");

        qry.bindValue(":nombres",nombres);
        qry.bindValue(":apellidos",apellidos);
        qry.bindValue(":celular",celular);


        if(qry.exec()){
            QMessageBox::information(this,"Correcto","Datos ingresados correctamente");
*/
            //aqui poner----------
            Ahorro1 a1;
            //editar----
            a1.setUsuario(nuevo2);
            hide();
            a1.setModal(true);
            a1.exec();

/*
        }else{
            QMessageBox::information(this,"No ingresado","No se pudo registrar los datos");
        }
*/
    }else{
        QMessageBox::information(this,"No conectado","Conexion Fallida");
    }

}

//boton para retroceder
void Ahorro::on_btnVentanaElegir_clicked()
{
    EligeCuenta a1;
    hide();
    a1.setModal(true);
    a1.exec();
}
//editar----------------------
void Ahorro::setUsuario(Usuario nuevo){
    nuevo2=nuevo;
}

Usuario Ahorro::getUsuario(){
    return nuevo2;
}

