#ifndef COORDINATECALCULATIONCLASS_H
#define COORDINATECALCULATIONCLASS_H

#include <QObject>
#include <cmath>
/////////////
/// \brief Класс расчета координат
///
class CoordinateCalculationClass : public QObject
{
    Q_OBJECT
public:
    explicit CoordinateCalculationClass(QObject *parent = nullptr);
    QString azimuthNMEA;
    QString distanceNMEA;
    QString &latitude;
    QString &longitude;
signals:
    void ForObtainingTextDataInNMEA_0183WithSpecifiedCoordinates(const float outputLatitude, const float outputLongitude);
public slots:
    void OnForEnteringGNSSCoordinates(const QString &latitudeNMEA, const QString &longitudeNMEA);
    void ForEnteringAzimuthAndDistanceFromGNSSCoordinates(QString azimuth, QString distance);
    void MethodOfObtainingTheCalculatedCoordinates();
};

#endif // COORDINATECALCULATIONCLASS_H
