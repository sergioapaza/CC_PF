#include "mainwindow.h"
#include "ui_mainwindow.h"
//incluyendo la ventana elige cuenta
#include "perfil.h"
//edicion
#include "usuario.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //SE DEFINEN LOS PLACEHOLDERS DEL FORMULARIO REGISTRO
    ui->nombre_usuario->setPlaceholderText("Ingrese un nombre de usuario...");
    ui->contrasenia->setPlaceholderText("Ingrese una contraseña... ");
    ui->email->setPlaceholderText("Ingrese un correo...");
    //SE DEFINEN LOS PLACEHOLDERS DEL FORMULARIO LOGIN
    ui->nombre_usuario_login->setPlaceholderText("Ingrese su nombre de usuario: ");
    ui->contrasenia_login->setPlaceholderText("Ingrese su contraseña: ");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_boton_registro_clicked()
{


    //estableciendo conexion a la base de datos (MySql)
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

    QString username=ui->nombre_usuario->text();
    QString password=ui->contrasenia->text();
    QString email=ui->email->text();

    if(email.contains('@',Qt::CaseInsensitive)==true){
        if(db.open()){
            QMessageBox::information(this,"Conectado","Conexion exitosa");
            //recibiendo y almacenando los datos de los inputs

            nuevo.setUsername(username);
            nuevo.setPassword(password);
            nuevo.setCorreo(email);
            //QMessageBox::information(this,"Datos",nuevo.getUsername());

            //enviando los datos a la base de datos
            //A PARTIR DE ESTA PARTE CAMBIARE LA FORMA DE INGRESAR LOS DATOS A LA BASE DE DATOS------
            /*
            QSqlQuery qry;
            qry.prepare("INSERT INTO users(username, password, email)"
                        "VALUES (:username, :password, :email)");

            qry.bindValue(":username",username);
            qry.bindValue(":password",password);
            qry.bindValue(":email",email);


            if(qry.exec()){
                QMessageBox::information(this,"Ingresado","Usuario registrado correctamente");
            */
                //aqui poner----------
                EligeCuenta cuentas;
                //editar----------------
                cuentas.setUsuario(nuevo);
                //hide();
                cuentas.setModal(true);
                cuentas.exec();

    /*
            }else{
                QMessageBox::information(this,"No ingresado","El usuario no se pudo registrar");
            }

    */
        }else{
            QMessageBox::information(this,"No conectado","Conexion Fallida");
        }
    }
    else{
        QMessageBox::warning(this,"Error","El email debe contener un @");
    }
}



void MainWindow::on_boton_login_clicked()
{
    //estableciendo conexion a la base de datos (MySql)
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QODBC","MiConexion");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("Driver={MySQL ODBC 8.0 ANSI Driver};DataBase=qt;");

    //almacenando en variable los datos que se envian en los inputs del
    //login
    QString username=ui->nombre_usuario_login->text();
    QString password=ui->contrasenia_login->text();

    if(db.open()){
        //QMessageBox::information(this,"Conexión exitosa","Se conecto a la base de datos");
        //
        int cont=0;
        QSqlQuery query(QSqlDatabase::database("MiConexion"));

        query.prepare(QString("SELECT * FROM users WHERE username = :username AND password = :password"));

        query.bindValue(":username",username);
        query.bindValue(":password",password);
        if(!query.exec()){
            QMessageBox::information(this,"Fallo!","No se pudo ejecutar");
        }else{
            while(query.next()){
                QString usernameFromDB=query.value(1).toString();
                QString passwordFromDB=query.value(2).toString();
                //adicion

                QString nombresDB=query.value(3).toString();
                QString apellidosDB=query.value(4).toString();
                QString dniDB=query.value(6).toString();

                if(usernameFromDB==username && passwordFromDB==password){
                    cont++;
                    QMessageBox::information(this,"Correcto","Se inicio sesión correctamente");
                    Perfil perfil;
                    //hide();

                    //VARIACION
                    //perfil.setDatos(nombresDB,apellidosDB,dniDB);
                    Usuario nuevo1;
                    nuevo1.setNombreBD(nombresDB);
                    nuevo1.setApellidosBD(apellidosDB);
                    nuevo1.setDniBD(dniDB);
                    perfil.setUsuario(nuevo1);
                    //perfil.setUsua(nombre_perfil);
                    perfil.setModal(true);
                    perfil.mostrar();
                    perfil.exec();

                }

            }
            if(cont==0){
                QMessageBox::information(this,"Fallo","No se pudo iniciar sesión");
            }
        }

    }else{
        QMessageBox::information(this,"Conexión fallida","No se pudo conectar a las base de datos");
    }

}


void MainWindow::on_salir_main_clicked()
{
    close();
}

