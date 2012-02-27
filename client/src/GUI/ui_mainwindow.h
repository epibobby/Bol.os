/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 27. Feb 10:58:05 2012
**      by: Qt User Interface Compiler version 4.7.4
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
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber_2;
    QLabel *StatusImage;
    QComboBox *StatusScroll;
    QLabel *FiendsLabel;
    QLabel *StatusText;
    QLabel *ChannelLabel;
    QLCDNumber *lcdNumber;
    QLabel *label_11;
    QLabel *label_10;
    QTabWidget *tabWidget;
    QWidget *LMC;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLabel *label_15;
    QLabel *WelcomeLabel;
    QLineEdit *AddYourLibraryLineEdit;
    QPushButton *AddYourLibrary;
    QLabel *label_27;
    QLabel *label_26;
    QScrollArea *YourLibrairies;
    QWidget *scrollAreaWidgetContents_3;
    QPushButton *ChangeLMCLeft;
    QPushButton *ChangeLMCRight;
    QWidget *page_4;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QPushButton *pushButton_6;
    QListView *listView;
    QWidget *page_7;
    QWidget *tab;
    QWidget *Messenger;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;
    QPushButton *Refresh;
    QPushButton *Config;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QPushButton *Config_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QPushButton *Refresh_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *Refresh_3;
    QPushButton *ChangeComLeft;
    QPushButton *ChangeComRight;
    QWidget *Profile;
    QPushButton *ChangeWidgetMovieLeft;
    QPushButton *ChangeWidgetMovieRight;
    QStackedWidget *WidgetMovie;
    QWidget *page_5;
    QLabel *label_14;
    QWidget *page_6;
    QLabel *DayMovieText;
    QLabel *DayMovieImg;
    QLabel *SumUpDayMovieMovieText;
    QTextEdit *SumUpDayMovieText;
    QPushButton *GoodDayMovie;
    QPushButton *MoreDayMovie;
    QLabel *RateDayMovieLabel;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *RankDayMovieText;
    QPushButton *LMCDayMovie;
    QLabel *GoodDayMovieText;
    QLabel *GoodDayMovieImg;
    QLabel *NumberDayMovieGood;
    QPushButton *PlayDayMovie;
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
        MainWindow->resize(1477, 855);
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 310, 381, 531));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/cadre7.jpg")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, -170, 421, 511));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/cadre6.jpg")));
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
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(380, -30, 1121, 881));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/cadre5.jpg")));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(460, 10, 951, 751));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Europe_Ext"));
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        font3.setKerning(false);
        tabWidget->setFont(font3);
        LMC = new QWidget();
        LMC->setObjectName(QString::fromUtf8("LMC"));
        stackedWidget_2 = new QStackedWidget(LMC);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 0, 951, 701));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(-340, -50, 1291, 761));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/logo1.jpg")));
        WelcomeLabel = new QLabel(page_3);
        WelcomeLabel->setObjectName(QString::fromUtf8("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(330, 20, 301, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe Print"));
        font4.setPointSize(50);
        WelcomeLabel->setFont(font4);
        AddYourLibraryLineEdit = new QLineEdit(page_3);
        AddYourLibraryLineEdit->setObjectName(QString::fromUtf8("AddYourLibraryLineEdit"));
        AddYourLibraryLineEdit->setGeometry(QRect(10, 330, 231, 41));
        QFont font5;
        font5.setPointSize(22);
        AddYourLibraryLineEdit->setFont(font5);
        AddYourLibrary = new QPushButton(page_3);
        AddYourLibrary->setObjectName(QString::fromUtf8("AddYourLibrary"));
        AddYourLibrary->setGeometry(QRect(240, 330, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../resources/images/icon_find.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddYourLibrary->setIcon(icon);
        AddYourLibrary->setIconSize(QSize(50, 50));
        label_27 = new QLabel(page_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(690, 180, 211, 31));
        QFont font6;
        font6.setPointSize(18);
        label_27->setFont(font6);
        label_26 = new QLabel(page_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 290, 241, 31));
        label_26->setFont(font6);
        YourLibrairies = new QScrollArea(page_3);
        YourLibrairies->setObjectName(QString::fromUtf8("YourLibrairies"));
        YourLibrairies->setGeometry(QRect(670, 220, 251, 271));
        YourLibrairies->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 249, 269));
        YourLibrairies->setWidget(scrollAreaWidgetContents_3);
        ChangeLMCLeft = new QPushButton(page_3);
        ChangeLMCLeft->setObjectName(QString::fromUtf8("ChangeLMCLeft"));
        ChangeLMCLeft->setGeometry(QRect(890, 0, 21, 21));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../resources/images/fleche1.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangeLMCLeft->setIcon(icon1);
        ChangeLMCRight = new QPushButton(page_3);
        ChangeLMCRight->setObjectName(QString::fromUtf8("ChangeLMCRight"));
        ChangeLMCRight->setGeometry(QRect(910, 0, 21, 21));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../resources/images/fleche2.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangeLMCRight->setIcon(icon2);
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        scrollArea_3 = new QScrollArea(page_4);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(10, 10, 251, 681));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 249, 679));
        pushButton_6 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 0, 251, 31));
        scrollArea_3->setWidget(scrollAreaWidgetContents_4);
        listView = new QListView(page_4);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(270, 10, 661, 681));
        stackedWidget_2->addWidget(page_4);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        stackedWidget_2->addWidget(page_7);
        tabWidget->addTab(LMC, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        Messenger = new QWidget();
        Messenger->setObjectName(QString::fromUtf8("Messenger"));
        stackedWidget = new QStackedWidget(Messenger);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 20, 931, 681));
        QFont font7;
        font7.setPointSize(10);
        stackedWidget->setFont(font7);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 30, 931, 621));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 929, 619));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 0, 151, 21));
        QFont font8;
        font8.setPointSize(15);
        label_2->setFont(font8);
        Refresh = new QPushButton(page);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        Refresh->setGeometry(QRect(0, 0, 31, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../resources/images/Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Refresh->setIcon(icon3);
        Refresh->setIconSize(QSize(30, 30));
        Config = new QPushButton(page);
        Config->setObjectName(QString::fromUtf8("Config"));
        Config->setGeometry(QRect(30, 0, 31, 31));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../resources/images/config.png"), QSize(), QIcon::Normal, QIcon::Off);
        Config->setIcon(icon4);
        Config->setIconSize(QSize(25, 25));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(880, 650, 51, 21));
        pushButton_2->setFont(font7);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        Config_2 = new QPushButton(page_2);
        Config_2->setObjectName(QString::fromUtf8("Config_2"));
        Config_2->setGeometry(QRect(60, 0, 31, 31));
        Config_2->setIcon(icon4);
        Config_2->setIconSize(QSize(25, 25));
        scrollArea_2 = new QScrollArea(page_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 30, 931, 621));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 929, 619));
        lineEdit = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 580, 811, 31));
        textEdit = new QTextEdit(scrollAreaWidgetContents_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 911, 561));
        pushButton_5 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(830, 580, 91, 31));
        QFont font9;
        font9.setPointSize(13);
        pushButton_5->setFont(font9);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(350, 0, 231, 21));
        label_9->setFont(font2);
        Refresh_2 = new QPushButton(page_2);
        Refresh_2->setObjectName(QString::fromUtf8("Refresh_2"));
        Refresh_2->setGeometry(QRect(30, 0, 31, 31));
        Refresh_2->setIcon(icon3);
        Refresh_2->setIconSize(QSize(30, 30));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 650, 81, 21));
        pushButton->setFont(font7);
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 650, 81, 21));
        pushButton_3->setFont(font7);
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(510, 650, 81, 21));
        pushButton_4->setFont(font7);
        Refresh_3 = new QPushButton(page_2);
        Refresh_3->setObjectName(QString::fromUtf8("Refresh_3"));
        Refresh_3->setGeometry(QRect(0, 0, 31, 31));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../resources/images/offline.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Refresh_3->setIcon(icon5);
        Refresh_3->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(page_2);
        ChangeComLeft = new QPushButton(Messenger);
        ChangeComLeft->setObjectName(QString::fromUtf8("ChangeComLeft"));
        ChangeComLeft->setGeometry(QRect(890, 0, 21, 21));
        ChangeComLeft->setIcon(icon1);
        ChangeComRight = new QPushButton(Messenger);
        ChangeComRight->setObjectName(QString::fromUtf8("ChangeComRight"));
        ChangeComRight->setGeometry(QRect(910, 0, 21, 21));
        ChangeComRight->setIcon(icon2);
        tabWidget->addTab(Messenger, QString());
        Profile = new QWidget();
        Profile->setObjectName(QString::fromUtf8("Profile"));
        tabWidget->addTab(Profile, QString());
        ChangeWidgetMovieLeft = new QPushButton(centralwidget);
        ChangeWidgetMovieLeft->setObjectName(QString::fromUtf8("ChangeWidgetMovieLeft"));
        ChangeWidgetMovieLeft->setGeometry(QRect(310, 340, 21, 21));
        ChangeWidgetMovieLeft->setIcon(icon1);
        ChangeWidgetMovieRight = new QPushButton(centralwidget);
        ChangeWidgetMovieRight->setObjectName(QString::fromUtf8("ChangeWidgetMovieRight"));
        ChangeWidgetMovieRight->setGeometry(QRect(330, 340, 21, 21));
        ChangeWidgetMovieRight->setIcon(icon2);
        WidgetMovie = new QStackedWidget(centralwidget);
        WidgetMovie->setObjectName(QString::fromUtf8("WidgetMovie"));
        WidgetMovie->setGeometry(QRect(30, 360, 321, 471));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_14 = new QLabel(page_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, -10, 191, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Europe_Ext"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        label_14->setFont(font10);
        WidgetMovie->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        DayMovieText = new QLabel(page_6);
        DayMovieText->setObjectName(QString::fromUtf8("DayMovieText"));
        DayMovieText->setGeometry(QRect(30, -10, 251, 31));
        DayMovieText->setFont(font10);
        DayMovieImg = new QLabel(page_6);
        DayMovieImg->setObjectName(QString::fromUtf8("DayMovieImg"));
        DayMovieImg->setGeometry(QRect(60, 30, 181, 261));
        DayMovieImg->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/batman.jpg")));
        SumUpDayMovieMovieText = new QLabel(page_6);
        SumUpDayMovieMovieText->setObjectName(QString::fromUtf8("SumUpDayMovieMovieText"));
        SumUpDayMovieMovieText->setGeometry(QRect(110, 320, 81, 20));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Europe_Ext"));
        font11.setPointSize(13);
        SumUpDayMovieMovieText->setFont(font11);
        SumUpDayMovieText = new QTextEdit(page_6);
        SumUpDayMovieText->setObjectName(QString::fromUtf8("SumUpDayMovieText"));
        SumUpDayMovieText->setGeometry(QRect(0, 340, 311, 121));
        GoodDayMovie = new QPushButton(page_6);
        GoodDayMovie->setObjectName(QString::fromUtf8("GoodDayMovie"));
        GoodDayMovie->setGeometry(QRect(0, 130, 51, 51));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../resources/images/good.gif"), QSize(), QIcon::Normal, QIcon::Off);
        GoodDayMovie->setIcon(icon6);
        GoodDayMovie->setIconSize(QSize(48, 48));
        MoreDayMovie = new QPushButton(page_6);
        MoreDayMovie->setObjectName(QString::fromUtf8("MoreDayMovie"));
        MoreDayMovie->setGeometry(QRect(260, 240, 51, 31));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Europe_Ext"));
        font12.setPointSize(8);
        font12.setBold(true);
        font12.setWeight(75);
        MoreDayMovie->setFont(font12);
        RateDayMovieLabel = new QLabel(page_6);
        RateDayMovieLabel->setObjectName(QString::fromUtf8("RateDayMovieLabel"));
        RateDayMovieLabel->setGeometry(QRect(260, 60, 51, 16));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Europe_Ext"));
        font13.setPointSize(12);
        RateDayMovieLabel->setFont(font13);
        label_13 = new QLabel(page_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(250, 80, 16, 21));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        label_16 = new QLabel(page_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(270, 80, 20, 21));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        RankDayMovieText = new QLabel(page_6);
        RankDayMovieText->setObjectName(QString::fromUtf8("RankDayMovieText"));
        RankDayMovieText->setGeometry(QRect(250, 100, 71, 20));
        QFont font14;
        font14.setPointSize(6);
        RankDayMovieText->setFont(font14);
        LMCDayMovie = new QPushButton(page_6);
        LMCDayMovie->setObjectName(QString::fromUtf8("LMCDayMovie"));
        LMCDayMovie->setGeometry(QRect(260, 210, 51, 31));
        QFont font15;
        font15.setFamily(QString::fromUtf8("Europe_Ext"));
        font15.setPointSize(10);
        font15.setBold(true);
        font15.setWeight(75);
        LMCDayMovie->setFont(font15);
        GoodDayMovieText = new QLabel(page_6);
        GoodDayMovieText->setObjectName(QString::fromUtf8("GoodDayMovieText"));
        GoodDayMovieText->setGeometry(QRect(260, 130, 51, 16));
        GoodDayMovieText->setFont(font13);
        GoodDayMovieImg = new QLabel(page_6);
        GoodDayMovieImg->setObjectName(QString::fromUtf8("GoodDayMovieImg"));
        GoodDayMovieImg->setGeometry(QRect(250, 150, 41, 41));
        GoodDayMovieImg->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/good mini.gif")));
        NumberDayMovieGood = new QLabel(page_6);
        NumberDayMovieGood->setObjectName(QString::fromUtf8("NumberDayMovieGood"));
        NumberDayMovieGood->setGeometry(QRect(290, 160, 31, 16));
        QFont font16;
        font16.setFamily(QString::fromUtf8("Europe_Ext"));
        NumberDayMovieGood->setFont(font16);
        PlayDayMovie = new QPushButton(page_6);
        PlayDayMovie->setObjectName(QString::fromUtf8("PlayDayMovie"));
        PlayDayMovie->setGeometry(QRect(130, 280, 41, 41));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../resources/images/playon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        PlayDayMovie->setIcon(icon7);
        PlayDayMovie->setIconSize(QSize(35, 35));
        WidgetMovie->addWidget(page_6);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 120, 121, 20));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(60, 100, 81, 21));
        label_24->setFont(font16);
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(170, 110, 51, 23));
        lcdNumber_4->setFont(font);
        UsersConnectedLabel = new QLabel(centralwidget);
        UsersConnectedLabel->setObjectName(QString::fromUtf8("UsersConnectedLabel"));
        UsersConnectedLabel->setGeometry(QRect(230, 110, 121, 21));
        QFont font17;
        font17.setFamily(QString::fromUtf8("Europe_Ext"));
        font17.setPointSize(8);
        font17.setKerning(false);
        UsersConnectedLabel->setFont(font17);
        TextEdit = new QTextEdit(centralwidget);
        TextEdit->setObjectName(QString::fromUtf8("TextEdit"));
        TextEdit->setGeometry(QRect(50, 160, 281, 101));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1477, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);
        WidgetMovie->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LMC", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
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
        label_10->setText(QString());
        label_15->setText(QString());
        WelcomeLabel->setText(QApplication::translate("MainWindow", "Welcome", 0, QApplication::UnicodeUTF8));
        AddYourLibraryLineEdit->setText(QString());
        AddYourLibrary->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "Your libraries", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "Add your library", 0, QApplication::UnicodeUTF8));
        ChangeLMCLeft->setText(QString());
        ChangeLMCRight->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "Batman", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(LMC), QApplication::translate("MainWindow", "LMC", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Libraries", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Messenger", 0, QApplication::UnicodeUTF8));
        Refresh->setText(QString());
        Config->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        Config_2->setText(QString());
        lineEdit->setText(QApplication::translate("MainWindow", "Discuter ici", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Europe_Ext'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">kenni : Hello toto</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">toto: Hello kenni</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">titi: hi all</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Movie : Fight Club", 0, QApplication::UnicodeUTF8));
        Refresh_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Create", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Join", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        Refresh_3->setText(QString());
        ChangeComLeft->setText(QString());
        ChangeComRight->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Messenger), QApplication::translate("MainWindow", "Community", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Profile), QApplication::translate("MainWindow", "Profile", 0, QApplication::UnicodeUTF8));
        ChangeWidgetMovieLeft->setText(QString());
        ChangeWidgetMovieRight->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Movie of the week", 0, QApplication::UnicodeUTF8));
        DayMovieText->setText(QApplication::translate("MainWindow", "One Minute One Movie", 0, QApplication::UnicodeUTF8));
        DayMovieImg->setText(QString());
        SumUpDayMovieMovieText->setText(QApplication::translate("MainWindow", "Sum up", 0, QApplication::UnicodeUTF8));
        SumUpDayMovieText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline;\">The Dark Knight</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Batman raises the stakes in his war on crime. With the help of Lt. Jim Gordon and District Attorney Harvey Dent,"
                        " Batman sets out to dismantle the remaining criminal organizations that plague the streets. The partnership proves to be effective, but they soon find themselves prey to a reign of chaos unleashed by a rising criminal mastermind known to the terrified citizens of Gotham as the Joker.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        GoodDayMovie->setText(QString());
        MoreDayMovie->setText(QApplication::translate("MainWindow", "More", 0, QApplication::UnicodeUTF8));
        RateDayMovieLabel->setText(QApplication::translate("MainWindow", "Rate", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        label_16->setText(QString());
        RankDayMovieText->setText(QApplication::translate("MainWindow", "8.6/10 (250 votes)", 0, QApplication::UnicodeUTF8));
        LMCDayMovie->setText(QApplication::translate("MainWindow", "LMC", 0, QApplication::UnicodeUTF8));
        GoodDayMovieText->setText(QApplication::translate("MainWindow", "Good", 0, QApplication::UnicodeUTF8));
        GoodDayMovieImg->setText(QString());
        NumberDayMovieGood->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        PlayDayMovie->setText(QString());
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
