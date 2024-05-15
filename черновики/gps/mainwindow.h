#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>

class QLabel;
class QPushButton;

class GenerateDialog : public QDialog
{
    Q_OBJECT

public:
    GenerateDialog(QWidget *parent = nullptr);
signals:
    void generateNext(const QString &str, Qt::CaseSensitivity cs);
private slots:
   void generateClicked();
private:
   QLabel *label;
   QPushButton *generateButton;
   QPushButton *closeButton;
};
#endif // MAINWINDOW_H
