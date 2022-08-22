/********************************************************************************
** Form generated from reading UI file 'cardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDPAGE_H
#define UI_CARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cardpage
{
public:
    QStackedWidget *controlPage;
    QWidget *page_4;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *Boxdelete;
    QPushButton *Btndelete;
    QWidget *page_5;
    QLineEdit *cnoBox;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *nameBox;
    QLineEdit *departmentBox;
    QPushButton *okbottom;
    QLabel *label_28;
    QLineEdit *avbookBox;
    QLabel *label_29;
    QLineEdit *idBox;
    QWidget *page_6;
    QLabel *label_32;
    QPushButton *okbottom_2;
    QLineEdit *idBox_2;
    QLineEdit *nameBox_2;
    QLineEdit *avbookBox_2;
    QLabel *label_27;
    QLabel *label_31;
    QLineEdit *cnoBox_2;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *departmentBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *bookTable;
    QPushButton *pushButton_7;
    QLineEdit *searchbox;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *excelbtn;

    void setupUi(QWidget *cardpage)
    {
        if (cardpage->objectName().isEmpty())
            cardpage->setObjectName(QString::fromUtf8("cardpage"));
        cardpage->resize(1300, 641);
        controlPage = new QStackedWidget(cardpage);
        controlPage->setObjectName(QString::fromUtf8("controlPage"));
        controlPage->setGeometry(QRect(830, 100, 381, 411));
        controlPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 20, 81, 31));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 20pt \"Agency FB\";"));
        label_9 = new QLabel(page_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 130, 71, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt rgb(255, 0, 0)\"Agency FB\";\n"
"color: rgb(0, 0, 255);"));
        Boxdelete = new QLineEdit(page_4);
        Boxdelete->setObjectName(QString::fromUtf8("Boxdelete"));
        Boxdelete->setGeometry(QRect(140, 130, 151, 31));
        Btndelete = new QPushButton(page_4);
        Btndelete->setObjectName(QString::fromUtf8("Btndelete"));
        Btndelete->setGeometry(QRect(160, 230, 75, 23));
        Btndelete->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        controlPage->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        cnoBox = new QLineEdit(page_5);
        cnoBox->setObjectName(QString::fromUtf8("cnoBox"));
        cnoBox->setGeometry(QRect(170, 60, 131, 20));
        label_23 = new QLabel(page_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(170, 20, 121, 20));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_24 = new QLabel(page_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(70, 60, 71, 16));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_25 = new QLabel(page_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(70, 160, 61, 16));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_26 = new QLabel(page_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(70, 210, 61, 16));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        nameBox = new QLineEdit(page_5);
        nameBox->setObjectName(QString::fromUtf8("nameBox"));
        nameBox->setGeometry(QRect(170, 110, 131, 20));
        departmentBox = new QLineEdit(page_5);
        departmentBox->setObjectName(QString::fromUtf8("departmentBox"));
        departmentBox->setGeometry(QRect(170, 160, 131, 20));
        okbottom = new QPushButton(page_5);
        okbottom->setObjectName(QString::fromUtf8("okbottom"));
        okbottom->setGeometry(QRect(190, 320, 75, 23));
        okbottom->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_28 = new QLabel(page_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(70, 110, 61, 20));
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        avbookBox = new QLineEdit(page_5);
        avbookBox->setObjectName(QString::fromUtf8("avbookBox"));
        avbookBox->setGeometry(QRect(170, 260, 131, 20));
        label_29 = new QLabel(page_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(60, 260, 101, 21));
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        idBox = new QLineEdit(page_5);
        idBox->setObjectName(QString::fromUtf8("idBox"));
        idBox->setGeometry(QRect(170, 220, 131, 20));
        controlPage->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        label_32 = new QLabel(page_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(151, 10, 81, 31));
        okbottom_2 = new QPushButton(page_6);
        okbottom_2->setObjectName(QString::fromUtf8("okbottom_2"));
        okbottom_2->setGeometry(QRect(170, 320, 75, 23));
        okbottom_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        idBox_2 = new QLineEdit(page_6);
        idBox_2->setObjectName(QString::fromUtf8("idBox_2"));
        idBox_2->setGeometry(QRect(150, 220, 131, 20));
        nameBox_2 = new QLineEdit(page_6);
        nameBox_2->setObjectName(QString::fromUtf8("nameBox_2"));
        nameBox_2->setGeometry(QRect(150, 110, 131, 20));
        avbookBox_2 = new QLineEdit(page_6);
        avbookBox_2->setObjectName(QString::fromUtf8("avbookBox_2"));
        avbookBox_2->setGeometry(QRect(150, 260, 131, 20));
        label_27 = new QLabel(page_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(50, 160, 61, 16));
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_31 = new QLabel(page_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(50, 60, 71, 16));
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        cnoBox_2 = new QLineEdit(page_6);
        cnoBox_2->setObjectName(QString::fromUtf8("cnoBox_2"));
        cnoBox_2->setGeometry(QRect(150, 60, 131, 20));
        label_33 = new QLabel(page_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(50, 210, 61, 16));
        label_33->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_34 = new QLabel(page_6);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(50, 110, 61, 20));
        label_34->setStyleSheet(QString::fromUtf8("color: rgb(70, 0, 255);"));
        label_35 = new QLabel(page_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(40, 260, 101, 21));
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        departmentBox_2 = new QLineEdit(page_6);
        departmentBox_2->setObjectName(QString::fromUtf8("departmentBox_2"));
        departmentBox_2->setGeometry(QRect(150, 160, 131, 20));
        controlPage->addWidget(page_6);
        pushButton = new QPushButton(cardpage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 40, 75, 23));
        pushButton_2 = new QPushButton(cardpage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1010, 40, 75, 23));
        bookTable = new QTableView(cardpage);
        bookTable->setObjectName(QString::fromUtf8("bookTable"));
        bookTable->setGeometry(QRect(30, 100, 761, 411));
        bookTable->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255,0.5)"));
        pushButton_7 = new QPushButton(cardpage);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 40, 93, 28));
        searchbox = new QLineEdit(cardpage);
        searchbox->setObjectName(QString::fromUtf8("searchbox"));
        searchbox->setGeometry(QRect(220, 40, 231, 21));
        pushButton_8 = new QPushButton(cardpage);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(1070, 550, 93, 28));
        pushButton_9 = new QPushButton(cardpage);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(870, 30, 93, 28));
        excelbtn = new QPushButton(cardpage);
        excelbtn->setObjectName(QString::fromUtf8("excelbtn"));
        excelbtn->setGeometry(QRect(860, 70, 121, 23));

        retranslateUi(cardpage);

        controlPage->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(cardpage);
    } // setupUi

    void retranslateUi(QWidget *cardpage)
    {
        cardpage->setWindowTitle(QApplication::translate("cardpage", "Form", nullptr));
        label_7->setText(QApplication::translate("cardpage", "\345\210\240\351\231\244", nullptr));
        label_9->setText(QApplication::translate("cardpage", "cno", nullptr));
        Boxdelete->setPlaceholderText(QString());
        Btndelete->setText(QApplication::translate("cardpage", "\347\241\256\350\256\244", nullptr));
        cnoBox->setPlaceholderText(QString());
        label_23->setText(QApplication::translate("cardpage", "\345\273\272\345\215\241", nullptr));
        label_24->setText(QApplication::translate("cardpage", "cno\357\274\210\345\277\205\345\241\253", nullptr));
        label_25->setText(QApplication::translate("cardpage", "\351\203\250\351\227\250", nullptr));
        label_26->setText(QApplication::translate("cardpage", "\350\272\253\344\273\275", nullptr));
        nameBox->setPlaceholderText(QString());
        departmentBox->setPlaceholderText(QString());
        okbottom->setText(QApplication::translate("cardpage", "\347\241\256\350\256\244", nullptr));
        label_28->setText(QApplication::translate("cardpage", "\345\247\223\345\220\215", nullptr));
        avbookBox->setInputMask(QString());
        avbookBox->setText(QString());
        avbookBox->setPlaceholderText(QString());
        label_29->setText(QApplication::translate("cardpage", "\345\217\257\347\224\250\345\200\237\344\271\246\351\207\217", nullptr));
        idBox->setPlaceholderText(QString());
        label_32->setText(QApplication::translate("cardpage", "\344\277\256\346\224\271", nullptr));
        okbottom_2->setText(QApplication::translate("cardpage", "\347\241\256\350\256\244", nullptr));
        idBox_2->setPlaceholderText(QString());
        nameBox_2->setPlaceholderText(QString());
        avbookBox_2->setInputMask(QString());
        avbookBox_2->setText(QString());
        avbookBox_2->setPlaceholderText(QString());
        label_27->setText(QApplication::translate("cardpage", "\351\203\250\351\227\250", nullptr));
        label_31->setText(QApplication::translate("cardpage", "cno\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        cnoBox_2->setPlaceholderText(QString());
        label_33->setText(QApplication::translate("cardpage", "\350\272\253\344\273\275", nullptr));
        label_34->setText(QApplication::translate("cardpage", "\345\247\223\345\220\215", nullptr));
        label_35->setText(QApplication::translate("cardpage", "\345\217\257\347\224\250\345\200\237\344\271\246\351\207\217", nullptr));
        departmentBox_2->setPlaceholderText(QString());
        pushButton->setText(QApplication::translate("cardpage", "\345\273\272\345\215\241", nullptr));
        pushButton_2->setText(QApplication::translate("cardpage", "\345\210\240\345\215\241", nullptr));
        pushButton_7->setText(QApplication::translate("cardpage", "\346\237\245\350\257\242", nullptr));
        searchbox->setPlaceholderText(QApplication::translate("cardpage", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        pushButton_8->setText(QApplication::translate("cardpage", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_9->setText(QApplication::translate("cardpage", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        excelbtn->setText(QApplication::translate("cardpage", "\346\211\271\351\207\217\345\257\274\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cardpage: public Ui_cardpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDPAGE_H
