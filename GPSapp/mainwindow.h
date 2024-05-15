#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include "classofworkwithnmea_0183.h"
#include "coordinatecalculationclass.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void classNMEAsignal(QString azimuth, QString distance, QString inputGNSS);
    void coordinateSignal();

    void testSignal(QString,QString);//
private slots:
   void generateClicked();

   void okPressed();//
   void on_generate_clicked();

private:

   ClassOfWorkWithNMEA_0183 *classNMEA {};
   CoordinateCalculationClass *coordinate {};
   Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

