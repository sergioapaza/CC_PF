#ifndef DEPOSITAR_DINERO_H
#define DEPOSITAR_DINERO_H

#include <QDialog>

#include <usuario.h>

#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class depositar_dinero;
}

class depositar_dinero : public QDialog
{
    Q_OBJECT

public:
    explicit depositar_dinero(QWidget *parent = nullptr);
    ~depositar_dinero();
    void setUsuario(Usuario);
    Usuario getUsuario();

private slots:
    //void on_pushButton_clicked();

    void on_deposito_salir_clicked();

    void on_pushButton_depositar_clicked();

private:
    Ui::depositar_dinero *ui;
    Usuario nuevo_perfil2;
};

#endif // DEPOSITAR_DINERO_H
