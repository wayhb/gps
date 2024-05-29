#include "classofworkwithnmea_0183.h"
/*
ClassOfWorkWithNMEA_0183::ClassOfWorkWithNMEA_0183(QObject *parent) : QObject(parent)
{

}
*/
//Метод для ввода текстовых данных в формате NMEA-0183;
void ClassOfWorkWithNMEA_0183::ForEnteringTextDataInNMEA_0183(QString inputGNSS)
{
    this->inputGNSSNMEA = inputGNSS;
}

//Метод получения оригинальных географических координат из данных в формате NMEA-0183;
void ClassOfWorkWithNMEA_0183::ForObtainingOriginalGeographicalCoordinatesFromDataInNMEA_0183()
{
   this->latitudeNMEA = (inputGNSSNMEA.mid(20, 10)).toFloat();
   this->longitudeNMEA = (inputGNSSNMEA.mid(33, 11)).toFloat();
}

//Метод для ввода измененных координат;
void ClassOfWorkWithNMEA_0183::ForEnteringTheChangedCoordinates()
{
    //TODO:  что делает этот метод????????
    // из обычных координат делает строку в формате NMEA-0183????
    //$GPRMC,125504.049,A,5542.2389,N,03741.6063,E,0.06,25.82,200906,,,*17
    outputGNSS->setOutputText("%{inputGNSSNMEA.mid(0, 19)},%{outputLatitudeNMEA},%{inputGNSSNMEA.mid(30, 1)},%{outputLongitudeNMEA},%{inputGNSSNMEA.mid(43, до конца)}");
}

//Метод получения текстовых данных в формате NMEA-0183 с заданными координатами.
void ClassOfWorkWithNMEA_0183::OnForObtainingTextDataInNMEA_0183WithSpecifiedCoordinates(const float &outputLatitude, const float &outputLongitude)
{
    this->outputLatitudeNMEA = outputLatitude;
    this->outputLongitudeNMEA = outputLongitude;

}


