#include "dashwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DashWindow w;
    // this is a test comment
    w.show();
    return a.exec();
}
