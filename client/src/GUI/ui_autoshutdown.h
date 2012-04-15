/********************************************************************************
** Form generated from reading UI file 'autoshutdown.ui'
**
** Created: Mon 16. Apr 01:18:35 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOSHUTDOWN_H
#define UI_AUTOSHUTDOWN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoShutdown
{
public:
    QLabel *label;
    QPushButton *Shutdown;
    QPushButton *Restart;
    QLabel *label_2;
    QPushButton *Sleep;
    QComboBox *Time;
    QLineEdit *text;

    void setupUi(QWidget *AutoShutdown)
    {
        if (AutoShutdown->objectName().isEmpty())
            AutoShutdown->setObjectName(QString::fromUtf8("AutoShutdown"));
        AutoShutdown->resize(182, 163);
        label = new QLabel(AutoShutdown);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 141, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Europe_Ext"));
        font.setPointSize(10);
        label->setFont(font);
        Shutdown = new QPushButton(AutoShutdown);
        Shutdown->setObjectName(QString::fromUtf8("Shutdown"));
        Shutdown->setGeometry(QRect(70, 110, 41, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/shutdown.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Shutdown->setIcon(icon);
        Shutdown->setIconSize(QSize(40, 42));
        Restart = new QPushButton(AutoShutdown);
        Restart->setObjectName(QString::fromUtf8("Restart"));
        Restart->setGeometry(QRect(130, 110, 41, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/restart.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Restart->setIcon(icon1);
        Restart->setIconSize(QSize(40, 42));
        label_2 = new QLabel(AutoShutdown);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 201, 16));
        label_2->setFont(font);
        Sleep = new QPushButton(AutoShutdown);
        Sleep->setObjectName(QString::fromUtf8("Sleep"));
        Sleep->setGeometry(QRect(10, 110, 41, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/veille.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Sleep->setIcon(icon2);
        Sleep->setIconSize(QSize(40, 42));
        Time = new QComboBox(AutoShutdown);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setGeometry(QRect(70, 30, 41, 21));
        text = new QLineEdit(AutoShutdown);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(10, 80, 161, 20));

        retranslateUi(AutoShutdown);

        QMetaObject::connectSlotsByName(AutoShutdown);
    } // setupUi

    void retranslateUi(QWidget *AutoShutdown)
    {
        AutoShutdown->setWindowTitle(QApplication::translate("AutoShutdown", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AutoShutdown", "Your message", 0, QApplication::UnicodeUTF8));
        Shutdown->setText(QString());
        Restart->setText(QString());
        label_2->setText(QApplication::translate("AutoShutdown", "Time from now (min)", 0, QApplication::UnicodeUTF8));
        Sleep->setText(QString());
        Time->clear();
        Time->insertItems(0, QStringList()
         << QApplication::translate("AutoShutdown", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AutoShutdown", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AutoShutdown", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AutoShutdown", "45", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AutoShutdown", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AutoShutdown", "90", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AutoShutdown", "120", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AutoShutdown", "240", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class AutoShutdown: public Ui_AutoShutdown {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOSHUTDOWN_H
