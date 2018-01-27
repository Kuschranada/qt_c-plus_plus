#include "ClockWindow.h"
#include <QApplication>

main(int argc, char **argv)
{
    QApplication app(argc, argv);
    ClockWindow *myClock = new ClockWindow();
    myClock->show();

    return app.exec();
}
