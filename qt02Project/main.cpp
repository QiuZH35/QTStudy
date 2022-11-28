#include "mywidget.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    myWidget w;
//    w.show();
    Dialog w;
    w.show();
    return a.exec();
}
