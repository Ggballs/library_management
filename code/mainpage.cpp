#include "mainpage.h"
#include "ui_mainpage.h"
#include"signin_page.h"
#include<QMessageBox>
#include<QFileDialog>
#include<ActiveQt/QAxObject>

mainPage::mainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainPage)
{
    ui->setupUi(this);

    // 连接数据库
    this->myDatabse.getConnection();

    // 为表格模式指针指定内存
    this->dataTableModel = new QStandardItemModel();

    //设置表格
    this->setTableInfo();

    ui->controlPage->setCurrentIndex(1);

}

mainPage::~mainPage()
{
    delete ui;
}

void mainPage::setTableInfo(){
    //设置表头
    this->dataTableModel->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("bno")));
    this->dataTableModel->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("title")));
    this->dataTableModel->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("author")));
    this->dataTableModel->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("price")));
    this->dataTableModel->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("total")));
    this->dataTableModel->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("stock")));
    this->dataTableModel->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("category")));
    this->dataTableModel->setHorizontalHeaderItem(7,new QStandardItem(QObject::tr("press")));

    //set the info of charts
    this->getDatabaseInfo();

    //set properties of charts;
    ui->bookTable->setColumnWidth(0,50);
    ui->bookTable->setColumnWidth(1,200);
    ui->bookTable->setColumnWidth(2,100);
    ui->bookTable->setColumnWidth(3,50);
    ui->bookTable->setColumnWidth(4,50);
    ui->bookTable->setColumnWidth(5,50);
    ui->bookTable->setColumnWidth(6,100);
    ui->bookTable->setColumnWidth(7,200);

    ui->bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->bookTable->setModel(this->dataTableModel);
}

void mainPage::getDatabaseInfo(){
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


void mainPage::on_pushButton_clicked()
{
    ui->controlPage->setCurrentIndex(1);
}


void mainPage::on_pushButton_2_clicked()
{
     ui->controlPage->setCurrentIndex(0);
}

void mainPage::on_pushButton_7_clicked()
{
    ui->controlPage->setCurrentIndex(2);
}

void mainPage::on_pushButton_3_clicked()//入库功能
{
    //load in info of new book
    QString bno = ui->bnoBox->text();
    QString title =ui->titlebox->text();
    QString author=ui->authorbox->text();
    QString price =ui->pricebox->text();
    QString total =ui->totalbox->text();
    QString stock =ui->stockbox->text();
    QString category =ui->categorybox->text();
    QString press =ui->pressbox->text();

    qDebug()<<bno;
    qDebug()<<title;
    qDebug()<<author;

    qDebug()<<price;
    qDebug()<<total;
    qDebug()<<stock;
    qDebug()<<category;
    qDebug()<<press;

    QSqlQuery sql;
    sql.prepare("insert into book values(:bno,:title,:author,:price,:total,:stock,:category,:press)");
    sql.bindValue(":bno",bno);
    sql.bindValue(":title",title);
    sql.bindValue(":author",author);
    sql.bindValue(":price",price);
    sql.bindValue(":total",total);
    sql.bindValue(":stock",stock);
    sql.bindValue(":category",category);
    sql.bindValue(":press",press);

    bool addIF = sql.exec();
    if(addIF)
    {
        QMessageBox::information(this,"title","create succeeds");
        this->setTableInfo();

     }
     else
     {
        QMessageBox::warning(this,"title","create failed");
      }

     sql.clear();

}





void mainPage::on_update_clicked()//修改
{

        QString bno = ui->bnoBox_2->text();
        QString title =ui->titlebox_2->text();
        QString author=ui->authorbox_2->text();
        QString price =ui->pricebox_2->text();
        QString total =ui->totalbox_2->text();
        QString stock =ui->stockbox_2->text();
        QString category =ui->categorybox_2->text();
        QString press =ui->pressbox_2->text();

        qDebug()<<bno;
        qDebug()<<title;
        qDebug()<<author;

        qDebug()<<price;
        qDebug()<<total;
        qDebug()<<stock;
        qDebug()<<category;
        qDebug()<<press;
        QSqlQuery sql;

        if(title.size()){
            sql.prepare("update book set title = :title where bno = :bno");
            sql.bindValue(":bno",bno);
            sql.bindValue(":title",title);
            sql.exec();
        }
        if(author.size()){
            sql.prepare("update book set author = :author where bno = :bno");
            sql.bindValue(":bno",bno);
            sql.bindValue(":author",author);
            sql.exec();
        }
        if(price.size()){
            sql.prepare("update book set price = :price where bno = :bno");
            sql.bindValue(":bno",bno);
            sql.bindValue(":price",price);
            sql.exec();
        }
        if(total.size()){
            sql.prepare("update book set total = :total where bno = :bno");
            sql.bindValue(":bno",bno);
            sql.bindValue(":total",total);
            sql.exec();
        }if(stock.size()){
            sql.prepare("update book set stock = :stock where bno = :bno");
            sql.bindValue(":bno",bno);
            sql.bindValue(":stock",stock);
            sql.exec();
        }
        if(category.size()){
            sql.prepare("update book set category = :category where bno = :bno");
            sql.bindValue(":bno",bno);
            sql.bindValue(":category",category);
            sql.exec();
        }
        if(press.size()){
            sql.prepare("update book set press = :press where bno = :bno");
            sql.bindValue(":bno",bno);
            sql.bindValue(":press",press);
            sql.exec();
        }

        bool modificationIF = sql.exec();
        if(modificationIF)
        {
            QMessageBox::information(this,"title","modification succeeds");
            this->setTableInfo();
       }
       else
       {
           QMessageBox::warning(this,"title","modification failed");
       }
        this->setTableInfo();
         sql.clear();

    }



void mainPage::on_pushButton_4_clicked()//删除
{
    QString bno = ui->delename->text();//用户姓名


    qDebug()<<bno;

    QSqlQuery sql;
    sql.prepare("delete  from book where bno = :bno");
    sql.bindValue(":bno",bno);
    sql.exec();
     bool deleteIF = sql.exec();
     if(deleteIF)
     {
          QMessageBox::information(this,"title","deletion succeeds");

     }
     else
     {
         QMessageBox::warning(this,"title","deletion failed");
     }
     this->dataTableModel->clear();
     this->setTableInfo();
     sql.clear();
}





void mainPage::on_pushButton_5_clicked()//search
{
    if(ui->searchbox->text()==""){
        mainPage::setTableInfo();
    }
    else{
        QSqlQuery sql;
        sql.prepare("select * from book where title like :title");
        sql.bindValue(":title",ui->searchbox->text());
        sql.exec();

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




void mainPage::on_pushButton_8_clicked()
{
    this->~mainPage();
    SignIn_Page* w = new SignIn_Page();
    w->show();
}


void mainPage::on_excelbtn_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
            this,
            tr("open a file."),
            "C:/Users/22470/Documents/lab5_1/excel",
            tr("excel(*.xls *xlsx );;All files(*.*)"));
    //寻找文件
    if (fileName.isEmpty() || fileName.count(".xls") == 0) {
            QMessageBox::warning(this, "Warning!", "Please select an excel");
        }

    else{//找到了文件
            QMessageBox::information(this,"patch import",fileName + " found successfully");
            QAxObject *excel = new QAxObject("Excel.Application",this);
            excel->dynamicCall("SetVisible(bool)", false);
            excel->setProperty("DisplayAlerts", false);
            QAxObject* workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
            QAxObject* workbook = workbooks->querySubObject("Open(Qstring &)",fileName);
            QAxObject* worksheet = workbook->querySubObject("WorkSheets(int)",1);
            //获取第一个集合表

            QAxObject* usedrange = worksheet->querySubObject("UsedRange"); // sheet范围
            int intRowStart = usedrange->property("Row").toInt(); // 起始行数   为1
            //int intColStart = usedrange->property("Column").toInt();  // 起始列数 为1
            QAxObject *rows;
            rows = usedrange->querySubObject("Rows");  // 行
            int intRow = rows->property("Count").toInt(); // 行数
            //int intCol = columns->property("Count").toInt();  // 列数
            QAxObject* cell; // 单元格
            for(int i = intRowStart+1; i < intRow + intRowStart; i++){
                //get values
                cell = worksheet -> querySubObject("Cells(int,int)",i,1);
                QString bno = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,2);
                QString title = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,3);
                QString author = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,4);
                QString price = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,5);
                QString total = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,6);
                int stock = cell -> dynamicCall("Value2()").toInt();
                cell = worksheet -> querySubObject("Cells(int,int)",i,7);
                int category = cell -> dynamicCall("Value2()").toInt();
                cell = worksheet -> querySubObject("Cells(int,int)",i,4);
                QString press = cell -> dynamicCall("text").toString();
                QSqlQuery sql;
                sql.prepare("insert into book values(:bno,:title,:author,:price,:total,:stock,:category,:press)");
                sql.bindValue(":bno",bno);
                sql.bindValue(":title",title);
                sql.bindValue(":author",author);
                sql.bindValue(":price",price);
                sql.bindValue(":total",total);
                sql.bindValue(":stock",stock);
                sql.bindValue(":category",category);
                sql.bindValue(":press",press);
                sql.exec();
                sql.clear();
            }
            this->dataTableModel->clear();
            this->setTableInfo();
            workbook->dynamicCall("Close()");
            excel->dynamicCall("Quit()");
            if (excel)
                {
                    delete excel;
                    excel = NULL;
                }
    }

}

