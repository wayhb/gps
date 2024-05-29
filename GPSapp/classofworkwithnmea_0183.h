#ifndef CLASSOFWORKWITHNMEA_0183_H
#define CLASSOFWORKWITHNMEA_0183_H

#include <QObject>
#include <string>
///////////////////
/// \brief Класс работы с NMEA-0183
///
class ClassOfWorkWithNMEA_0183 : public QObject
{
    Q_OBJECT
public:
    explicit ClassOfWorkWithNMEA_0183(QObject *parent = nullptr);
  
    QString inputGNSSNMEA;
    float latitudeNMEA;
    float longitudeNMEA;
    float &outputLatitudeNMEA;
    float &outputLongitudeNMEA;

signals:
    void ForEnteringGNSSCoordinates(const QString &latitudeNMEA, const QString &longitudeNMEA);
    /*
    •	Метод для ввода текстовых данных в формате NMEA-0183;
    •	Метод получения оригинальных географических координат из данных в формате NMEA-0183;
    •	Метод для ввода измененных координат;
    •	Метод получения текстовых данных в формате NMEA-0183 с заданными координатами.
*/
public slots:

    void ForEnteringTextDataInNMEA_0183(QString inputGNSS);
    void ForObtainingOriginalGeographicalCoordinatesFromDataInNMEA_0183();
    void ForEnteringTheChangedCoordinates();
    void OnForObtainingTextDataInNMEA_0183WithSpecifiedCoordinates(const float &outputLatitude, const float &outputLongitude);
    
};

#endif // CLASSOFWORKWITHNMEA_0183_H
