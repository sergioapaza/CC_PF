#include "eligecuenta.h"
#include "ahorro.h"
#include "ui_eligecuenta.h"
//edicion
#include "usuario.h"



EligeCuenta::EligeCuenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EligeCuenta)
{
    ui->setupUi(this);
}


EligeCuenta::~EligeCuenta()
{
    delete ui;
}

void EligeCuenta::on_btncuentaAhorros_clicked()
{
    //aqui poner----------

    //edit---------
    QString tipoCuenta="Ahorros";
    //a1.setTipoCuenta(tipoCuenta);
    //editar------------------------------
    nuevo1.setTipoCuenta(tipoCuenta);
    //---------------
    Ahorro cuentaAhorro;
    //editar-------------
    cuentaAhorro.setUsuario(nuevo1);
    hide();
    cuentaAhorro.setModal(true);
    cuentaAhorro.exec();
}


void EligeCuenta::on_btnMenu_clicked()
{
    close();
}

//editar----------------------
void EligeCuenta::setUsuario(Usuario nuevo){
    nuevo1=nuevo;
}

Usuario EligeCuenta::getUsuario(){
    return nuevo1;
}
