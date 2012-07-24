#include <QtGui> 
#include "firstqtapp.h"
 
// if we include <QtGui> there is no need to include every class used: <QString>, <QFileDialog>,...
 
firstQtApp::firstQtApp(QWidget *parent)
{
    setupUi(this); // this sets up GUI
 
    Qt::WindowFlags flags;
    flags = Qt::Window | Qt::WindowMinimizeButtonHint;
    setWindowFlags( flags );
    
    QDesktopWidget *desktop = QApplication::desktop();
    
    int screenWidth, width; 
    int screenHeight, height;
    int x, y;
    QSize windowSize;
 
    screenWidth = desktop->width(); // get width of screen
    screenHeight = desktop->height(); // get height of screen
 
    windowSize = size(); // size of our application window
    width = windowSize.width(); 
    height = windowSize.height();
 
    // little computations
    x = (screenWidth - width) / 2;
    y = (screenHeight - height) / 2;
    y -= 50;
 
    // move window to desired coordinates
    move ( x, y );

    // signals/slots mechanism in action
    connect( pushButton_browse, SIGNAL( clicked() ), this, SLOT( getPath() ) ); 
    connect( pushButton_do, SIGNAL( clicked() ), this, SLOT( doSomething() ) ); 
    connect( pushButton_clear, SIGNAL( clicked() ), this, SLOT( clear() ) ); 
    connect( pushButton_about, SIGNAL( clicked() ), this, SLOT( about() ) ); 
}
 
 
void firstQtApp::getPath()
{
    QString path;
    
    path = QFileDialog::getOpenFileName(
        this,
        "Choose a file to open",
        QString::null,
        QString::null);
 
    lineEdit->setText( path );
}
 
 
void firstQtApp::doSomething()
{
    int value1, value2;
    Qt::CheckState state;
    QString str;
 
    textEdit->append( "Path to file: " + lineEdit->text() );
 
    value1 = spinBox_1->value();
    value2 = spinBox_2->value();
 
    textEdit->append( "Number 1 value: " + QString::number(value1) );
    textEdit->append( "Number 2 value: " + QString::number(value2) );
 
    state = checkBox->checkState();
 
    str = "Checkbox says: ";
    if ( state == Qt::Checked ) str += "yes"; 
    else str += "no";
    textEdit->append( str );
 
    textEdit->append( "ComboBox current text: " + comboBox->currentText() );
    textEdit->append( "ComboBox current item: " + QString::number(comboBox->currentIndex()) );
}
 
 
void firstQtApp::clear()
{
    textEdit->clear();
}
 
 
void firstQtApp::about() 
{
    QMessageBox::about(this,"About firstQtApp",
                "This app was coded for educational purposes.\n"
                "Number 1 is: " + QString::number(spinBox_1->value()) + "\n\n"
                "Bye.\n");
}
