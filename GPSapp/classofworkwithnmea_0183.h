#ifndef CLASSOFWORKWITHNMEA_0183_H
#define CLASSOFWORKWITHNMEA_0183_H

#include <QObject>

class ClassOfWorkWithNMEA_0183 : public QObject
{
    Q_OBJECT
public:
    explicit ClassOfWorkWithNMEA_0183(QObject *parent = nullptr);

signals:
    /*
    •	Метод для ввода текстовых данных в формате NMEA-0183;
    •	Метод получения оригинальных географических координат из данных в формате NMEA-0183;
    •	Метод для ввода измененных координат;
    •	Метод получения текстовых данных в формате NMEA-0183 с заданными координатами.
*/
public slots:

    void dataForClass(QString azimuth, QString distance, QString inputGNSS);
};

#endif // CLASSOFWORKWITHNMEA_0183_H
