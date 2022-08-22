#ifndef CARDPAGE_H
#define CARDPAGE_H

#include <QWidget>
#include<QStandardItemModel>
#include <database.h>

namespace Ui {
class cardpage;
}

class cardpage : public QWidget
{
    Q_OBJECT

public:
    explicit cardpage(QWidget *parent = nullptr);
    ~cardpage();
    // 连接数据库的对象
    Database myDatabse;

    // 设置表格模式
    void setTableInfo();

    // 获取表格信息
    void getDatabaseInfo();

    // 表格组件模式
    QStandardItemModel* dataTableModel;

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();


    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_okbottom_2_clicked();

    void on_okbottom_clicked();

    void on_Btndelete_clicked();

    void on_excelbtn_clicked();

private:
    Ui::cardpage *ui;
};

#endif // CARDPAGE_H
