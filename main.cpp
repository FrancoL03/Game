#include "MainWindow.h"

#include <QApplication>
#include "world.h"
#include "world_global.h"
#include "worldmodel.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
