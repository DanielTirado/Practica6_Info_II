#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <iostream>
#include <fstream>
#include <string>

#include "cuerpo.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void Actualizar();

private slots:
    void on_sistema1_btn_clicked();

    void on_sistema2_btn_clicked();

    void on_finalizar_btn_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;

    QTimer *timer;

    QList <cuerpo*> sistema;

    bool secuencia;
    char Nsistema;
};

#endif // MAINWINDOW_H
