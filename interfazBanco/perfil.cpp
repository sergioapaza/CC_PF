#include "perfil.h"
#include "ui_perfil.h"

#include <QVBoxLayout>
#include <QLabel>

#include "mainwindow.h"
#include "QMainWindow"
#include <QApplication>
#include "depositar_dinero.h"

#include <QString>

#include "usuario.h""


Perfil::Perfil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Perfil)

{

    ui->setupUi(this);


  //eliminado


    //variable globales
    QString dniFromDB;
    //QString usernameFromDB;
    QString tipoMonedaDB;
    QString departamentoDB;
    //QString nombresDB=nuevo_perfil.getNombreBD();
    QString apellidosDB=getApellidoUsuario();
    QString montoDB="Ninguno";
    QString numeroCuentaFromDB;
    //
    //ui->nombre->setText("Hola "+nombresDB);
    //ui->nombre->setText(nombresDB);




    //recibiendo datos de la base de datos
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

    if(db.open()){
        //QMessageBox::information(this,"Conexión exitosa","Se conecto a la base de datos");
        //

        QSqlQuery query(QSqlDatabase::database("MiConexion"));

        query.prepare(QString("SELECT * FROM ahorro"));

        //query.ValuesAsRows();

        if(!query.exec()){
            QMessageBox::information(this,"Fallo!","No se pudo ejecutar");
        }else{
            while(query.next()){

                dniFromDB=query.value(0).toString();
                if(dniFromDB==getDniUsuario()){
                    //cambio para mostrarlo en la pantalla del perfil
                    numeroCuentaFromDB=query.value(1).toString();
                    tipoMonedaDB=query.value(2).toString();
                    departamentoDB=query.value(3).toString();
                    montoDB=query.value(4).toString();

                    //segunda parte


                    QVBoxLayout * lay = new QVBoxLayout(this);
                    for(int i=0;i<10;i++){
                        //QLabel *nombres= new QLabel(nombresDB);
                        QLabel *apellidos= new QLabel(apellidosDB);
                        QLabel *moneda= new QLabel(tipoMonedaDB);
                        QLabel *departamento= new QLabel(departamentoDB);
                        QLabel *monto= new QLabel(montoDB);
                        //lay->addWidget(nombres);
                        lay->addWidget(apellidos);
                        lay->addWidget(moneda);
                        lay->addWidget(departamento);
                        lay->addWidget(monto);
                    }
                    ui->scrollAreaWidgetContents->setLayout(lay);

                }

            }
        }

    }else{
        QMessageBox::information(this,"Conexión fallida","No se pudo conectar a las base de datos");
    }



/*
    //segunda parte
    ui->setupUi(this);
    QVBoxLayout * lay = new QVBoxLayout(this);
    for(int i=0;i<10;i++){
        QLabel *username= new QLabel(usernameFromDB);
        QLabel *moneda= new QLabel(tipoMonedaDB);
        QLabel *departamento= new QLabel(departamentoDB);
        QLabel *nombres= new QLabel(nombresDB);
        QLabel *apellidos= new QLabel(apellidosDB);
        QLabel *monto= new QLabel(montoDB);
        lay->addWidget(username);
        lay->addWidget(moneda);
        lay->addWidget(departamento);
        lay->addWidget(nombres);
        lay->addWidget(apellidos);
        lay->addWidget(monto);
    }
    ui->scrollAreaWidgetContents->setLayout(lay);
*/

}


Perfil::~Perfil()
{
    delete ui;
   // delete username;

}

void Perfil::on_btnMenu_clicked()
{
    close();

}


void Perfil::setDatos(QString nombres,QString apellidos,QString dni){
    this->nombresUsuario=nombres;
    this->apellidosUsuario=apellidos;
    this->dniUsuario=dni;
}
/*
QString Perfil::getUsername(){
    return dni;
}
*/
QString Perfil::getNombreUsuario(){
    return nombresUsuario;
}
QString Perfil::getApellidoUsuario(){
    return apellidosUsuario;
}
QString Perfil::getDniUsuario(){
    return dniUsuario;
}

void Perfil::on_pushButton_7_clicked()
{
    depositar_dinero window;
    //editar----------------
    //hide();
    QString dni_a = nuevo_perfil.getDniBD();
    window.setUsuario(nuevo_perfil);
    window.setModal(true);
    window.exec();
}

void Perfil::setUsuario(Usuario nuevo){
    this->nuevo_perfil=nuevo;
}

Usuario Perfil::getUsuario(){
    return nuevo_perfil;
}

void Perfil::mostrar(){
    QString nombresDB=nuevo_perfil.getNombreBD();
    ui->nombre->setText(nombresDB);
}
/*
void Perfil::setUsua(Usuario nuevo){
    nombre_perfil2=nuevo;
}*/

