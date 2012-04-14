/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 13. Apr 20:25:58 2012
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
    QWidget *tab;
    QLabel *label_3;
    QLabel *FondWidget2_2;
    QLabel *FondWidget2_3;
    QListView *listView_2;
    QLabel *StatusText_2;
    QListView *listView_3;
    QLabel *StatusText_3;
    QLineEdit *SearchMovie;
    QPushButton *Search;
    QLabel *StatusText_4;
    QLabel *StatusText_5;
    QLineEdit *SearchMovie_2;
    QComboBox *comboBox;
    QLabel *StatusText_6;
    QLabel *StatusText_7;
    QLineEdit *SearchMovie_3;
    QLabel *StatusText_8;
    QLabel *StatusText_9;
    QLineEdit *SearchMovie_4;
    QWidget *Messenger;
    QStackedWidget *stackedWidget2;
    QWidget *page;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;
    QPushButton *Refresh;
    QPushButton *Config;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QPushButton *Refresh_4;
    QPushButton *Refresh_5;
    QPushButton *pushButton_7;
    QPushButton *Config_3;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_6;
    QLineEdit *lineEdit_4;
    QTextEdit *textEdit_3;
    QLabel *label_10;
    QPushButton *pushButton_8;
    QPushButton *ChangeComLeft;
    QPushButton *ChangeComRight;
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
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, -10, 1071, 831));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        FondWidget2_2 = new QLabel(tab);
        FondWidget2_2->setObjectName(QString::fromUtf8("FondWidget2_2"));
        FondWidget2_2->setGeometry(QRect(740, -10, 381, 541));
        FondWidget2_2->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre4.png")));
        FondWidget2_3 = new QLabel(tab);
        FondWidget2_3->setObjectName(QString::fromUtf8("FondWidget2_3"));
        FondWidget2_3->setGeometry(QRect(740, 510, 381, 541));
        FondWidget2_3->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre4.png")));
        listView_2 = new QListView(tab);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(10, 60, 721, 721));
        StatusText_2 = new QLabel(tab);
        StatusText_2->setObjectName(QString::fromUtf8("StatusText_2"));
        StatusText_2->setGeometry(QRect(830, 30, 121, 21));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Europe_Ext"));
        font7.setPointSize(15);
        font7.setBold(true);
        font7.setWeight(75);
        StatusText_2->setFont(font7);
        listView_3 = new QListView(tab);
        listView_3->setObjectName(QString::fromUtf8("listView_3"));
        listView_3->setGeometry(QRect(760, 60, 261, 421));
        StatusText_3 = new QLabel(tab);
        StatusText_3->setObjectName(QString::fromUtf8("StatusText_3"));
        StatusText_3->setGeometry(QRect(840, 560, 121, 21));
        StatusText_3->setFont(font7);
        SearchMovie = new QLineEdit(tab);
        SearchMovie->setObjectName(QString::fromUtf8("SearchMovie"));
        SearchMovie->setGeometry(QRect(870, 600, 141, 20));
        Search = new QPushButton(tab);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(840, 760, 101, 31));
        Search->setStyleSheet(QString::fromUtf8("#Search {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"#Search:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#Search:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        StatusText_4 = new QLabel(tab);
        StatusText_4->setObjectName(QString::fromUtf8("StatusText_4"));
        StatusText_4->setGeometry(QRect(760, 600, 121, 21));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Europe_Ext"));
        font8.setPointSize(9);
        StatusText_4->setFont(font8);
        StatusText_5 = new QLabel(tab);
        StatusText_5->setObjectName(QString::fromUtf8("StatusText_5"));
        StatusText_5->setGeometry(QRect(760, 660, 121, 21));
        StatusText_5->setFont(font8);
        SearchMovie_2 = new QLineEdit(tab);
        SearchMovie_2->setObjectName(QString::fromUtf8("SearchMovie_2"));
        SearchMovie_2->setGeometry(QRect(870, 630, 141, 20));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(870, 720, 141, 22));
        StatusText_6 = new QLabel(tab);
        StatusText_6->setObjectName(QString::fromUtf8("StatusText_6"));
        StatusText_6->setGeometry(QRect(770, 720, 121, 21));
        StatusText_6->setFont(font8);
        StatusText_7 = new QLabel(tab);
        StatusText_7->setObjectName(QString::fromUtf8("StatusText_7"));
        StatusText_7->setGeometry(QRect(760, 630, 121, 21));
        StatusText_7->setFont(font8);
        SearchMovie_3 = new QLineEdit(tab);
        SearchMovie_3->setObjectName(QString::fromUtf8("SearchMovie_3"));
        SearchMovie_3->setGeometry(QRect(870, 660, 141, 20));
        StatusText_8 = new QLabel(tab);
        StatusText_8->setObjectName(QString::fromUtf8("StatusText_8"));
        StatusText_8->setGeometry(QRect(120, 20, 521, 21));
        QPalette palette;
        QBrush brush(QColor(253, 253, 253, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        StatusText_8->setPalette(palette);
        QFont font9;
        font9.setFamily(QString::fromUtf8("Europe_Ext"));
        font9.setPointSize(18);
        font9.setBold(true);
        font9.setWeight(75);
        StatusText_8->setFont(font9);
        StatusText_9 = new QLabel(tab);
        StatusText_9->setObjectName(QString::fromUtf8("StatusText_9"));
        StatusText_9->setGeometry(QRect(760, 690, 121, 21));
        StatusText_9->setFont(font8);
        SearchMovie_4 = new QLineEdit(tab);
        SearchMovie_4->setObjectName(QString::fromUtf8("SearchMovie_4"));
        SearchMovie_4->setGeometry(QRect(870, 690, 141, 20));
        tabWidget->addTab(tab, QString());
        Messenger = new QWidget();
        Messenger->setObjectName(QString::fromUtf8("Messenger"));
        stackedWidget2 = new QStackedWidget(Messenger);
        stackedWidget2->setObjectName(QString::fromUtf8("stackedWidget2"));
        stackedWidget2->setGeometry(QRect(0, 20, 1051, 751));
        QFont font10;
        font10.setPointSize(10);
        stackedWidget2->setFont(font10);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 30, 1041, 701));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1039, 699));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(460, 0, 151, 21));
        QFont font11;
        font11.setPointSize(15);
        label_2->setFont(font11);
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
        pushButton_2->setGeometry(QRect(990, 730, 51, 21));
        pushButton_2->setFont(font10);
        stackedWidget2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(-20, -40, 1081, 911));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 720, 81, 21));
        pushButton_5->setFont(font10);
        Refresh_4 = new QPushButton(page_2);
        Refresh_4->setObjectName(QString::fromUtf8("Refresh_4"));
        Refresh_4->setGeometry(QRect(30, 0, 31, 31));
        Refresh_4->setIcon(icon3);
        Refresh_4->setIconSize(QSize(30, 30));
        Refresh_5 = new QPushButton(page_2);
        Refresh_5->setObjectName(QString::fromUtf8("Refresh_5"));
        Refresh_5->setGeometry(QRect(0, 0, 31, 31));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../resources/images/offline.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Refresh_5->setIcon(icon5);
        Refresh_5->setIconSize(QSize(30, 30));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(490, 720, 81, 21));
        pushButton_7->setFont(font10);
        Config_3 = new QPushButton(page_2);
        Config_3->setObjectName(QString::fromUtf8("Config_3"));
        Config_3->setGeometry(QRect(60, 0, 31, 31));
        Config_3->setIcon(icon4);
        Config_3->setIconSize(QSize(25, 25));
        scrollArea_4 = new QScrollArea(page_2);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(0, 30, 1041, 691));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 1039, 689));
        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 620, 661, 61));
        textEdit_3 = new QTextEdit(scrollAreaWidgetContents_6);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(10, 10, 1021, 601));
        scrollArea_4->setWidget(scrollAreaWidgetContents_6);
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 0, 691, 21));
        QPalette palette1;
        QBrush brush2(QColor(250, 250, 250, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_10->setPalette(palette1);
        label_10->setFont(font7);
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(600, 720, 81, 21));
        pushButton_8->setFont(font10);
        stackedWidget2->addWidget(page_2);
        label_5->raise();
        label_5->raise();
        pushButton_5->raise();
        Refresh_4->raise();
        Refresh_5->raise();
        pushButton_7->raise();
        Config_3->raise();
        scrollArea_4->raise();
        label_10->raise();
        pushButton_8->raise();
        ChangeComLeft = new QPushButton(Messenger);
        ChangeComLeft->setObjectName(QString::fromUtf8("ChangeComLeft"));
        ChangeComLeft->setGeometry(QRect(1000, 0, 21, 21));
        ChangeComLeft->setIcon(icon1);
        ChangeComRight = new QPushButton(Messenger);
        ChangeComRight->setObjectName(QString::fromUtf8("ChangeComRight"));
        ChangeComRight->setGeometry(QRect(1020, 0, 21, 21));
        ChangeComRight->setIcon(icon2);
        tabWidget->addTab(Messenger, QString());
        stackedWidget2->raise();
        ChangeComLeft->raise();
        ChangeComRight->raise();
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
        QFont font12;
        font12.setFamily(QString::fromUtf8("Europe_Ext"));
        label_24->setFont(font12);
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(170, 110, 51, 23));
        lcdNumber_4->setFont(font);
        UsersConnectedLabel = new QLabel(centralwidget);
        UsersConnectedLabel->setObjectName(QString::fromUtf8("UsersConnectedLabel"));
        UsersConnectedLabel->setGeometry(QRect(230, 110, 121, 21));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Europe_Ext"));
        font13.setPointSize(8);
        font13.setKerning(false);
        UsersConnectedLabel->setFont(font13);
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
        stackedWidget2->setCurrentIndex(1);


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
        label_3->setText(QString());
        FondWidget2_2->setText(QString());
        FondWidget2_3->setText(QString());
        StatusText_2->setText(QApplication::translate("MainWindow", "Libraries", 0, QApplication::UnicodeUTF8));
        StatusText_3->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        Search->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        StatusText_4->setText(QApplication::translate("MainWindow", "Movie Title   :", 0, QApplication::UnicodeUTF8));
        StatusText_5->setText(QApplication::translate("MainWindow", "  Actor           :", 0, QApplication::UnicodeUTF8));
        StatusText_6->setText(QApplication::translate("MainWindow", "Type             :", 0, QApplication::UnicodeUTF8));
        StatusText_7->setText(QApplication::translate("MainWindow", "Library Title :", 0, QApplication::UnicodeUTF8));
        StatusText_8->setText(QApplication::translate("MainWindow", "Choose your Movie, and share it !!!", 0, QApplication::UnicodeUTF8));
        StatusText_9->setText(QApplication::translate("MainWindow", " Director       :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Libraries", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Messenger", 0, QApplication::UnicodeUTF8));
        Refresh->setText(QString());
        Config->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "Create", 0, QApplication::UnicodeUTF8));
        Refresh_4->setText(QString());
        Refresh_5->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "Join", 0, QApplication::UnicodeUTF8));
        Config_3->setText(QString());
        lineEdit_4->setText(QApplication::translate("MainWindow", "Discuter ici", 0, QApplication::UnicodeUTF8));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Europe_Ext'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">kenni : Hello toto</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">toto: Hello kenni</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">titi: hi all</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Movie : Fight Club", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        ChangeComLeft->setText(QString());
        ChangeComRight->setText(QString());
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
