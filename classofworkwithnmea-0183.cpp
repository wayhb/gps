#include "classofworkwithnmea-0183.h"
#include <string>

ClassOfWorkWithNMEA-0183::ClassOfWorkWithNMEA-0183()
{
    /*•	Метод для ввода текстовых данных в формате NMEA-0183;
•	Метод получения оригинальных географических координат из данных в формате NMEA-0183;
•	Метод для ввода измененных координат;
•	Метод получения текстовых данных в формате NMEA-0183 с заданными координатами.
*/
    public void EnterDataNMEA-0183()
    {
        //кнопка поиска
    }
    public void //Метод получения оригинальных географических координат из данных в формате NMEA-0183;
    {
        string stringInNMEA-0183 = "$GPGLL,5546.95900,N,03740.69200,E,102030.000,A,A*FF/r/n";
        string latitude = stringInNMEA-0183.substr(7, 10);
        string latitudeDirection = stringInNMEA-0183.substr(18, 1);
        string longitude = stringInNMEA-0183.substr(20, 11);
        string longitudeDirection = stringInNMEA-0183.substr(32, 1);
        string time = stringInNMEA-0183.substr(34, 10);
        string reliability = stringInNMEA-0183.substr(45, 1);

    }
    public void//Метод для ввода измененных координат;
            {
        //кнопка с текст боксом
        }
    public void //Метод получения текстовых данных в формате NMEA-0183 с заданными координатами.
    {

    }
}
