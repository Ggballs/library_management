#include "mainpage.h"
#include <QApplication>
#include <QFile>
#include <QTextCodec>
#include <QCoreApplication>
#include <QFont>
#include <QTextStream>
#include <QLabel>
#include "signin_page.h"
#include "stupage.h"
#include "mainpage.h"
#include "cardpage.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //set styles
    QFile file("../Styles/dark.qss");

        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {

            QTextStream in(&file);
            QString style = in.readAll();
            file.close();
            //qApp->setStyleSheet(style);
        }
        //onset page
    SignIn_Page b;
    //stupage b;
    //mainPage b;
    //cardpage b;
    b.show();

    b.setWindowTitle(QObject::tr("Library Management System"));

    return a.exec();
}
