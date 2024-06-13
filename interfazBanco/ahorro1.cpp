#include "ahorro1.h"
#include "ui_ahorro1.h"
#include "ahorro.h"

#include <QMessageBox>

Ahorro1::Ahorro1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ahorro1)
{
    ui->setupUi(this);
}

Ahorro1::~Ahorro1()
{
    delete ui;
}

void Ahorro1::on_atras_clicked()
{
    Ahorro a1;
    hide();
    a1.setModal(true);
    a1.exec();
}


void Ahorro1::on_finalizar_clicked()
{
    QString dni;
    dni=ui->dni->text();
    nuevo3.setDni(dni);

    //estableciendo conexion a la base de datos (MySql)
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

    if(db.open()){
        QMessageBox::information(this,"Conectado","Conexion exitosa");
        //recibiendo y almacenando los datos de los inputs
        QString username=nuevo3.getUsername();
        QString password=nuevo3.getPasssword();
        QString email=nuevo3.getCorreo();
        QString nombres=nuevo3.getNombres();
        QString apellidos=nuevo3.getApellidos();
        QString tipoMoneda=nuevo3.getTipoMoneda();
        QString numeroTelefono=nuevo3.getNumeroTelefono();
        QString tipoCuenta=nuevo3.getTipoCuenta();
        QString dni=nuevo3.getDni();
        QString departamento=nuevo3.getDepartamento();


        //enviando los datos a la base de datos
        //A PARTIR DE ESTA PARTE CAMBIARE LA FORMA DE INGRESAR LOS DATOS A LA BASE DE DATOS------

        QSqlQuery qry,qry1;
        qry.prepare("INSERT INTO users(username, password, nombres,apellidos,email,dni,numero)"
                    "VALUES (:username, :password, :nombres, :apellidos, :email,:dni,:numeroTelefono)");

        qry.bindValue(":username",username);
        qry.bindValue(":password",password);
        qry.bindValue(":nombres",nombres);
        qry.bindValue(":apellidos",apellidos);
        qry.bindValue(":email",email);
        qry.bindValue(":dni",dni);
        qry.bindValue(":numeroTelefono",numeroTelefono);
        //aca se puede agregar una validacion usando el tipo de cuenta
        qry1.prepare("INSERT INTO ahorro(identificador, moneda,departamento)"
                    "VALUES (:dni, :tipoMoneda,:departamento)");

        qry1.bindValue(":dni",dni);
        qry1.bindValue(":tipoMoneda",tipoMoneda);
        qry1.bindValue(":departamento",departamento);

        if((qry.exec())&&(qry1.exec())){
            QMessageBox::information(this,"Finalizado","Usuario registrado correctamente");

            close();


        }else{
            QMessageBox::information(this,"No ingresado","El usuario no se pudo registrar");
        }


    }else{
        QMessageBox::information(this,"No conectado","Conexion Fallida");
    }

}

void Ahorro1::setUsuario(Usuario nuevo){
    nuevo3=nuevo;
}

Usuario Ahorro1::getUsuario(){
    return nuevo3;
}
