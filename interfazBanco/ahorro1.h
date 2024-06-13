#ifndef AHORRO1_H
#define AHORRO1_H

#include <QDialog>

#include "usuario.h"
namespace Ui {
class Ahorro1;
}

class Ahorro1 : public QDialog
{
    Q_OBJECT

public:
    explicit Ahorro1(QWidget *parent = nullptr);
    //editar
    void setUsuario(Usuario);
    Usuario getUsuario();
    ~Ahorro1();

private slots:
    void on_atras_clicked();

    void on_finalizar_clicked();

private:
    Ui::Ahorro1 *ui;
    //editar
    Usuario nuevo3;
};

#endif // AHORRO1_H
