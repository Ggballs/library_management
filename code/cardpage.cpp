#include "cardpage.h"
#include "ui_cardpage.h"
#include"signin_page.h"
#include<QFileDialog>
#include<QMessageBox>
#include<ActiveQt/QAxObject>

cardpage::cardpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cardpage)
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
void cardpage::setTableInfo(){
    //设置表头
    this->dataTableModel->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("cno")));
    this->dataTableModel->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("name")));
    this->dataTableModel->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("department")));
    this->dataTableModel->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("type")));
    this->dataTableModel->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("available_book")));


    //set the info of charts
    this->getDatabaseInfo();

    ui->bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->bookTable->setModel(this->dataTableModel);
}

void cardpage::getDatabaseInfo(){
    //get info from the database
    QSqlQuery sql;
    sql.prepare("select * from card");
    sql.exec();

    int row = 0;    // 定义变量row表示表格行数
    while(sql.next())
    {
        this->dataTableModel->setItem(row,0,new QStandardItem(sql.value("cno").toString()));
        this->dataTableModel->setItem(row,1,new QStandardItem(sql.value("name").toString()));
        this->dataTableModel->setItem(row,2,new QStandardItem(sql.value("department").toString()));
        this->dataTableModel->setItem(row,3,new QStandardItem(sql.value("type").toString()));
        this->dataTableModel->setItem(row,4,new QStandardItem(sql.value("available_book").toString()));

        row++;
    }
    sql.clear();
}


cardpage::~cardpage()
{
    delete ui;
}

void cardpage::on_pushButton_8_clicked()//exit
{
    this->~cardpage();
    SignIn_Page* w = new SignIn_Page();
    w->show();
}


void cardpage::on_pushButton_7_clicked()//query
{
    if(ui->searchbox->text()==""){
            cardpage::setTableInfo();
        }
        else{
            QSqlQuery sql;
            sql.prepare("select * from card where name like :name");
            sql.bindValue(":name",ui->searchbox->text());
            sql.exec();

            this->dataTableModel->clear();
            int row=0;
            this->dataTableModel->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("cno")));
            this->dataTableModel->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("name")));
            this->dataTableModel->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("department")));
            this->dataTableModel->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("type")));
            this->dataTableModel->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("available_book")));

            while(sql.next())
            {

                this->dataTableModel->setItem(row,0,new QStandardItem(sql.value("cno").toString()));
                this->dataTableModel->setItem(row,1,new QStandardItem(sql.value("name").toString()));
                this->dataTableModel->setItem(row,2,new QStandardItem(sql.value("department").toString()));
                this->dataTableModel->setItem(row,3,new QStandardItem(sql.value("type").toString()));
                this->dataTableModel->setItem(row,4,new QStandardItem(sql.value("available_book").toString()));
                row++;
        }


            sql.clear();

    }
    }


void cardpage::on_pushButton_clicked()
{
     ui->controlPage->setCurrentIndex(1);
}



void cardpage::on_pushButton_9_clicked()
{
    ui->controlPage->setCurrentIndex(2);
}


void cardpage::on_pushButton_2_clicked()
{
   ui->controlPage->setCurrentIndex(0);
}


void cardpage::on_okbottom_2_clicked()//修改
{
        QString cno = ui->cnoBox_2->text();
        QString name =ui->nameBox_2->text();
        QString department =ui->departmentBox_2->text();
        QString type =ui->idBox_2->text();
        QString av_bks =ui->avbookBox_2->text();

        qDebug()<<cno;
        qDebug()<<name;
        qDebug()<<department;
        qDebug()<<type;
        qDebug()<<av_bks;
        QSqlQuery sql;

            if(name.size()){
                sql.prepare("update card set name = :name where cno = :cno");
                sql.bindValue(":cno",cno);
                sql.bindValue(":name",name);
                sql.exec();
            }
            if(department.size()){
                sql.prepare("update card set department = :department where cno = :cno");
                sql.bindValue(":cno",cno);
                sql.bindValue(":department",department);
                sql.exec();
            }
            if(type.size()){
                sql.prepare("update card set type = :type where cno = :cno");
                sql.bindValue(":cno",cno);
                sql.bindValue(":type",type);
                sql.exec();
            }
            if(av_bks.size()){
                sql.prepare("update card set available_book = :av_bks where cno = :cno");
                sql.bindValue(":cno",cno);
                sql.bindValue(":av_bks",av_bks);
                sql.exec();
            }


            bool modificationIF = sql.exec();

             if(modificationIF)
             {
                 QMessageBox::information(this,"title","modification succeeds");
                 this->getDatabaseInfo();
            }
            else
            {
                QMessageBox::warning(this,"title","modification failed");
            }

             sql.clear();
}


void cardpage::on_okbottom_clicked()//新建卡
{
    //load in info of new book
       QString cno = ui->cnoBox->text();
       QString name =ui->nameBox->text();
       QString department =ui->departmentBox->text();
       QString type =ui->idBox->text();
       QString av_bks =ui->avbookBox->text();


       qDebug()<<cno;
       qDebug()<<name;
       qDebug()<<department;
       qDebug()<<type;
       qDebug()<<av_bks;

       QSqlQuery sql;
       sql.prepare("insert into card values(:cno,:name,:department,:type,:av_bks)");
       sql.bindValue(":cno",cno);
       sql.bindValue(":name",name);
       sql.bindValue(":department",department);
       sql.bindValue(":type",type);
       sql.bindValue(":av_bks",av_bks);


       bool addIF = sql.exec();
        if(addIF)
        {
            QMessageBox::information(this,"title","create succeeds");
            this->getDatabaseInfo();
         }
         else
         {
            QMessageBox::warning(this,"title","create failed");
          }

        sql.clear();
}


void cardpage::on_Btndelete_clicked()//delete
{
    QString cno = ui->Boxdelete->text();//用户姓名


        qDebug()<<cno;

        QSqlQuery sql;
        sql.prepare("delete  from card where cno = :cno");
        sql.bindValue(":cno",cno);

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


void cardpage::on_excelbtn_clicked()
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
            QAxObject *rows;
            rows = usedrange->querySubObject("Rows");  // 行
            int intRow = rows->property("Count").toInt(); // 行数
            //int intCol = columns->property("Count").toInt();  // 列数
            QAxObject* cell; // 单元格
            for(int i = intRowStart+1; i < intRow + intRowStart; i++){
                //get values
                cell = worksheet -> querySubObject("Cells(int,int)",i,1);
                QString cno = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,2);
                QString name = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,3);
                QString department = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,4);
                QString type = cell -> dynamicCall("text").toString();
                cell = worksheet -> querySubObject("Cells(int,int)",i,5);
                int av_bks = cell -> dynamicCall("Value2()").toInt();
                QSqlQuery sql;
                //qDebug() <<
                sql.prepare("insert into card values(:cno,:name,:department,:type,:av_bks)");
                sql.bindValue(":cno",cno);
                sql.bindValue(":name",name);
                sql.bindValue(":department",department);
                sql.bindValue(":type",type);
                sql.bindValue(":av_bks",av_bks);
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
