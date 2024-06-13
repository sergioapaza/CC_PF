#ifndef ADMINISTRADOR_DATOS_H
#define ADMINISTRADOR_DATOS_H
#include <QString>

class administrador_datos
{
public:
    administrador_datos();
    void setDatos(QString,QString,QString);
    QString getNombreUsuario();
    QString getApellidoUsuario();
    QString getDniUsuario();
private:
    QString nombres;
    QString apellidos;
    QString dni;
};

#endif // ADMINISTRADOR_DATOS_H
