/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainPage
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLineEdit *searchbox;
    QPushButton *pushButton_7;
    QStackedWidget *controlPage;
    QWidget *page;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *delename;
    QPushButton *pushButton_4;
    QWidget *page_2;
    QLineEdit *bnoBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *titlebox;
    QLineEdit *authorbox;
    QPushButton *pushButton_3;
    QLabel *label_12;
    QLineEdit *totalbox;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *stockbox;
    QLineEdit *categorybox;
    QLineEdit *pricebox;
    QLabel *label_17;
    QLineEdit *pressbox;
    QWidget *page_3;
    QLabel *label_10;
    QPushButton *update;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *label_18;
    QLineEdit *categorybox_2;
    QLabel *label_19;
    QLineEdit *pricebox_2;
    QLineEdit *stockbox_2;
    QLineEdit *pressbox_2;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *bnoBox_2;
    QLineEdit *titlebox_2;
    QLineEdit *totalbox_2;
    QLineEdit *authorbox_2;
    QLabel *label_22;
    QTableView *bookTable;
    QPushButton *pushButton_8;
    QPushButton *excelbtn;

    void setupUi(QWidget *mainPage)
    {
        if (mainPage->objectName().isEmpty())
            mainPage->setObjectName(QString::fromUtf8("mainPage"));
        mainPage->resize(1300, 617);
        mainPage->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(mainPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1800, 641));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"\n"
"background-image: url(:/background4.jpg);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 10, 75, 23));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, 10, 75, 23));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 10, 93, 28));
        searchbox = new QLineEdit(frame);
        searchbox->setObjectName(QString::fromUtf8("searchbox"));
        searchbox->setGeometry(QRect(210, 10, 231, 21));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(880, 10, 93, 28));
        controlPage = new QStackedWidget(frame);
        controlPage->setObjectName(QString::fromUtf8("controlPage"));
        controlPage->setGeometry(QRect(930, 70, 361, 411));
        controlPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 81, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 20pt \"Agency FB\";"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 80, 71, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt rgb(255, 0, 0)\"Agency FB\";\n"
"color: rgb(0, 0, 255);"));
        delename = new QLineEdit(page);
        delename->setObjectName(QString::fromUtf8("delename"));
        delename->setGeometry(QRect(142, 80, 151, 31));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 220, 75, 23));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0,0);"));
        controlPage->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        bnoBox = new QLineEdit(page_2);
        bnoBox->setObjectName(QString::fromUtf8("bnoBox"));
        bnoBox->setGeometry(QRect(170, 60, 131, 20));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 20, 121, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 60, 71, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 140, 61, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 180, 61, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 300, 81, 20));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        titlebox = new QLineEdit(page_2);
        titlebox->setObjectName(QString::fromUtf8("titlebox"));
        titlebox->setGeometry(QRect(170, 100, 131, 20));
        authorbox = new QLineEdit(page_2);
        authorbox->setObjectName(QString::fromUtf8("authorbox"));
        authorbox->setGeometry(QRect(170, 140, 131, 20));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 370, 75, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0,0);"));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(80, 100, 61, 16));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        totalbox = new QLineEdit(page_2);
        totalbox->setObjectName(QString::fromUtf8("totalbox"));
        totalbox->setGeometry(QRect(170, 220, 131, 20));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(70, 220, 101, 21));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(80, 260, 81, 20));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        stockbox = new QLineEdit(page_2);
        stockbox->setObjectName(QString::fromUtf8("stockbox"));
        stockbox->setGeometry(QRect(170, 260, 131, 20));
        categorybox = new QLineEdit(page_2);
        categorybox->setObjectName(QString::fromUtf8("categorybox"));
        categorybox->setGeometry(QRect(170, 300, 131, 20));
        pricebox = new QLineEdit(page_2);
        pricebox->setObjectName(QString::fromUtf8("pricebox"));
        pricebox->setGeometry(QRect(170, 180, 131, 20));
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(70, 340, 72, 15));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        pressbox = new QLineEdit(page_2);
        pressbox->setObjectName(QString::fromUtf8("pressbox"));
        pressbox->setGeometry(QRect(170, 340, 131, 20));
        controlPage->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(151, 10, 81, 31));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        update = new QPushButton(page_3);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(240, 370, 93, 28));
        update->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(50, 90, 61, 16));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_16 = new QLabel(page_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(50, 250, 81, 20));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 290, 81, 20));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_18 = new QLabel(page_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(40, 330, 72, 15));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        categorybox_2 = new QLineEdit(page_3);
        categorybox_2->setObjectName(QString::fromUtf8("categorybox_2"));
        categorybox_2->setGeometry(QRect(140, 290, 131, 20));
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(50, 130, 61, 16));
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        pricebox_2 = new QLineEdit(page_3);
        pricebox_2->setObjectName(QString::fromUtf8("pricebox_2"));
        pricebox_2->setGeometry(QRect(140, 170, 131, 20));
        stockbox_2 = new QLineEdit(page_3);
        stockbox_2->setObjectName(QString::fromUtf8("stockbox_2"));
        stockbox_2->setGeometry(QRect(140, 250, 131, 20));
        pressbox_2 = new QLineEdit(page_3);
        pressbox_2->setObjectName(QString::fromUtf8("pressbox_2"));
        pressbox_2->setGeometry(QRect(140, 330, 131, 20));
        label_20 = new QLabel(page_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(50, 50, 71, 16));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_21 = new QLabel(page_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(50, 170, 61, 16));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        bnoBox_2 = new QLineEdit(page_3);
        bnoBox_2->setObjectName(QString::fromUtf8("bnoBox_2"));
        bnoBox_2->setGeometry(QRect(140, 50, 131, 20));
        titlebox_2 = new QLineEdit(page_3);
        titlebox_2->setObjectName(QString::fromUtf8("titlebox_2"));
        titlebox_2->setGeometry(QRect(140, 90, 131, 20));
        totalbox_2 = new QLineEdit(page_3);
        totalbox_2->setObjectName(QString::fromUtf8("totalbox_2"));
        totalbox_2->setGeometry(QRect(140, 210, 131, 20));
        authorbox_2 = new QLineEdit(page_3);
        authorbox_2->setObjectName(QString::fromUtf8("authorbox_2"));
        authorbox_2->setGeometry(QRect(140, 130, 131, 20));
        label_22 = new QLabel(page_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(40, 210, 101, 21));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        controlPage->addWidget(page_3);
        bookTable = new QTableView(frame);
        bookTable->setObjectName(QString::fromUtf8("bookTable"));
        bookTable->setGeometry(QRect(20, 70, 900, 411));
        bookTable->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255,0.5)"));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(960, 520, 93, 28));
        excelbtn = new QPushButton(frame);
        excelbtn->setObjectName(QString::fromUtf8("excelbtn"));
        excelbtn->setGeometry(QRect(870, 40, 121, 23));

        retranslateUi(mainPage);

        controlPage->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainPage);
    } // setupUi

    void retranslateUi(QWidget *mainPage)
    {
        mainPage->setWindowTitle(QApplication::translate("mainPage", "Form", nullptr));
        pushButton->setText(QApplication::translate("mainPage", "\346\226\260\344\271\246\345\205\245\345\272\223", nullptr));
        pushButton_2->setText(QApplication::translate("mainPage", "\345\210\240\351\231\244\344\271\246\347\261\215", nullptr));
        pushButton_5->setText(QApplication::translate("mainPage", "\346\237\245\350\257\242", nullptr));
        searchbox->setText(QApplication::translate("mainPage", "\350\257\267\350\276\223\345\205\245\344\271\246\345\220\215", nullptr));
        pushButton_7->setText(QApplication::translate("mainPage", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("mainPage", "\345\210\240\351\231\244", nullptr));
        label_8->setText(QApplication::translate("mainPage", "bno", nullptr));
        delename->setPlaceholderText(QString());
        pushButton_4->setText(QApplication::translate("mainPage", "\347\241\256\350\256\244", nullptr));
        bnoBox->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("mainPage", "\345\205\245\345\272\223\346\226\260\344\271\246", nullptr));
        label_3->setText(QApplication::translate("mainPage", "bno\357\274\210\345\277\205\345\241\253", nullptr));
        label_4->setText(QApplication::translate("mainPage", "\344\275\234\350\200\205", nullptr));
        label_5->setText(QApplication::translate("mainPage", "\344\273\267\346\240\274", nullptr));
        label_6->setText(QApplication::translate("mainPage", "\347\247\215\347\261\273", nullptr));
        titlebox->setPlaceholderText(QString());
        authorbox->setPlaceholderText(QString());
        pushButton_3->setText(QApplication::translate("mainPage", "\347\241\256\350\256\244", nullptr));
        label_12->setText(QApplication::translate("mainPage", "\344\271\246\345\220\215", nullptr));
        totalbox->setInputMask(QString());
        totalbox->setText(QString());
        totalbox->setPlaceholderText(QString());
        label_13->setText(QApplication::translate("mainPage", "\346\200\273\350\227\217\344\271\246", nullptr));
        label_14->setText(QApplication::translate("mainPage", "\346\234\254\351\246\206\345\211\251\344\275\231", nullptr));
        stockbox->setPlaceholderText(QString());
        categorybox->setInputMask(QString());
        categorybox->setText(QString());
        categorybox->setPlaceholderText(QString());
        pricebox->setPlaceholderText(QString());
        label_17->setText(QApplication::translate("mainPage", "\345\207\272\347\211\210\347\244\276", nullptr));
        pressbox->setInputMask(QString());
        pressbox->setText(QString());
        pressbox->setPlaceholderText(QString());
        label_10->setText(QApplication::translate("mainPage", "\344\277\256\346\224\271", nullptr));
        update->setText(QApplication::translate("mainPage", "\347\241\256\345\256\232", nullptr));
        label_15->setText(QApplication::translate("mainPage", "\344\271\246\345\220\215", nullptr));
        label_16->setText(QApplication::translate("mainPage", "\346\234\254\351\246\206\345\211\251\344\275\231", nullptr));
        label_11->setText(QApplication::translate("mainPage", "\347\247\215\347\261\273", nullptr));
        label_18->setText(QApplication::translate("mainPage", "\345\207\272\347\211\210\347\244\276", nullptr));
        categorybox_2->setInputMask(QString());
        categorybox_2->setText(QString());
        categorybox_2->setPlaceholderText(QString());
        label_19->setText(QApplication::translate("mainPage", "\344\275\234\350\200\205", nullptr));
        pricebox_2->setPlaceholderText(QString());
        stockbox_2->setPlaceholderText(QString());
        pressbox_2->setInputMask(QString());
        pressbox_2->setText(QString());
        pressbox_2->setPlaceholderText(QString());
        label_20->setText(QApplication::translate("mainPage", "bno\357\274\210\345\277\205\345\241\253", nullptr));
        label_21->setText(QApplication::translate("mainPage", "\344\273\267\346\240\274", nullptr));
        bnoBox_2->setPlaceholderText(QString());
        titlebox_2->setPlaceholderText(QString());
        totalbox_2->setInputMask(QString());
        totalbox_2->setText(QString());
        totalbox_2->setPlaceholderText(QString());
        authorbox_2->setPlaceholderText(QString());
        label_22->setText(QApplication::translate("mainPage", "\346\200\273\350\227\217\344\271\246", nullptr));
        pushButton_8->setText(QApplication::translate("mainPage", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        excelbtn->setText(QApplication::translate("mainPage", "\346\211\271\351\207\217\345\257\274\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainPage: public Ui_mainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
