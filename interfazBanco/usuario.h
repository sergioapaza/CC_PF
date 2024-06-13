#include<iostream>
#include<QString>
//#include "mainwindow.h"
#ifndef USUARIO_H
#define USUARIO_H
using namespace std;
//edicion

class Usuario
{
protected:
    //Usuario *nuevo=new Usuario;
private:
    //datos normales-----------------
    QString username;
    QString password;
    QString nombres;
    QString apellidos;
    int edad;
    QString correo;
    QString tipoMoneda;
    QString numeroTelefono;
    QString tipoCuenta;
    QString dni;
    //string provincia;
    QString departamento;
    //datos de la Base de Datos---------------------
    QString nombreBD;
    QString apellidoBD;
    QString dniBD;

public:
    Usuario();
    //constructor copia------------------------
    //Usuario(const Usuario &otro);
    //set------------------
    void setUsername(QString);
    void setPassword(QString);

    void setNombres(QString);
    void setApellidos(QString);
    void setEdad(int);
    void setCorreo(QString);
    void setTipoMoneda(QString);
    void setNumeroTelefono(QString);
    void setTipoCuenta(QString);
    void setDni(QString);
    void setDepartamento(QString);
    //void setDatos(QString,QString,QString);
    //edicion
    void setNombreBD(QString);
    void setApellidosBD(QString);
    void setDniBD(QString);

    //getssss
    QString getUsername();
    QString getPasssword();


    QString getNombres();
    QString getApellidos();
    int getEdad();
    QString getCorreo();
    QString getTipoMoneda();
    QString getNumeroTelefono();
    QString getTipoCuenta();
    QString getDni();
    QString getProvincia();
    QString getDepartamento();
    //edicion
    QString getNombreBD();
    QString getApellidosBD();
    QString getDniBD();
    //sobrecarga
/*
    void operator=(const Usuario a1){
        nombres=a1.nombres;
        apellidos=a1.apellidos;
        edad=a1.edad;
        correo=a1.correo;
        tipoMoneda=a1.tipoMoneda;
        numeroTelefono=a1.numeroTelefono;
        tipoCuenta=a1.tipoCuenta;
        dni=a1.dni;
        departamento=a1.departamento;

    }
*/
};


#endif // USUARIO_H
