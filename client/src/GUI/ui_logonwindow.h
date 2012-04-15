/********************************************************************************
** Form generated from reading UI file 'logonwindow.ui'
**
** Created: Sun 15. Apr 23:00:25 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGONWINDOW_H
#define UI_LOGONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogonWindow
{
public:
    QAction *actionCreate_Account;
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *Logo;
    QLineEdit *Username;
    QLineEdit *Password;
    QPushButton *Ok;
    QPushButton *Cancel;
    QPushButton *Config;
    QPushButton *Refresh;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *LogonWindow)
    {
        if (LogonWindow->objectName().isEmpty())
            LogonWindow->setObjectName(QString::fromUtf8("LogonWindow"));
        LogonWindow->resize(380, 471);
        LogonWindow->setStyleSheet(QString::fromUtf8(""));
        actionCreate_Account = new QAction(LogonWindow);
        actionCreate_Account->setObjectName(QString::fromUtf8("actionCreate_Account"));
        actionExit = new QAction(LogonWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(LogonWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Logo = new QLabel(centralWidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(-160, -50, 601, 501));
        Logo->setStyleSheet(QString::fromUtf8("#body {\n"
"	background: rgb(192, 192, 192);\n"
"}"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/logo2.jpg")));
        Username = new QLineEdit(centralWidget);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(90, 390, 141, 20));
        Password = new QLineEdit(centralWidget);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(90, 410, 141, 20));
        Ok = new QPushButton(centralWidget);
        Ok->setObjectName(QString::fromUtf8("Ok"));
        Ok->setGeometry(QRect(240, 390, 51, 23));
        Cancel = new QPushButton(centralWidget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(240, 410, 51, 23));
        Config = new QPushButton(centralWidget);
        Config->setObjectName(QString::fromUtf8("Config"));
        Config->setGeometry(QRect(350, 0, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../resources/images/config.png"), QSize(), QIcon::Normal, QIcon::Off);
        Config->setIcon(icon);
        Config->setIconSize(QSize(25, 25));
        Refresh = new QPushButton(centralWidget);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        Refresh->setGeometry(QRect(320, 0, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../resources/images/Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Refresh->setIcon(icon1);
        Refresh->setIconSize(QSize(25, 25));
        LogonWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LogonWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 380, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        LogonWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionCreate_Account);
        menuFile->addAction(actionExit);

        retranslateUi(LogonWindow);

        QMetaObject::connectSlotsByName(LogonWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LogonWindow)
    {
        LogonWindow->setWindowTitle(QApplication::translate("LogonWindow", "L.M.C (Lecteur Media Communautaire)", 0, QApplication::UnicodeUTF8));
        actionCreate_Account->setText(QApplication::translate("LogonWindow", "Create Account", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("LogonWindow", "Exit", 0, QApplication::UnicodeUTF8));
        Logo->setText(QString());
        Ok->setText(QApplication::translate("LogonWindow", "Ok", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("LogonWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        Config->setText(QString());
        Refresh->setText(QString());
        menuFile->setTitle(QApplication::translate("LogonWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LogonWindow: public Ui_LogonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGONWINDOW_H
