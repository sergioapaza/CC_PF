#ifndef ELIGECUENTA_H
#define ELIGECUENTA_H
//edicion
#include "usuario.h"



#include <QDialog>


namespace Ui {
class EligeCuenta;
}

class EligeCuenta : public QDialog,Usuario
{
    Q_OBJECT

public:
    explicit EligeCuenta(QWidget *parent = nullptr);
    //editar
    void setUsuario(Usuario);
    Usuario getUsuario();

    ~EligeCuenta();

private slots:
    void on_btncuentaAhorros_clicked();

    void on_btnMenu_clicked();

private:
    Ui::EligeCuenta *ui;
    //editar
    Usuario nuevo1;
};

#endif // ELIGECUENTA_H
