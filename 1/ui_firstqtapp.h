/********************************************************************************
** Form generated from reading UI file 'firstqtapp.ui'
**
** Created: Tue Jul 24 23:44:42 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTQTAPP_H
#define UI_FIRSTQTAPP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstQtAppDLG
{
public:
    QLabel *label_1;
    QComboBox *comboBox;
    QSpinBox *spinBox_1;
    QCheckBox *checkBox;
    QPushButton *pushButton_browse;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QPushButton *pushButton_do;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_about;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;

    void setupUi(QWidget *firstQtAppDLG)
    {
        if (firstQtAppDLG->objectName().isEmpty())
            firstQtAppDLG->setObjectName(QString::fromUtf8("firstQtAppDLG"));
        firstQtAppDLG->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstQtAppDLG->sizePolicy().hasHeightForWidth());
        firstQtAppDLG->setSizePolicy(sizePolicy);
        label_1 = new QLabel(firstQtAppDLG);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(30, 10, 31, 21));
        comboBox = new QComboBox(firstQtAppDLG);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 80, 111, 22));
        comboBox->setAcceptDrops(false);
        comboBox->setAutoFillBackground(false);
        comboBox->setEditable(true);
        spinBox_1 = new QSpinBox(firstQtAppDLG);
        spinBox_1->setObjectName(QString::fromUtf8("spinBox_1"));
        spinBox_1->setGeometry(QRect(90, 50, 42, 22));
        checkBox = new QCheckBox(firstQtAppDLG);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(150, 50, 70, 17));
        pushButton_browse = new QPushButton(firstQtAppDLG);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(310, 10, 75, 23));
        label_2 = new QLabel(firstQtAppDLG);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 46, 13));
        label_3 = new QLabel(firstQtAppDLG);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 46, 13));
        spinBox_2 = new QSpinBox(firstQtAppDLG);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(90, 80, 42, 22));
        pushButton_do = new QPushButton(firstQtAppDLG);
        pushButton_do->setObjectName(QString::fromUtf8("pushButton_do"));
        pushButton_do->setGeometry(QRect(30, 260, 75, 23));
        pushButton_clear = new QPushButton(firstQtAppDLG);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(160, 260, 75, 23));
        pushButton_about = new QPushButton(firstQtAppDLG);
        pushButton_about->setObjectName(QString::fromUtf8("pushButton_about"));
        pushButton_about->setGeometry(QRect(290, 260, 75, 23));
        textEdit = new QTextEdit(firstQtAppDLG);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 120, 351, 131));
        textEdit->setOverwriteMode(true);
        lineEdit = new QLineEdit(firstQtAppDLG);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 10, 231, 20));

        retranslateUi(firstQtAppDLG);

        QMetaObject::connectSlotsByName(firstQtAppDLG);
    } // setupUi

    void retranslateUi(QWidget *firstQtAppDLG)
    {
        firstQtAppDLG->setWindowTitle(QApplication::translate("firstQtAppDLG", "Form", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("firstQtAppDLG", "File", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("firstQtAppDLG", "Apple", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("firstQtAppDLG", "Banana", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        comboBox->setWhatsThis(QApplication::translate("firstQtAppDLG", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        checkBox->setText(QApplication::translate("firstQtAppDLG", "Yes or No", 0, QApplication::UnicodeUTF8));
        pushButton_browse->setText(QApplication::translate("firstQtAppDLG", "Browse..", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("firstQtAppDLG", "Number 1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("firstQtAppDLG", "Number 2", 0, QApplication::UnicodeUTF8));
        pushButton_do->setText(QApplication::translate("firstQtAppDLG", "Do something", 0, QApplication::UnicodeUTF8));
        pushButton_clear->setText(QApplication::translate("firstQtAppDLG", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton_about->setText(QApplication::translate("firstQtAppDLG", "About", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QApplication::translate("firstQtAppDLG", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textEdit->setHtml(QApplication::translate("firstQtAppDLG", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">this is textEdit</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class firstQtAppDLG: public Ui_firstQtAppDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTQTAPP_H
