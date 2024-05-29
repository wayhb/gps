#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    classNMEA = new ClassOfWorkWithNMEA_0183(this);
    coordinate = new CoordinateCalculationClass(this);

    connect(classNMEA, &ClassOfWorkWithNMEA_0183::ForEnteringGNSSCoordinates, coordinate, &CoordinateCalculationClass::OnForEnteringGNSSCoordinates);
    connect(coordinate, &CoordinateCalculationClass::ForObtainingTextDataInNMEA_0183WithSpecifiedCoordinates, classNMEA, &ClassOfWorkWithNMEA_0183::OnForObtainingTextDataInNMEA_0183WithSpecifiedCoordinates);

    //TODO: в чем ошибка?
    connect(ui->enterGNSS, &QLineEdit::textChanged, &classNMEA, &ClassOfWorkWithNMEA_0183::ForEnteringTextDataInNMEA_0183);

     //connect(ui->okPushButton,SIGNAL(clicked()),this,SLOT(okPressed()));//




    connect(ui->generate, SIGNAL(clicked()), this, SLOT(generate_answer()));

    //connect(this, &ClassOfWorkWithNMEA_0183::classNMEAsignal, classNMEA, &ClassOfWorkWithNMEA_0183::dataForClass);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief The method that passes data to classes
/// \code
void MainWindow::on_generate_clicked()
{
    QString enterGNSS = ui->enterGNSS->text();
    QString azimuth = ui->azimuth->text();
    QString distance = ui->distance->text();
    //TODO: как передать данные из текстлайнов в классы
    emit classNMEAsignal(azimuth, distance, enterGNSS);
}
///\endcode
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
