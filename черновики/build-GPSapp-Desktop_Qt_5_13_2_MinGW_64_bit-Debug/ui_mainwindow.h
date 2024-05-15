/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *enterGNSS;
    QLabel *label_2;
    QLineEdit *azimuth;
    QLabel *label_3;
    QLineEdit *distance;
    QLabel *label_4;
    QLineEdit *outputGNSS;
    QPushButton *generate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 351);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 781, 301));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        enterGNSS = new QLineEdit(widget);
        enterGNSS->setObjectName(QString::fromUtf8("enterGNSS"));

        formLayout->setWidget(0, QFormLayout::FieldRole, enterGNSS);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        azimuth = new QLineEdit(widget);
        azimuth->setObjectName(QString::fromUtf8("azimuth"));

        formLayout->setWidget(1, QFormLayout::FieldRole, azimuth);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        distance = new QLineEdit(widget);
        distance->setObjectName(QString::fromUtf8("distance"));

        formLayout->setWidget(2, QFormLayout::FieldRole, distance);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        outputGNSS = new QLineEdit(widget);
        outputGNSS->setObjectName(QString::fromUtf8("outputGNSS"));

        formLayout->setWidget(3, QFormLayout::FieldRole, outputGNSS);

        generate = new QPushButton(widget);
        generate->setObjectName(QString::fromUtf8("generate"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, generate);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202\320\276\320\262\320\276\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\264\320\273\321\217 \321\200\320\260\321\201\321\207\320\265\321\202\320\260 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\321\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 GNSS:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\267\320\270\320\274\321\203\321\202:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 GNSS:", nullptr));
        generate->setText(QCoreApplication::translate("MainWindow", "GENERATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
