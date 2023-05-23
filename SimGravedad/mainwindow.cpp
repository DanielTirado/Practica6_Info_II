#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(-300, -400, 600, 800);
    ui->graphicsView->setScene(scene);

    secuencia = false;

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(Actualizar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Actualizar()
{
    int j=0,r=0;
    float masa, posx, posy;

    for (r=0 ; r<50 ; r++)
    {
        for (j=0 ; j < sistema.length(); j++)
        {
                for (int i=0; i < sistema.length(); i++){
                    if (sistema[i] != sistema[j]){
                        masa = sistema[i]->getMasa();
                        posx = sistema[i]->getX();
                        posy = sistema[i]->getY();
                        sistema[j]->aceleracion(masa, posx, posy);
                    }

                }
                sistema[j]->velocidades();
                sistema[j]->posiciones();

                sistema[j]->setAx(0);
                sistema[j]->setAy(0);
        }
    }

    string namefile;

    if (Nsistema == '1') namefile = "sistema1";
    else namefile = "sistema2";

    ofstream archivo(namefile);
    for (int i=0; i < sistema.length(); i++){
        archivo << sistema[i]->getX() << "/t";
        archivo << sistema[i]->getY() << "/t";
    }
    archivo << endl;
    archivo.close();
}


void MainWindow::on_sistema1_btn_clicked()
{
    timer->start(33);
    if(!secuencia){

        sistema.append(new cuerpo(0,-7000,70,120,2,0));
        scene->addItem(sistema.last());

        sistema.append(new cuerpo(0,0,70000,300,0,0));
        scene->addItem(sistema.last());

        sistema.append(new cuerpo(4000,5000,25,100,-1.6,1.2));
        scene->addItem(sistema.last());

        secuencia = true;
    }

    Nsistema = '1';
}

void MainWindow::on_sistema2_btn_clicked()
{
    timer->start(33);
    if(!secuencia){

        sistema.append(new cuerpo(0,0,50000,200,0,0));
        scene->addItem(sistema.last());

        sistema.append(new cuerpo(-5000,0,70,70,0,-2));
        scene->addItem(sistema.last());

        sistema.append(new cuerpo(5000,0,70,70,0,2));
        scene->addItem(sistema.last());

        sistema.append(new cuerpo(0,-5000,70,70,2,0));
        scene->addItem(sistema.last());

        sistema.append(new cuerpo(0,5000,70,70,-2,0));
        scene->addItem(sistema.last());


        secuencia = true;
    }
    Nsistema = '2';
}

void MainWindow::on_finalizar_btn_clicked()
{
    int i=0;

    timer->stop();

    for (i=0 ; i < sistema.length() ; i++)
        scene->removeItem(sistema[i]);

    sistema.clear();

    secuencia = false;
}
