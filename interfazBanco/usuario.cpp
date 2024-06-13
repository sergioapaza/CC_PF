#include "usuario.h"
Usuario::Usuario()
{

}
//edicion
/*
Usuario::Usuario(const Usuario &otro){
    nombres=otro.nombres;
    apellidos=otro.apellidos;
    edad=otro.edad;
    correo=otro.correo;
    tipoMoneda=otro.tipoMoneda;
    numeroTelefono=otro.numeroTelefono;
    tipoCuenta=otro.tipoCuenta;
    dni=otro.dni;
    departamento=otro.departamento;
}
*/
//set------------------
void Usuario::setNombres(QString nombres){
    this->nombres=nombres;
}
void Usuario::setApellidos(QString apellidos){
    this->apellidos=apellidos;
}

void Usuario::setUsername(QString username){
    this->username=username;
}
void Usuario::setPassword(QString password){
    this->password=password;
}

void Usuario::setEdad(int edad){
    this->edad=edad;
}
void Usuario::setCorreo(QString correo){
    this->correo=correo;
}
void Usuario::setTipoMoneda(QString tipoMoneda){
    this->tipoMoneda=tipoMoneda;
}
void Usuario::setNumeroTelefono(QString numeroTelefono){
    this->numeroTelefono=numeroTelefono;
}
void Usuario::setTipoCuenta(QString tipoCuenta){
    this->tipoCuenta=tipoCuenta;
}
void Usuario::setDni(QString dni){
    this->dni=dni;
}
void Usuario::setDepartamento(QString departamento){
    this->departamento=departamento;
}
//BASE DE DATOS
void Usuario::setNombreBD(QString nombreBD){
    this->nombreBD=nombreBD;
}

void Usuario::setApellidosBD(QString apellidoBD){
    this->apellidoBD=apellidoBD;
}

void Usuario::setDniBD(QString dniBD){
    this->dniBD=dniBD;
}
//getssss---------
QString Usuario::getNombres(){
    return nombres;
}
QString Usuario::getApellidos(){
    return apellidos;
}

QString Usuario::getUsername(){
    return username;
}
QString Usuario::getPasssword(){
    return password;
}


int Usuario::getEdad(){
    return edad;
}
QString Usuario::getCorreo(){
    return correo;
}
QString Usuario::getTipoMoneda(){
    return tipoMoneda;
}
QString Usuario::getNumeroTelefono(){
    return numeroTelefono;
}
QString Usuario::getTipoCuenta(){
    return tipoCuenta;
}
QString Usuario::getDni(){
    return dni;
}
QString Usuario::getDepartamento(){
    return departamento;
}
//BASE DE DATOS
QString Usuario::getNombreBD(){
    return nombreBD;
}
QString Usuario::getApellidosBD(){
    return apellidoBD;
}
QString Usuario::getDniBD(){
    return dniBD;
}
/*
void Usuario::setDatos(QString nombres,QString apellidos,QString dni){
    this->nombres=nombres;
    this->apellidos=apellidos;
    this->dni=dni;
}
*/


