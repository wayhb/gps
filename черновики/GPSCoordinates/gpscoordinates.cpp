#include "gpscoordinates.h"

#include <QLabel>
#include <QGridLayout>

GPSCoordinates::GPSCoordinates(QWidget* parent) : QDialog(parent)
{
    QGridLayout* gridLayout = new QGridLayout(this);
    setLayout(gridLayout);
    gridLayout->addWidget(new QLabel("Hello world from dynamic library", this));
}

