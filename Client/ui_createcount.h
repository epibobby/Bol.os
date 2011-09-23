/********************************************************************************
** Form generated from reading UI file 'createcount.ui'
**
** Created: Wed Sep 21 11:41:08 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECOUNT_H
#define UI_CREATECOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateCount
{
public:
    QLineEdit *Username;
    QLineEdit *Password;
    QLineEdit *Email;
    QLineEdit *ConfirmPassword;
    QLineEdit *Birthday;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CreateCount)
    {
        if (CreateCount->objectName().isEmpty())
            CreateCount->setObjectName(QString::fromUtf8("CreateCount"));
        CreateCount->resize(411, 362);
        Username = new QLineEdit(CreateCount);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(150, 20, 231, 27));
        Password = new QLineEdit(CreateCount);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(150, 70, 231, 27));
        Email = new QLineEdit(CreateCount);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(150, 170, 231, 27));
        ConfirmPassword = new QLineEdit(CreateCount);
        ConfirmPassword->setObjectName(QString::fromUtf8("ConfirmPassword"));
        ConfirmPassword->setGeometry(QRect(150, 120, 231, 27));
        Birthday = new QLineEdit(CreateCount);
        Birthday->setObjectName(QString::fromUtf8("Birthday"));
        Birthday->setGeometry(QRect(150, 220, 231, 27));
        label_2 = new QLabel(CreateCount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 20, 91, 17));
        label_3 = new QLabel(CreateCount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 70, 91, 20));
        label_4 = new QLabel(CreateCount);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 161, 17));
        label_5 = new QLabel(CreateCount);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 170, 67, 17));
        label_6 = new QLabel(CreateCount);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 220, 67, 17));
        label = new QLabel(CreateCount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 250, 161, 131));
        label->setPixmap(QPixmap(QString::fromUtf8("image/abstract_0093.jpg")));
        pushButton = new QPushButton(CreateCount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 300, 97, 27));
        pushButton_2 = new QPushButton(CreateCount);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 300, 97, 27));

        retranslateUi(CreateCount);

        QMetaObject::connectSlotsByName(CreateCount);
    } // setupUi

    void retranslateUi(QDialog *CreateCount)
    {
        CreateCount->setWindowTitle(QApplication::translate("CreateCount", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CreateCount", "Username  :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CreateCount", "Password   :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CreateCount", "Rewrite password :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CreateCount", "Email  :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CreateCount", "Birthday :", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("CreateCount", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CreateCount", "Reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateCount: public Ui_CreateCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOUNT_H
