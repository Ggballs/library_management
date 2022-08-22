#ifndef STUPAGE_H
#define STUPAGE_H

#include <QWidget>
#include<QStandardItemModel>
#include <database.h>

namespace Ui {
class stupage;
}

class stupage : public QWidget
{
    Q_OBJECT

public:
    explicit stupage(QWidget *parent = nullptr);
    ~stupage();
    // 连接数据库的对象
    Database myDatabse;

    // 设置表格模式
    void setTableInfo();

    // 获取表格信息
    void getDatabaseInfo();

    // 表格组件模式
    QStandardItemModel* dataTableModel;

    void showhistory();//显示借书信息；

private slots:


    void on_btnsch_clicked();

    void on_btnQuit_clicked();

    void on_borrowbtn_clicked();

    void on_showhisBtn_clicked();

    void on_returnbtn_clicked();

private:
    Ui::stupage *ui;
};

#endif // STUPAGE_H
