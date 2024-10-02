#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator myappTranslator;
    myappTranslator.load("translations/my_ru.qm");
    a.installTranslator(&myappTranslator);

    QTranslator qtTranslator;
    qtTranslator.load("translations/qt_ru.qm");
    a.installTranslator(&qtTranslator);

    auto w = MainWindow::createClient();
    if(w)
        w->show();
    else
        return 0;

   // MainWindow w;
    //w.show();
    return a.exec();
}
