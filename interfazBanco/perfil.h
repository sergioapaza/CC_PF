#ifndef PERFIL_H
#define PERFIL_H

#include <QDialog>
#include "usuario.h"


namespace Ui {
class Perfil;
}

class Perfil : public QDialog
{
    Q_OBJECT

public:
    explicit Perfil(QWidget *parent = nullptr);
    //editar
    void setDatos(QString,QString,QString);
    QString getNombreUsuario();
    QString getApellidoUsuario();
    QString getDniUsuario();
    //void setUsua(Usuario);
    //Usuario getUsuario();
    //QString getUsername();
    void setUsuario(Usuario);
    Usuario getUsuario();
    void mostrar();

    ~Perfil();

private slots:
    void on_btnMenu_clicked();

    void on_pushButton_7_clicked();
private:
    Ui::Perfil *ui;
    //editar
    QString nombresUsuario;
    QString apellidosUsuario;
    QString dniUsuario;
    Usuario nuevo_perfil;
    //Usuario nombre_perfil2;

};

#endif // PERFIL_H
