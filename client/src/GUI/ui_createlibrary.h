/********************************************************************************
** Form generated from reading UI file 'createlibrary.ui'
**
** Created: Sun 15. Apr 23:00:25 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATELIBRARY_H
#define UI_CREATELIBRARY_H

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

class Ui_CreateLibrary
{
public:
    QLabel *label;
    QLineEdit *path;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_3;
    QPushButton *browse;
    QPushButton *OK;
    QPushButton *Cancel;

    void setupUi(QDialog *CreateLibrary)
    {
        if (CreateLibrary->objectName().isEmpty())
            CreateLibrary->setObjectName(QString::fromUtf8("CreateLibrary"));
        CreateLibrary->resize(328, 99);
        label = new QLabel(CreateLibrary);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-60, -20, 521, 201));
        label->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/fond2.png")));
        path = new QLineEdit(CreateLibrary);
        path->setObjectName(QString::fromUtf8("path"));
        path->setGeometry(QRect(70, 40, 221, 20));
        label_2 = new QLabel(CreateLibrary);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 61, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Europe_Ext"));
        font.setPointSize(11);
        label_2->setFont(font);
        name = new QLineEdit(CreateLibrary);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(70, 10, 251, 20));
        label_3 = new QLabel(CreateLibrary);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 61, 16));
        label_3->setFont(font);
        browse = new QPushButton(CreateLibrary);
        browse->setObjectName(QString::fromUtf8("browse"));
        browse->setGeometry(QRect(290, 40, 31, 23));
        OK = new QPushButton(CreateLibrary);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(90, 70, 75, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Europe_Ext"));
        OK->setFont(font1);
        Cancel = new QPushButton(CreateLibrary);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(180, 70, 75, 23));
        Cancel->setFont(font1);

        retranslateUi(CreateLibrary);

        QMetaObject::connectSlotsByName(CreateLibrary);
    } // setupUi

    void retranslateUi(QDialog *CreateLibrary)
    {
        CreateLibrary->setWindowTitle(QApplication::translate("CreateLibrary", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("CreateLibrary", "Name ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CreateLibrary", "Path   ", 0, QApplication::UnicodeUTF8));
        browse->setText(QApplication::translate("CreateLibrary", "...", 0, QApplication::UnicodeUTF8));
        OK->setText(QApplication::translate("CreateLibrary", "OK", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("CreateLibrary", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateLibrary: public Ui_CreateLibrary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATELIBRARY_H
