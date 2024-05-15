#ifndef GPSCOORDINATES_H
#define GPSCOORDINATES_H

#include "GPSCoordinates_global.h"
#include <QDialog>

class GPSCOORDINATES_EXPORT GPSCoordinates: public QDialog
{
public:
    explicit GPSCoordinates(QWidget* parent = nullptr);
};

#endif // GPSCOORDINATES_H

