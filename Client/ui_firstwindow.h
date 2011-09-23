/********************************************************************************
** Form generated from reading UI file 'firstwindow.ui'
**
** Created: Wed Sep 21 11:41:08 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTWINDOW_H
#define UI_FIRSTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *Username;
    QLineEdit *Password;
    QPushButton *pushButton_Create;
    QPushButton *pushButton_LostPass;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Ok;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirstWindow)
    {
        if (FirstWindow->objectName().isEmpty())
            FirstWindow->setObjectName(QString::fromUtf8("FirstWindow"));
        FirstWindow->resize(302, 410);
        centralWidget = new QWidget(FirstWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Username = new QLineEdit(centralWidget);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(100, 210, 151, 27));
        Password = new QLineEdit(centralWidget);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(100, 240, 151, 27));
        Password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        Password->setEchoMode(QLineEdit::Password);
        Password->setReadOnly(false);
        pushButton_Create = new QPushButton(centralWidget);
        pushButton_Create->setObjectName(QString::fromUtf8("pushButton_Create"));
        pushButton_Create->setGeometry(QRect(100, 330, 97, 27));
        pushButton_LostPass = new QPushButton(centralWidget);
        pushButton_LostPass->setObjectName(QString::fromUtf8("pushButton_LostPass"));
        pushButton_LostPass->setGeometry(QRect(260, 240, 31, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 210, 81, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 240, 81, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, -20, 321, 211));
        label_3->setPixmap(QPixmap(QString::fromUtf8("image/abstract_0092.jpg")));
        pushButton_Cancel = new QPushButton(centralWidget);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(50, 280, 97, 27));
        pushButton_Ok = new QPushButton(centralWidget);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(150, 280, 97, 27));
        pushButton_Ok->setContextMenuPolicy(Qt::NoContextMenu);
        FirstWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FirstWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FirstWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FirstWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FirstWindow->setStatusBar(statusBar);

        retranslateUi(FirstWindow);

        QMetaObject::connectSlotsByName(FirstWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FirstWindow)
    {
        FirstWindow->setWindowTitle(QApplication::translate("FirstWindow", "BolOs", 0, QApplication::UnicodeUTF8));
        pushButton_Create->setText(QApplication::translate("FirstWindow", "Create", 0, QApplication::UnicodeUTF8));
        pushButton_LostPass->setText(QApplication::translate("FirstWindow", "?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FirstWindow", "Username :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FirstWindow", "Password :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        pushButton_Cancel->setText(QApplication::translate("FirstWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_Ok->setText(QApplication::translate("FirstWindow", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FirstWindow: public Ui_FirstWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWINDOW_H
