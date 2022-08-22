#include "stupage.h"
#include "ui_stupage.h"
#include "signin_page.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QDate>
#include<QMessageBox>
#include<qdebug.h>
stupage::stupage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stupage)
{
    ui->setupUi(this);

    // 连接数据库
     this->myDatabse.getConnection();

     // 为表格模式指针指定内存
     this->dataTableModel = new QStandardItemModel();

     //设置表格

     this->setTableInfo();

}
void stupage::setTableInfo(){
    //设置表头
    this->dataTableModel->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("bno")));
    this->dataTableModel->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("title")));
    this->dataTableModel->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("author")));
    this->dataTableModel->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("price")));
    this->dataTableModel->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("total")));
    this->dataTableModel->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("stock")));
    this->dataTableModel->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("category")));
    this->dataTableModel->setHorizontalHeaderItem(7,new QStandardItem(QObject::tr("press")));


    //set properties of charts;
    ui->bookTable->setColumnWidth(0,50);
    ui->bookTable->setColumnWidth(1,200);
    ui->bookTable->setColumnWidth(2,100);
    ui->bookTable->setColumnWidth(3,50);
    ui->bookTable->setColumnWidth(4,50);
    ui->bookTable->setColumnWidth(5,50);
    ui->bookTable->setColumnWidth(6,100);
    ui->bookTable->setColumnWidth(7,200);

    //set the info of charts
    this->getDatabaseInfo();
    ui->bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->bookTable->setModel(this->dataTableModel);
}

void stupage::getDatabaseInfo(){
    //get info from the database
    QSqlQuery sql;
    sql.prepare("select * from book");
    sql.exec();

    int row = 0;    // 定义变量row表示表格行数
    while(sql.next())
    {
        this->dataTableModel->setItem(row,0,new QStandardItem(sql.value("bno").toString()));
        this->dataTableModel->setItem(row,1,new QStandardItem(sql.value("title").toString()));
        this->dataTableModel->setItem(row,2,new QStandardItem(sql.value("author").toString()));
        this->dataTableModel->setItem(row,3,new QStandardItem(sql.value("price").toString()));
        this->dataTableModel->setItem(row,4,new QStandardItem(sql.value("total").toString()));
        this->dataTableModel->setItem(row,5,new QStandardItem(sql.value("stock").toString()));
        this->dataTableModel->setItem(row,6,new QStandardItem(sql.value("category").toString()));
        this->dataTableModel->setItem(row,7,new QStandardItem(sql.value("press").toString()));

        row++;
    }
    sql.clear();
}
stupage::~stupage()
{
    delete ui;
}

void stupage::showhistory(){//show borrow info
    //设置表头
    QString userno ="cno1";
    //QString userno = userNumber;

        this->dataTableModel->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("cno")));
        this->dataTableModel->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("bno")));
        this->dataTableModel->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("title")));
        this->dataTableModel->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("borrowed_date")));
        this->dataTableModel->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("return _date")));
        this->dataTableModel->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("available_book")));
        QSqlQuery sql;
       sql.prepare("select cno, bno, title, borrowed_date, return_date ,available_book from book natural join borrow natural join card where cno = :userno  ");
       sql.bindValue(":userno",userno);
       sql.exec();

       int row = 0;    // 定义变量row表示表格行数
       while(sql.next())
       {
           this->dataTableModel->setItem(row,0,new QStandardItem(sql.value("cno").toString()));
           this->dataTableModel->setItem(row,1,new QStandardItem(sql.value("bno").toString()));
           this->dataTableModel->setItem(row,2,new QStandardItem(sql.value("title").toString()));
           this->dataTableModel->setItem(row,3,new QStandardItem(sql.value("borrowed_date").toString()));
           this->dataTableModel->setItem(row,4,new QStandardItem(sql.value("return_date").toString()));
           if(!row)this->dataTableModel->setItem(row,5,new QStandardItem(sql.value("available_book").toString()));

           row++;
       }
       sql.clear();

    ui->bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->bookTable->setModel(this->dataTableModel);
}

void stupage::on_btnsch_clicked() //search
{
    if(ui->boxSch->text()==""){
        stupage::setTableInfo();
    }
    else{
        QSqlQuery sql;
        sql.prepare("select * from book where title like :title");
        sql.bindValue(":title",ui->boxSch->text());
        sql.exec();
        qDebug() << ui->boxSch->text();
        this->dataTableModel->clear();
        int row=0;

        this->dataTableModel->setHorizontalHeaderItem(0,new QStandardItem("bno"));
        this->dataTableModel->setHorizontalHeaderItem(1,new QStandardItem("title"));
        this->dataTableModel->setHorizontalHeaderItem(2,new QStandardItem("author"));
        this->dataTableModel->setHorizontalHeaderItem(3,new QStandardItem("price"));
        this->dataTableModel->setHorizontalHeaderItem(4,new QStandardItem("total"));
        this->dataTableModel->setHorizontalHeaderItem(5,new QStandardItem("stock"));
        this->dataTableModel->setHorizontalHeaderItem(6,new QStandardItem("category"));
        this->dataTableModel->setHorizontalHeaderItem(7,new QStandardItem("press"));

        while(sql.next())
        {
        this->dataTableModel->setItem(row,0,new QStandardItem(sql.value("bno").toString()));
        this->dataTableModel->setItem(row,1,new QStandardItem(sql.value("title").toString()));
        this->dataTableModel->setItem(row,2,new QStandardItem(sql.value("author").toString()));
        this->dataTableModel->setItem(row,3,new QStandardItem(sql.value("price").toString()));
        this->dataTableModel->setItem(row,4,new QStandardItem(sql.value("total").toString()));
        this->dataTableModel->setItem(row,5,new QStandardItem(sql.value("stock").toString()));
        this->dataTableModel->setItem(row,6,new QStandardItem(sql.value("category").toString()));
        this->dataTableModel->setItem(row,7,new QStandardItem(sql.value("press").toString()));
        row++;

    }


        sql.clear();

}
}


void stupage::on_btnQuit_clicked()//exit
{
    this->~stupage();
      SignIn_Page* w = new SignIn_Page();
       w->show();
}

void stupage::on_showhisBtn_clicked()//btn to show borrow info
{   this->dataTableModel->clear();
    showhistory();
}
void stupage::on_borrowbtn_clicked()//借书
{
     if(ui->bnoBox->text().size()){
        QDate curDate = QDate::currentDate();
        //QString userno = userNumber;
        QString userno = "cno1";


        QSqlQuery sql;
        //check if user have available books to borrow;

        sql.prepare("select available_book from card where cno = :userno");
        sql.bindValue(":userno",userno);
        sql.exec();
        int curAvBook = sql.value("available_book").toInt();
        qDebug() << userno;
        qDebug() << curAvBook;
        sql.clear();

        //check if the book still in library;
        sql.prepare("select stock from book where bno = :bno");
        sql.bindValue(":bno",ui->bnoBox->text());
        sql.exec();
        int curBookStock;
        curBookStock = sql.value("stock").toInt();
        qDebug() << ui->bnoBox->text();
        qDebug()<< sql.value("stock");
        sql.clear();

        //judge
        if(curAvBook == 0 || curBookStock <= 0 || curBookStock == NULL){
            QMessageBox::warning(this,"borrow","borrow failed");
        }
        //else{
            //insert into borrow table
        sql.prepare("insert into borrow(cno,bno,borrowed_date) values(:userno,:bno,:curDate)");
        sql.bindValue(":userno",userno);
        sql.bindValue(":bno",ui->bnoBox->text());
        sql.bindValue(":curDate",curDate);
        bool upbr = sql.exec();
        qDebug() << curDate;
        qDebug() << userno;
        qDebug() <<ui->bnoBox->text();
            //update card and book;
        sql.prepare("update book set stock = stock - 1 where bno = :bno");
        sql.bindValue(":bno",ui->bnoBox->text());
        bool upbk = sql.exec();

        sql.prepare("update card set available_book = available_book - 1 where cno = :userno");
        sql.bindValue(":userno",userno);
        bool upcd = sql.exec();
            //judge
        if(upbr && upbk && upcd){
             QMessageBox::information(this,"title","borrow success!");
        }
        else{
            QMessageBox::warning(this,"title","borrowed but failed!");
        }
        sql.clear();
            //refresh the table info
        this->dataTableModel->clear();
        this->showhistory();
        }
     //}
}


void stupage::on_returnbtn_clicked()//还书
{
    if(ui->bnoBox->text().size()){
       QDate curDate = QDate::currentDate();
       //QString userno = userNumber;
       QString userno = QObject::tr("cno1");
       QSqlQuery sql;

           //insert into borrow table
       sql.prepare("update borrow set return_date = :curDate where cno = :userno and bno = :bno and return_date is NULL");
       sql.bindValue(":userno",userno);
       sql.bindValue(":bno",ui->bnoBox->text());
       sql.bindValue(":curDate",curDate);
       bool upbr = sql.exec();
       qDebug() << curDate;
       qDebug() << userno;
       qDebug() <<ui->bnoBox->text();
           //update card and book;
       sql.prepare("update book set stock = stock + 1 where bno = :bno");
       sql.bindValue(":bno",ui->bnoBox->text());
       bool upbk = sql.exec();

       sql.prepare("update card set available_book = available_book + 1 where cno = :userno ");
       sql.bindValue(":userno",userno);
       bool upcd = sql.exec();
           //judge
       if(upbr && upbk && upcd){
       QLabel label( QLabel::tr("return success!") );
       label.show();
       }
       else{
           QMessageBox::warning(NULL,"return book","return  processed but failed!");
       }
       sql.clear();
           //refresh the table info
       this->dataTableModel->clear();
       this->showhistory();
       }
}

