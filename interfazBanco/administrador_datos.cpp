#include "administrador_datos.h"

administrador_datos::administrador_datos()
{

}

void administrador_datos::setDatos(QString nombres,QString apellidos,QString dni){
    this->nombres=nombres;
    this->apellidos=apellidos;
    this->dni=dni;
}

QString administrador_datos::getNombreUsuario(){
    return this->nombres;
}
QString administrador_datos::getApellidoUsuario(){
    return this->apellidos;
}
QString administrador_datos::getDniUsuario(){
    return this->dni;
}
