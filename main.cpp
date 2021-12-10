#include "calibrationwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalibrationWidget w;
    w.show();
    return a.exec();
}
