#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//incluyendo librerias sql
#include<QtSql>
#include<QSqlDatabase>
//incluye mensajes cajas de mensaje
#include<QMessageBox>
#include "eligecuenta.h"
#include "ahorro.h"
#include "usuario.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow,Usuario
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    //editar----------------------
    //void setUsuario(Usuario);
    //Usuario getUsuario();
    ~MainWindow();


private slots:
    void on_boton_registro_clicked();

    void on_boton_login_clicked();

    void on_salir_main_clicked();

private:
    Ui::MainWindow *ui;
    //editar---------
    Usuario nuevo;
    //Usuario nombre_perfil;


};
#endif // MAINWINDOW_H
