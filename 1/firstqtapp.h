#ifndef MYQTAPP_H
#define MYQTAPP_H
 
#include "ui_firstqtapp.h"
 
 
class firstQtApp : public QWidget, private Ui::firstQtAppDLG
{
    Q_OBJECT
 
public:
    firstQtApp(QWidget *parent = 0);
 
 
public slots:
    void getPath();
    void doSomething();
    void clear();
    void about();
};
 
 
#endif
