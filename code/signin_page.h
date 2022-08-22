#ifndef SIGNIN_PAGE_H
#define SIGNIN_PAGE_H

#include <QWidget>
#include <QString>
#include <QDebug>
#include "database.h"
#include "mainpage.h"
#include "stupage.h"
#include "cardpage.h"
QT_BEGIN_NAMESPACE
namespace Ui { class SignIn_Page; }
QT_END_NAMESPACE
//QString userNumber;

class SignIn_Page : public QWidget
{
    Q_OBJECT

public:
    Database myDatabse;
    SignIn_Page(QWidget *parent = nullptr);
    ~SignIn_Page();

signals:
    void try_login();
private slots:
    void on_pushButton_clicked();



private:
    Ui::SignIn_Page *ui;
};
#endif // SIGNIN_PAGE_H
