#include "mainpage.h"
#include "signin_page.h"
#include "ui_signin_page.h"
#include <QApplication>
#include "stupage.h"
#include<QMessageBox>
QString userNumber;
SignIn_Page::SignIn_Page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignIn_Page)
{
    ui->setupUi(this);
    this->myDatabse.getConnection();
}

SignIn_Page::~SignIn_Page()
{
    delete ui;
}


void SignIn_Page::on_pushButton_clicked()
{
    QString userInputtype;
    if(ui->radioButton_2->isChecked() )
    {
         userInputtype = "student";
    }
    else
    {
         userInputtype = "manager";
    }
    QString userInputNumber = ui->InputNumber->text();          // 从账号输入框组件中，获取输入的信息，以字符串的形式返回给变量userInputNumber
    QString userInputPassWord = ui->InputPassWord->text();
    qDebug()<<"用户输入的密码:"+userInputPassWord;
    qDebug()<<"用户输入的账号:"+userInputNumber;                 // 打印userInputNumber
    qDebug()<<"用户输入的类别:"+userInputtype;
        //学生登录
     if(ui->radioButton_2->isChecked()){
        // 获取数据库中的信息

        QSqlQuery sql;
        sql.prepare("select * from identification where cno = :userInputNumber");
        sql.bindValue(":userInputNumber",userInputNumber);
        sql.exec();

        QString userPassWord;
        while(sql.next())
        {
            userNumber = sql.value("cno").toString();
            userPassWord = sql.value("password").toString();
        }
        qDebug()<<"数据库找到的账号:"+userNumber;
        qDebug()<<"数据库找到的密码:"+userPassWord;
        sql.clear();

        if(userInputPassWord == userPassWord && userInputNumber==userNumber)
        {
            QMessageBox::information(this,"student sign in","sign in succeeds");
            this->~SignIn_Page();
            stupage* w = new stupage();
            w->show();
        }
        else
        {
            QMessageBox::warning(NULL,"student sign in","incorrect account or password!");
            //return 0;
        }
     }
     //管理员登录
        else
         {   // 获取数据库中的信息
            if(userInputPassWord == tr("admin") && userInputNumber == tr("admin"))
            {
                QMessageBox::information(NULL,"administrator sign in","sign in succeeds");
                this->~SignIn_Page();


                    mainPage* w = new mainPage();
                    w->show();

                    cardpage* wm = new cardpage();
                    wm->show();
            }
            else
            {
                QMessageBox::warning(NULL,"administrator sign in","incorrect account or password!");
            }
    }
}




