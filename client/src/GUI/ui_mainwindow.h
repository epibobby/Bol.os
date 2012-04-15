/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 15. Apr 23:21:15 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *FondWidget2;
    QLabel *FondWidget1;
    QLCDNumber *lcdNumber_2;
    QLabel *StatusImage;
    QComboBox *StatusScroll;
    QLabel *FiendsLabel;
    QLabel *StatusText;
    QLabel *ChannelLabel;
    QLCDNumber *lcdNumber;
    QLabel *label_11;
    QTabWidget *tabWidget;
    QWidget *LMC;
    QStackedWidget *stackedWidget1;
    QWidget *page_3;
    QLabel *label_15;
    QLabel *WelcomeLabel;
    QLineEdit *AddYourLibraryLineEdit;
    QPushButton *AddYourLibrary;
    QLabel *label_26;
    QLabel *label_27;
    QScrollArea *YourLibrairies;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *page_4;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QPushButton *pushButton_6;
    QListView *listView;
    QWidget *page_7;
    QPushButton *ChangeLMCLeft;
    QPushButton *ChangeLMCRight;
    QWidget *Messenger;
    QWidget *IRC;
    QLabel *label_7;
    QWidget *Profile;
    QLabel *label_6;
    QPushButton *ChangeWidgetMovieLeft;
    QPushButton *ChangeWidgetMovieRight;
    QLineEdit *lineEdit_2;
    QLabel *label_24;
    QLCDNumber *lcdNumber_4;
    QLabel *UsersConnectedLabel;
    QTextEdit *TextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1457, 855);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-90, -40, 1661, 901));
        label->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        FondWidget2 = new QLabel(centralwidget);
        FondWidget2->setObjectName(QString::fromUtf8("FondWidget2"));
        FondWidget2->setGeometry(QRect(0, 240, 381, 671));
        FondWidget2->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre2.png")));
        FondWidget1 = new QLabel(centralwidget);
        FondWidget1->setObjectName(QString::fromUtf8("FondWidget1"));
        FondWidget1->setGeometry(QRect(0, -170, 421, 511));
        FondWidget1->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre1.png")));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(169, 80, 51, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lcdNumber_2->setFont(font);
        StatusImage = new QLabel(centralwidget);
        StatusImage->setObjectName(QString::fromUtf8("StatusImage"));
        StatusImage->setGeometry(QRect(40, 0, 111, 101));
        StatusImage->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/StatusOffline.gif")));
        StatusScroll = new QComboBox(centralwidget);
        StatusScroll->setObjectName(QString::fromUtf8("StatusScroll"));
        StatusScroll->setGeometry(QRect(280, 10, 61, 22));
        FiendsLabel = new QLabel(centralwidget);
        FiendsLabel->setObjectName(QString::fromUtf8("FiendsLabel"));
        FiendsLabel->setGeometry(QRect(240, 50, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Europe_Ext"));
        font1.setPointSize(11);
        FiendsLabel->setFont(font1);
        StatusText = new QLabel(centralwidget);
        StatusText->setObjectName(QString::fromUtf8("StatusText"));
        StatusText->setGeometry(QRect(150, 10, 121, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Europe_Ext"));
        font2.setPointSize(15);
        StatusText->setFont(font2);
        ChannelLabel = new QLabel(centralwidget);
        ChannelLabel->setObjectName(QString::fromUtf8("ChannelLabel"));
        ChannelLabel->setGeometry(QRect(240, 80, 91, 21));
        ChannelLabel->setFont(font1);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(169, 50, 51, 23));
        lcdNumber->setFont(font);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(520, 540, 46, 13));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(390, 10, 1051, 821));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Europe_Ext"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        font3.setKerning(false);
        tabWidget->setFont(font3);
        LMC = new QWidget();
        LMC->setObjectName(QString::fromUtf8("LMC"));
        stackedWidget1 = new QStackedWidget(LMC);
        stackedWidget1->setObjectName(QString::fromUtf8("stackedWidget1"));
        stackedWidget1->setGeometry(QRect(0, 0, 1051, 791));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(-290, 0, 1341, 801));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/logo1.jpg")));
        WelcomeLabel = new QLabel(page_3);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(350, 40, 301, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe Print"));
        font4.setPointSize(50);
        WelcomeLabel->setFont(font4);
        AddYourLibraryLineEdit = new QLineEdit(page_3);
        AddYourLibraryLineEdit->setObjectName(QString::fromUtf8("AddYourLibraryLineEdit"));
        AddYourLibraryLineEdit->setGeometry(QRect(20, 330, 231, 41));
        QFont font5;
        font5.setPointSize(22);
        AddYourLibraryLineEdit->setFont(font5);
        AddYourLibrary = new QPushButton(page_3);
        AddYourLibrary->setObjectName(QString::fromUtf8("AddYourLibrary"));
        AddYourLibrary->setGeometry(QRect(250, 330, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../resources/images/icon_find.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddYourLibrary->setIcon(icon);
        AddYourLibrary->setIconSize(QSize(50, 50));
        label_26 = new QLabel(page_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(40, 290, 241, 31));
        QFont font6;
        font6.setPointSize(18);
        label_26->setFont(font6);
        label_27 = new QLabel(page_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(830, 200, 211, 31));
        label_27->setFont(font6);
        YourLibrairies = new QScrollArea(page_3);
        YourLibrairies->setObjectName(QString::fromUtf8("YourLibrairies"));
        YourLibrairies->setGeometry(QRect(750, 240, 251, 271));
        YourLibrairies->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 249, 269));
        YourLibrairies->setWidget(scrollAreaWidgetContents_3);
        stackedWidget1->addWidget(page_3);
        label_15->raise();
        WelcomeLabel->raise();
        AddYourLibraryLineEdit->raise();
        AddYourLibrary->raise();
        label_27->raise();
        label_26->raise();
        YourLibrairies->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        scrollArea_3 = new QScrollArea(page_4);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(10, 20, 251, 741));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 249, 739));
        pushButton_6 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 0, 251, 31));
        scrollArea_3->setWidget(scrollAreaWidgetContents_4);
        listView = new QListView(page_4);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(270, 20, 771, 741));
        stackedWidget1->addWidget(page_4);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        stackedWidget1->addWidget(page_7);
        ChangeLMCLeft = new QPushButton(LMC);
        ChangeLMCLeft->setObjectName(QString::fromUtf8("ChangeLMCLeft"));
        ChangeLMCLeft->setGeometry(QRect(1000, 0, 21, 21));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../resources/images/fleche1.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangeLMCLeft->setIcon(icon1);
        ChangeLMCRight = new QPushButton(LMC);
        ChangeLMCRight->setObjectName(QString::fromUtf8("ChangeLMCRight"));
        ChangeLMCRight->setGeometry(QRect(1020, 0, 21, 21));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../resources/images/fleche2.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangeLMCRight->setIcon(icon2);
        tabWidget->addTab(LMC, QString());
        Messenger = new QWidget();
        Messenger->setObjectName(QString::fromUtf8("Messenger"));
        IRC = new QWidget(Messenger);
        IRC->setObjectName(QString::fromUtf8("IRC"));
        IRC->setGeometry(QRect(0, 0, 1051, 801));
        label_7 = new QLabel(IRC);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 1661, 901));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        tabWidget->addTab(Messenger, QString());
        Profile = new QWidget();
        Profile->setObjectName(QString::fromUtf8("Profile"));
        label_6 = new QLabel(Profile);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-60, 0, 1661, 901));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        tabWidget->addTab(Profile, QString());
        ChangeWidgetMovieLeft = new QPushButton(centralwidget);
        ChangeWidgetMovieLeft->setObjectName(QString::fromUtf8("ChangeWidgetMovieLeft"));
        ChangeWidgetMovieLeft->setGeometry(QRect(310, 340, 21, 21));
        ChangeWidgetMovieLeft->setIcon(icon1);
        ChangeWidgetMovieRight = new QPushButton(centralwidget);
        ChangeWidgetMovieRight->setObjectName(QString::fromUtf8("ChangeWidgetMovieRight"));
        ChangeWidgetMovieRight->setGeometry(QRect(330, 340, 21, 21));
        ChangeWidgetMovieRight->setIcon(icon2);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 120, 121, 20));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(60, 100, 81, 21));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Europe_Ext"));
        label_24->setFont(font7);
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(170, 110, 51, 23));
        lcdNumber_4->setFont(font);
        UsersConnectedLabel = new QLabel(centralwidget);
        UsersConnectedLabel->setObjectName(QString::fromUtf8("UsersConnectedLabel"));
        UsersConnectedLabel->setGeometry(QRect(230, 110, 121, 21));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Europe_Ext"));
        font8.setPointSize(8);
        font8.setKerning(false);
        UsersConnectedLabel->setFont(font8);
        TextEdit = new QTextEdit(centralwidget);
        TextEdit->setObjectName(QString::fromUtf8("TextEdit"));
        TextEdit->setGeometry(QRect(50, 160, 281, 101));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1457, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        stackedWidget1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LMC", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        FondWidget2->setText(QString());
        FondWidget1->setText(QString());
        StatusImage->setText(QString());
        StatusScroll->clear();
        StatusScroll->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Offline", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Online", 0, QApplication::UnicodeUTF8)
        );
        FiendsLabel->setText(QApplication::translate("MainWindow", " Friends", 0, QApplication::UnicodeUTF8));
        StatusText->setText(QApplication::translate("MainWindow", "Bertuc_k", 0, QApplication::UnicodeUTF8));
        ChannelLabel->setText(QApplication::translate("MainWindow", "Channels", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_15->setText(QString());
        WelcomeLabel->setText(QApplication::translate("MainWindow", "Welcome", 0, QApplication::UnicodeUTF8));
        AddYourLibraryLineEdit->setText(QString());
        AddYourLibrary->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "Add your library", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "News", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "Batman", 0, QApplication::UnicodeUTF8));
        ChangeLMCLeft->setText(QString());
        ChangeLMCRight->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(LMC), QApplication::translate("MainWindow", "LMC", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Messenger), QApplication::translate("MainWindow", "Community", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Profile), QApplication::translate("MainWindow", "Profile", 0, QApplication::UnicodeUTF8));
        ChangeWidgetMovieLeft->setText(QString());
        ChangeWidgetMovieRight->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "Find a Movie", 0, QApplication::UnicodeUTF8));
        UsersConnectedLabel->setText(QApplication::translate("MainWindow", "Users connected", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
