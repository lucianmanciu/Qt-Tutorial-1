#include <QApplication>
 
#include "firstqtapp.h"
 
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    firstQtApp *dialog = new firstQtApp;
 
    dialog->show();
    return app.exec();
}
