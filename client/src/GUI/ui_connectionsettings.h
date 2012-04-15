/********************************************************************************
** Form generated from reading UI file 'connectionsettings.ui'
**
** Created: Sun 15. Apr 23:00:25 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONSETTINGS_H
#define UI_CONNECTIONSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConnectionSettings
{
public:
    QLineEdit *Server;
    QLineEdit *Port;
    QPushButton *Ok;
    QPushButton *Reset;

    void setupUi(QDialog *ConnectionSettings)
    {
        if (ConnectionSettings->objectName().isEmpty())
            ConnectionSettings->setObjectName(QString::fromUtf8("ConnectionSettings"));
        ConnectionSettings->resize(320, 62);
        Server = new QLineEdit(ConnectionSettings);
        Server->setObjectName(QString::fromUtf8("Server"));
        Server->setGeometry(QRect(10, 10, 221, 20));
        Port = new QLineEdit(ConnectionSettings);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setGeometry(QRect(10, 30, 221, 21));
        Ok = new QPushButton(ConnectionSettings);
        Ok->setObjectName(QString::fromUtf8("Ok"));
        Ok->setGeometry(QRect(240, 10, 75, 23));
        Reset = new QPushButton(ConnectionSettings);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setGeometry(QRect(240, 30, 75, 23));

        retranslateUi(ConnectionSettings);

        QMetaObject::connectSlotsByName(ConnectionSettings);
    } // setupUi

    void retranslateUi(QDialog *ConnectionSettings)
    {
        ConnectionSettings->setWindowTitle(QApplication::translate("ConnectionSettings", "Connection Settings", 0, QApplication::UnicodeUTF8));
        Server->setText(QApplication::translate("ConnectionSettings", "86.193.109.252", 0, QApplication::UnicodeUTF8));
        Port->setText(QApplication::translate("ConnectionSettings", "25493", 0, QApplication::UnicodeUTF8));
        Ok->setText(QApplication::translate("ConnectionSettings", "Ok", 0, QApplication::UnicodeUTF8));
        Reset->setText(QApplication::translate("ConnectionSettings", "Reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConnectionSettings: public Ui_ConnectionSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONSETTINGS_H
