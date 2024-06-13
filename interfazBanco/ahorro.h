#ifndef AHORRO_H
#define AHORRO_H

#include <QDialog>

//incluyendo librerias sql
#include<QtSql>
#include<QSqlDatabase>

#include "usuario.h"
namespace Ui {
class Ahorro;
}

class Ahorro : public QDialog, Usuario
{
    Q_OBJECT

public:
    explicit Ahorro(QWidget *parent = nullptr);
    //editar
    void setUsuario(Usuario);
    Usuario getUsuario();
    //----------------------
    ~Ahorro();

private slots:
    void on_btnVentanaAhorro_clicked();

    void on_btnVentanaElegir_clicked();

private:
    Ui::Ahorro *ui;
    //editar
    Usuario nuevo2;
};

#endif // AHORRO_H
