#include "coordinatecalculationclass.h"

///////////////////////
/// \brief Метод для ввода координат GNSS;
/// \param latitudeNMEA
/// \param longitudeNMEA
///
void CoordinateCalculationClass::OnForEnteringGNSSCoordinates(const QString &latitudeNMEA, const QString &longitudeNMEA)
{
    this->latitude = latitudeNMEA;
    this->longitude = longitudeNMEA;
}
///////////////////////
/// \brief Метод для ввода азимута и дальности от координат GNSS;
/// \param azimuth
/// \param distance
///
void CoordinateCalculationClass::ForEnteringAzimuthAndDistanceFromGNSSCoordinates(QString azimuth, QString distance)
{
    this->azimuthNMEA = azimuth;
    this->distanceNMEA = distance;
}
////////////////////////
/// \brief CoordinateCalculationClass::Метод получения рассчитанных координат.
///
void CoordinateCalculationClass::MethodOfObtainingTheCalculatedCoordinates()
{
    //TODO: почему тут ошибки?
    float dx = distanceNMEA.toFloat() * cos(azimuthNMEA.toDouble());
    float dy = distanceNMEA.toFloat() * sin(azimuthNMEA.toDouble());
    float outputLatitude = latitude.toFloat() + dx;
    float outputLongitude = longitude.toFloat() + dy;


}
