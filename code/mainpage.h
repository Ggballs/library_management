#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>
#include<QStandardItemModel>
#include <database.h>

namespace Ui {
class mainPage;
}

class mainPage : public QWidget
{
    Q_OBJECT

public:
    explicit mainPage(QWidget *parent = nullptr);
    ~mainPage();

    // 连接数据库的对象
    Database myDatabse;

    // 设置表格模式
    void setTableInfo();

    // 获取表格信息
    void getDatabaseInfo();

    // 表格组件模式
    QStandardItemModel* dataTableModel;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

//    void show_mainPage();

    void on_update_clicked();

    void on_pushButton_5_clicked();

//    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_excelbtn_clicked();

private:
    Ui::mainPage *ui;
};

#endif // MAINPAGE_H
