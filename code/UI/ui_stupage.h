/********************************************************************************
** Form generated from reading UI file 'stupage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUPAGE_H
#define UI_STUPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stupage
{
public:
    QLineEdit *boxSch;
    QPushButton *btnsch;
    QPushButton *btnQuit;
    QTableView *bookTable;
    QLineEdit *bnoBox;
    QLabel *label;
    QPushButton *borrowbtn;
    QPushButton *showhisBtn;
    QPushButton *returnbtn;

    void setupUi(QWidget *stupage)
    {
        if (stupage->objectName().isEmpty())
            stupage->setObjectName(QString::fromUtf8("stupage"));
        stupage->resize(1150, 600);
        boxSch = new QLineEdit(stupage);
        boxSch->setObjectName(QString::fromUtf8("boxSch"));
        boxSch->setGeometry(QRect(210, 40, 161, 23));
        btnsch = new QPushButton(stupage);
        btnsch->setObjectName(QString::fromUtf8("btnsch"));
        btnsch->setGeometry(QRect(120, 40, 61, 24));
        btnQuit = new QPushButton(stupage);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(770, 540, 89, 24));
        bookTable = new QTableView(stupage);
        bookTable->setObjectName(QString::fromUtf8("bookTable"));
        bookTable->setGeometry(QRect(10, 100, 800, 411));
        bnoBox = new QLineEdit(stupage);
        bnoBox->setObjectName(QString::fromUtf8("bnoBox"));
        bnoBox->setGeometry(QRect(930, 190, 113, 41));
        label = new QLabel(stupage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(830, 194, 72, 31));
        borrowbtn = new QPushButton(stupage);
        borrowbtn->setObjectName(QString::fromUtf8("borrowbtn"));
        borrowbtn->setGeometry(QRect(870, 330, 89, 24));
        showhisBtn = new QPushButton(stupage);
        showhisBtn->setObjectName(QString::fromUtf8("showhisBtn"));
        showhisBtn->setGeometry(QRect(640, 70, 89, 24));
        returnbtn = new QPushButton(stupage);
        returnbtn->setObjectName(QString::fromUtf8("returnbtn"));
        returnbtn->setGeometry(QRect(1010, 330, 89, 24));

        retranslateUi(stupage);

        QMetaObject::connectSlotsByName(stupage);
    } // setupUi

    void retranslateUi(QWidget *stupage)
    {
        stupage->setWindowTitle(QApplication::translate("stupage", "Form", nullptr));
        boxSch->setText(QApplication::translate("stupage", "\350\257\267\350\276\223\345\205\245\344\271\246\345\220\215", nullptr));
        btnsch->setText(QApplication::translate("stupage", "\346\220\234\347\264\242", nullptr));
        btnQuit->setText(QApplication::translate("stupage", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("stupage", "\344\271\246\345\272\217\345\210\227\345\217\267", nullptr));
        borrowbtn->setText(QApplication::translate("stupage", "\345\200\237\344\271\246", nullptr));
        showhisBtn->setText(QApplication::translate("stupage", "\346\230\276\347\244\272\350\256\260\345\275\225", nullptr));
        returnbtn->setText(QApplication::translate("stupage", "\350\277\230\344\271\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stupage: public Ui_stupage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUPAGE_H
