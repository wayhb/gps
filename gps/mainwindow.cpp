#include <QtWidgets>
#include "ui_mainwindow.h"
#include "mainwindow.h"
GenerateDialog::GenerateDialog(QWidget *parent):QMainWindow(parent),
    ui(new Ui::GenerateDialog)
{
    ui->setupUi(this);
}

/*
GenerateDialog::GenerateDialog(QWidget *parent): QDialog(parent){
    label = new QLabel(tr("азимут и долгота"));

    generateButton = new QPushButton(tr("&Generate"));
    generateButton->setDefault(true);

    closeButton = new QPushButton(tr("&Close"));


    connect(generateButton, SIGNAL(clicked()), this, SLOT(generateClicked()));
    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

    QVBoxLayout *rightLayout = new QVBoxLayout();
    rightLayout->addWidget(generateButton);
    rightLayout->addWidget(closeButton);
    rightLayout->addStretch();

    QHBoxLayout *mainLayout = new QHBoxLayout();
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    setWindowTitle("generate");


}
*/

void GenerateDialog::generateClicked()
{

}
void GenerateDialog::on_generate_clicked()
{
    QString enterGNSS = ui->enterGNSS->text();
    QString azimuth = ui->azimuth->text();
    QString distance = ui->distance->text();
}
