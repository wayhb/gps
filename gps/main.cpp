#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GenerateDialog *dialog = new GenerateDialog;
    dialog->show();
    return app.exec();
}
