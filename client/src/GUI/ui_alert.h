/********************************************************************************
** Form generated from reading UI file 'alert.ui'
**
** Created: Sun 15. Apr 23:00:25 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERT_H
#define UI_ALERT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Alert
{
public:
    QLabel *Text;
    QPushButton *pushButton;

    void setupUi(QDialog *Alert)
    {
        if (Alert->objectName().isEmpty())
            Alert->setObjectName(QString::fromUtf8("Alert"));
        Alert->resize(225, 79);
        Text = new QLabel(Alert);
        Text->setObjectName(QString::fromUtf8("Text"));
        Text->setGeometry(QRect(0, 20, 231, 20));
        Text->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Alert);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(74, 50, 81, 23));

        retranslateUi(Alert);

        QMetaObject::connectSlotsByName(Alert);
    } // setupUi

    void retranslateUi(QDialog *Alert)
    {
        Alert->setWindowTitle(QApplication::translate("Alert", "Alert", 0, QApplication::UnicodeUTF8));
        Text->setText(QApplication::translate("Alert", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Alert", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Alert: public Ui_Alert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERT_H
