#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    classNMEA = new ClassOfWorkWithNMEA_0183(this);
    coordinate = new CoordinateCalculationClass(this);




     //connect(ui->okPushButton,SIGNAL(clicked()),this,SLOT(okPressed()));//




    //connect(ui->generate, SIGNAL(clicked()), this, SLOT(generate_answer()));

    //connect(this, &ClassOfWorkWithNMEA_0183::classNMEAsignal, classNMEA, &ClassOfWorkWithNMEA_0183::dataForClass);
}

MainWindow::~MainWindow()
{
    delete ui;
}


 /*
void MainWindow::okPressed(){
    emit testSignal(ui->lastLineEdit->text(),ui->firstLineEdit->text());
    this->close();
}
*/


void MainWindow::on_generate_clicked()
{
    QString enterGNSS = ui->enterGNSS->text();
    QString azimuth = ui->azimuth->text();
    QString distance = ui->distance->text();

    emit classNMEAsignal(azimuth, distance, enterGNSS);
}
