/********************************************************************************
** Form generated from reading UI file 'signin_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_PAGE_H
#define UI_SIGNIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn_Page
{
public:
    QLineEdit *InputNumber;
    QLineEdit *InputPassWord;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *SignIn_Page)
    {
        if (SignIn_Page->objectName().isEmpty())
            SignIn_Page->setObjectName(QString::fromUtf8("SignIn_Page"));
        SignIn_Page->resize(900, 600);
        SignIn_Page->setStyleSheet(QString::fromUtf8(""));
        InputNumber = new QLineEdit(SignIn_Page);
        InputNumber->setObjectName(QString::fromUtf8("InputNumber"));
        InputNumber->setGeometry(QRect(290, 129, 241, 31));
        InputPassWord = new QLineEdit(SignIn_Page);
        InputPassWord->setObjectName(QString::fromUtf8("InputPassWord"));
        InputPassWord->setGeometry(QRect(290, 249, 241, 31));
        label_2 = new QLabel(SignIn_Page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 230, 72, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Agency FB\";\n"
"color: rgb(0, 0, 255);"));
        label_3 = new QLabel(SignIn_Page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 110, 72, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Agency FB\";\n"
"color: rgb(0, 170, 255);"));
        frame = new QFrame(SignIn_Page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -10, 900, 600));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border-image: url(:/new/prefix1/background1.jpg);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(240, 340, 115, 19));
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 11pt \"Agency FB\";"));
        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(440, 340, 115, 19));
        radioButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 11pt \"Agency FB\";"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 400, 75, 23));
        frame->raise();
        InputNumber->raise();
        InputPassWord->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(SignIn_Page);

        QMetaObject::connectSlotsByName(SignIn_Page);
    } // setupUi

    void retranslateUi(QWidget *SignIn_Page)
    {
        SignIn_Page->setWindowTitle(QApplication::translate("SignIn_Page", "SignIn_Page", nullptr));
        InputNumber->setPlaceholderText(QApplication::translate("SignIn_Page", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        InputPassWord->setPlaceholderText(QApplication::translate("SignIn_Page", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("SignIn_Page", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("SignIn_Page", "\350\264\246\345\217\267", nullptr));
        radioButton->setText(QApplication::translate("SignIn_Page", "\347\256\241\347\220\206\345\221\230", nullptr));
        radioButton_2->setText(QApplication::translate("SignIn_Page", "\345\255\246\347\224\237", nullptr));
        pushButton->setText(QApplication::translate("SignIn_Page", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn_Page: public Ui_SignIn_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_PAGE_H
