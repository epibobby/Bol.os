/********************************************************************************
** Form generated from reading UI file 'createcount.ui'
**
** Created: Sun 26. Feb 11:18:25 2012
**      by: Qt User Interface Compiler version 4.7.4
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
    QLabel *label_4;
    QLineEdit *Email;
    QLineEdit *ConfirmPassword;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *Username;
    QLineEdit *Password;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *Birthday;
    QPushButton *Create;
    QPushButton *Reset;

    void setupUi(QDialog *CreateCount)
    {
        if (CreateCount->objectName().isEmpty())
            CreateCount->setObjectName(QString::fromUtf8("CreateCount"));
        CreateCount->resize(400, 300);
        label_4 = new QLabel(CreateCount);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 161, 17));
        Email = new QLineEdit(CreateCount);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(140, 170, 231, 27));
        ConfirmPassword = new QLineEdit(CreateCount);
        ConfirmPassword->setObjectName(QString::fromUtf8("ConfirmPassword"));
        ConfirmPassword->setGeometry(QRect(140, 120, 231, 27));
        label_2 = new QLabel(CreateCount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 20, 91, 17));
        label_5 = new QLabel(CreateCount);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 170, 67, 17));
        Username = new QLineEdit(CreateCount);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(140, 20, 231, 27));
        Password = new QLineEdit(CreateCount);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(140, 70, 231, 27));
        label_3 = new QLabel(CreateCount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 91, 20));
        label_6 = new QLabel(CreateCount);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 220, 67, 17));
        Birthday = new QLineEdit(CreateCount);
        Birthday->setObjectName(QString::fromUtf8("Birthday"));
        Birthday->setGeometry(QRect(140, 220, 231, 27));
        Create = new QPushButton(CreateCount);
        Create->setObjectName(QString::fromUtf8("Create"));
        Create->setGeometry(QRect(120, 270, 75, 23));
        Reset = new QPushButton(CreateCount);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setGeometry(QRect(200, 270, 75, 23));

        retranslateUi(CreateCount);

        QMetaObject::connectSlotsByName(CreateCount);
    } // setupUi

    void retranslateUi(QDialog *CreateCount)
    {
        CreateCount->setWindowTitle(QApplication::translate("CreateCount", "Dialog", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CreateCount", "Rewrite password :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CreateCount", "Username  :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CreateCount", "Email  :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CreateCount", "Password   :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CreateCount", "Birthday :", 0, QApplication::UnicodeUTF8));
        Create->setText(QApplication::translate("CreateCount", "Create", 0, QApplication::UnicodeUTF8));
        Reset->setText(QApplication::translate("CreateCount", "Reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateCount: public Ui_CreateCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOUNT_H
