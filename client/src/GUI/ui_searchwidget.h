/********************************************************************************
** Form generated from reading UI file 'searchwidget.ui'
**
** Created: Thu 12. Apr 09:38:33 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QLabel *label_20;
    QTextEdit *SumUpMovieText;
    QLabel *Title;
    QListView *listView;
    QLabel *FondWidget2;
    QLabel *SumUpMinuteMovieMovieText_6;
    QTextEdit *SumUpMinuteMovieText_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_19;
    QPushButton *CreateChannel;
    QPushButton *SendComment;
    QLabel *SumUpMinuteMovieMovieText_5;
    QLabel *RankMinuteMovieText;
    QLabel *label_13;
    QPushButton *GoodMinuteMovie;
    QLabel *Title2;
    QLabel *label;
    QPushButton *pushButton_6;
    QPushButton *PlayTrailer;
    QLabel *RateMinuteMovieLabel_2;
    QLabel *GoodMinuteMovieImg;
    QLabel *label_5;
    QLabel *SumUpMinuteMovieMovieText;
    QLabel *SumUpMinuteMovieMovieText_2;
    QLabel *label_16;
    QPushButton *PlayMovie;
    QLabel *label_15;
    QLabel *RateMinuteMovieLabel;
    QLabel *GoodMinuteMovieText;
    QLabel *SumUpMinuteMovieMovieText_4;
    QLabel *label_17;
    QLabel *label_8;
    QLabel *label_18;
    QTextEdit *textEdit;
    QLabel *SumUpMinuteMovieMovieText_3;
    QPushButton *JoinChannel;
    QPushButton *pushButton;
    QTextEdit *SumUpMinuteMovieText_2;
    QLabel *label_7;
    QPushButton *Search;
    QLabel *SumUpMinuteMovieMovieText_7;
    QLabel *SumUpMinuteMovieMovieText_8;
    QLabel *SumUpMinuteMovieMovieText_9;
    QLabel *SumUpMinuteMovieMovieText_10;
    QLineEdit *SearchMovie;
    QLabel *label_2;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QString::fromUtf8("SearchWidget"));
        SearchWidget->resize(1051, 780);
        label_20 = new QLabel(SearchWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(-110, -10, 1341, 841));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        SumUpMovieText = new QTextEdit(SearchWidget);
        SumUpMovieText->setObjectName(QString::fromUtf8("SumUpMovieText"));
        SumUpMovieText->setGeometry(QRect(320, 170, 721, 111));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        SumUpMovieText->setFont(font);
        Title = new QLabel(SearchWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(250, 10, 841, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Europe_Ext"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        Title->setFont(font1);
        Title->setTextFormat(Qt::AutoText);
        Title->setAlignment(Qt::AlignCenter);
        listView = new QListView(SearchWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(320, 510, 721, 161));
        FondWidget2 = new QLabel(SearchWidget);
        FondWidget2->setObjectName(QString::fromUtf8("FondWidget2"));
        FondWidget2->setGeometry(QRect(0, 70, 381, 541));
        FondWidget2->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre4.png")));
        SumUpMinuteMovieMovieText_6 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_6->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_6"));
        SumUpMinuteMovieMovieText_6->setGeometry(QRect(810, 290, 131, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Europe_Ext"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        SumUpMinuteMovieMovieText_6->setFont(font2);
        SumUpMinuteMovieText_3 = new QTextEdit(SearchWidget);
        SumUpMinuteMovieText_3->setObjectName(QString::fromUtf8("SumUpMinuteMovieText_3"));
        SumUpMinuteMovieText_3->setGeometry(QRect(720, 310, 311, 161));
        SumUpMinuteMovieText_3->setFont(font);
        label_4 = new QLabel(SearchWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 110, 191, 301));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/batman.jpg")));
        label_6 = new QLabel(SearchWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 430, 51, 61));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/47b8wJySE9r6gWMcTGSa0EuiDV.jpg")));
        label_19 = new QLabel(SearchWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(40, 610, 271, 311));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre3.png")));
        CreateChannel = new QPushButton(SearchWidget);
        CreateChannel->setObjectName(QString::fromUtf8("CreateChannel"));
        CreateChannel->setGeometry(QRect(240, 40, 94, 23));
        CreateChannel->setStyleSheet(QString::fromUtf8("#CreateChannel {\n"
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
"#CreateChannel:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#CreateChannel:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        SendComment = new QPushButton(SearchWidget);
        SendComment->setObjectName(QString::fromUtf8("SendComment"));
        SendComment->setGeometry(QRect(910, 750, 94, 23));
        SendComment->setStyleSheet(QString::fromUtf8("#SendComment {\n"
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
"#SendComment:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#SendComment:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        SumUpMinuteMovieMovieText_5 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_5->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_5"));
        SumUpMinuteMovieMovieText_5->setGeometry(QRect(80, 630, 161, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Europe_Ext"));
        font3.setPointSize(13);
        SumUpMinuteMovieMovieText_5->setFont(font3);
        RankMinuteMovieText = new QLabel(SearchWidget);
        RankMinuteMovieText->setObjectName(QString::fromUtf8("RankMinuteMovieText"));
        RankMinuteMovieText->setGeometry(QRect(210, 190, 71, 20));
        QFont font4;
        font4.setPointSize(6);
        RankMinuteMovieText->setFont(font4);
        label_13 = new QLabel(SearchWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(230, 170, 16, 21));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        GoodMinuteMovie = new QPushButton(SearchWidget);
        GoodMinuteMovie->setObjectName(QString::fromUtf8("GoodMinuteMovie"));
        GoodMinuteMovie->setGeometry(QRect(220, 320, 51, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../resources/images/good.gif"), QSize(), QIcon::Normal, QIcon::Off);
        GoodMinuteMovie->setIcon(icon);
        GoodMinuteMovie->setIconSize(QSize(48, 48));
        Title2 = new QLabel(SearchWidget);
        Title2->setObjectName(QString::fromUtf8("Title2"));
        Title2->setGeometry(QRect(280, 70, 781, 61));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Europe_Ext"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        Title2->setFont(font5);
        Title2->setAlignment(Qt::AlignCenter);
        label = new QLabel(SearchWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, -70, 211, 151));
        label->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/MiniCadre.png")));
        pushButton_6 = new QPushButton(SearchWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 720, 31, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../resources/images/fleche_gauche.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(50, 50));
        PlayTrailer = new QPushButton(SearchWidget);
        PlayTrailer->setObjectName(QString::fromUtf8("PlayTrailer"));
        PlayTrailer->setGeometry(QRect(90, 370, 41, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../resources/images/playon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        PlayTrailer->setIcon(icon2);
        PlayTrailer->setIconSize(QSize(35, 35));
        RateMinuteMovieLabel_2 = new QLabel(SearchWidget);
        RateMinuteMovieLabel_2->setObjectName(QString::fromUtf8("RateMinuteMovieLabel_2"));
        RateMinuteMovieLabel_2->setGeometry(QRect(210, 260, 31, 16));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Europe_Ext"));
        font6.setPointSize(8);
        RateMinuteMovieLabel_2->setFont(font6);
        GoodMinuteMovieImg = new QLabel(SearchWidget);
        GoodMinuteMovieImg->setObjectName(QString::fromUtf8("GoodMinuteMovieImg"));
        GoodMinuteMovieImg->setGeometry(QRect(240, 250, 41, 41));
        GoodMinuteMovieImg->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/good mini.gif")));
        label_5 = new QLabel(SearchWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 430, 51, 61));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/5gR7CiLF6rtfusggiL8yeSm2Lgl.jpg")));
        SumUpMinuteMovieMovieText = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText"));
        SumUpMinuteMovieMovieText->setGeometry(QRect(630, 140, 91, 20));
        SumUpMinuteMovieMovieText->setFont(font2);
        SumUpMinuteMovieMovieText_2 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_2->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_2"));
        SumUpMinuteMovieMovieText_2->setGeometry(QRect(120, 410, 81, 20));
        SumUpMinuteMovieMovieText_2->setFont(font2);
        label_16 = new QLabel(SearchWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(250, 170, 20, 21));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        PlayMovie = new QPushButton(SearchWidget);
        PlayMovie->setObjectName(QString::fromUtf8("PlayMovie"));
        PlayMovie->setGeometry(QRect(950, 0, 94, 31));
        PlayMovie->setStyleSheet(QString::fromUtf8("#PlayMovie {\n"
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
"#PlayMovie:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#PlayMovie:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        label_15 = new QLabel(SearchWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(110, 650, 101, 141));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/xtzuepuEDldxBvDMyRZCyUOAdFD.jpg")));
        RateMinuteMovieLabel = new QLabel(SearchWidget);
        RateMinuteMovieLabel->setObjectName(QString::fromUtf8("RateMinuteMovieLabel"));
        RateMinuteMovieLabel->setGeometry(QRect(220, 150, 51, 16));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Europe_Ext"));
        font7.setPointSize(12);
        RateMinuteMovieLabel->setFont(font7);
        GoodMinuteMovieText = new QLabel(SearchWidget);
        GoodMinuteMovieText->setObjectName(QString::fromUtf8("GoodMinuteMovieText"));
        GoodMinuteMovieText->setGeometry(QRect(220, 230, 51, 16));
        GoodMinuteMovieText->setFont(font7);
        SumUpMinuteMovieMovieText_4 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_4->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_4"));
        SumUpMinuteMovieMovieText_4->setGeometry(QRect(460, 290, 81, 20));
        SumUpMinuteMovieMovieText_4->setFont(font2);
        label_17 = new QLabel(SearchWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(270, 170, 20, 21));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        label_8 = new QLabel(SearchWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(150, 510, 51, 61));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/z0i0nodt8xB4IAVA9E9uQTSz0kv.jpg")));
        label_18 = new QLabel(SearchWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(210, 170, 20, 21));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        textEdit = new QTextEdit(SearchWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(360, 680, 641, 61));
        SumUpMinuteMovieMovieText_3 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_3->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_3"));
        SumUpMinuteMovieMovieText_3->setGeometry(QRect(620, 480, 131, 20));
        SumUpMinuteMovieMovieText_3->setFont(font2);
        JoinChannel = new QPushButton(SearchWidget);
        JoinChannel->setObjectName(QString::fromUtf8("JoinChannel"));
        JoinChannel->setGeometry(QRect(240, 10, 94, 23));
        JoinChannel->setStyleSheet(QString::fromUtf8("#JoinChannel {\n"
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
"#JoinChannel:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#JoinChannel:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        pushButton = new QPushButton(SearchWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 720, 31, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../resources/images/fleche_droite.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(50, 50));
        SumUpMinuteMovieText_2 = new QTextEdit(SearchWidget);
        SumUpMinuteMovieText_2->setObjectName(QString::fromUtf8("SumUpMinuteMovieText_2"));
        SumUpMinuteMovieText_2->setGeometry(QRect(330, 310, 311, 161));
        SumUpMinuteMovieText_2->setFont(font);
        label_7 = new QLabel(SearchWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 510, 51, 61));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/iA4Z1BshkK64CCx7HV6oKY46xIv.jpg")));
        Search = new QPushButton(SearchWidget);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(60, 40, 101, 31));
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
        SumUpMinuteMovieMovieText_7 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_7->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_7"));
        SumUpMinuteMovieMovieText_7->setGeometry(QRect(70, 440, 81, 31));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Pescadero"));
        font8.setPointSize(8);
        SumUpMinuteMovieMovieText_7->setFont(font8);
        SumUpMinuteMovieMovieText_8 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_8->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_8"));
        SumUpMinuteMovieMovieText_8->setGeometry(QRect(200, 440, 81, 31));
        SumUpMinuteMovieMovieText_8->setFont(font8);
        SumUpMinuteMovieMovieText_9 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_9->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_9"));
        SumUpMinuteMovieMovieText_9->setGeometry(QRect(70, 520, 81, 31));
        SumUpMinuteMovieMovieText_9->setFont(font8);
        SumUpMinuteMovieMovieText_10 = new QLabel(SearchWidget);
        SumUpMinuteMovieMovieText_10->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText_10"));
        SumUpMinuteMovieMovieText_10->setGeometry(QRect(200, 520, 91, 31));
        SumUpMinuteMovieMovieText_10->setFont(font8);
        SearchMovie = new QLineEdit(SearchWidget);
        SearchMovie->setObjectName(QString::fromUtf8("SearchMovie"));
        SearchMovie->setGeometry(QRect(40, 10, 141, 20));
        label_2 = new QLabel(SearchWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 370, 46, 13));

        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        SearchWidget->setWindowTitle(QApplication::translate("SearchWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_20->setText(QString());
        SumUpMovieText->setHtml(QApplication::translate("SearchWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:400;\">Batman raises the stakes in his war on crime. With the help of Lt. Jim Gordon and District Attorney Harvey Dent, Batman sets out to dismantle the remaining criminal organizations that plague the streets. The partnership proves to be effective, but they soon find themselves prey to a reign of chaos unleashed by a rising criminal mastermind known to the terrified citizens of Gotham as the Joker.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Title->setText(QApplication::translate("SearchWidget", "The Dark Knight", 0, QApplication::UnicodeUTF8));
        FondWidget2->setText(QString());
        SumUpMinuteMovieMovieText_6->setText(QApplication::translate("SearchWidget", "Movie Fact", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieText_3->setHtml(QApplication::translate("SearchWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Part of the:</span><span style=\" font-size:10pt; font-weight:400;\"> The Batman Collection</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Status:</span><span style=\" font-size:10pt; font-weight:400;\"> Released</span>"
                        "</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Runtime:</span><span style=\" font-size:10pt; font-weight:400;\"> 152</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Budget:</span><span style=\" font-size:10pt; font-weight:400;\"> $185,000,000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:"
                        "10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Revenue:</span><span style=\" font-size:10pt; font-weight:400;\"> $1,001,921,825</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Language(s):</span><span style=\" font-size:10pt; font-weight:400;\"> en</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><s"
                        "pan style=\" font-size:10pt;\">Webpage:  </span><a name=\"homepage\"></a><a href=\"http://thedarkknight.warnerbros.com/dvdsite/\"><span style=\" font-family:'Arial,sans-serif'; font-size:10pt; font-weight:400; text-decoration: underline; color:#69722f; background-color:#1d1d1d;\">L</span></a><span style=\" font-family:'Arial,sans-serif'; font-size:10pt; font-weight:400; text-decoration: underline; color:#69722f; background-color:#1d1d1d;\">ink</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_6->setText(QString());
        label_19->setText(QString());
        CreateChannel->setText(QApplication::translate("SearchWidget", "Create channel", 0, QApplication::UnicodeUTF8));
        SendComment->setText(QApplication::translate("SearchWidget", "Send Comment", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieMovieText_5->setText(QApplication::translate("SearchWidget", "Similar Movies", 0, QApplication::UnicodeUTF8));
        RankMinuteMovieText->setText(QApplication::translate("SearchWidget", "8.6/10 (250 votes)", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        GoodMinuteMovie->setText(QString());
        Title2->setText(QApplication::translate("SearchWidget", "Why So Serious?", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton_6->setText(QString());
        PlayTrailer->setText(QString());
        RateMinuteMovieLabel_2->setText(QApplication::translate("SearchWidget", "20", 0, QApplication::UnicodeUTF8));
        GoodMinuteMovieImg->setText(QString());
        label_5->setText(QString());
        SumUpMinuteMovieMovieText->setText(QApplication::translate("SearchWidget", "Sum up", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieMovieText_2->setText(QApplication::translate("SearchWidget", "Cast", 0, QApplication::UnicodeUTF8));
        label_16->setText(QString());
        PlayMovie->setText(QApplication::translate("SearchWidget", "Play Movie", 0, QApplication::UnicodeUTF8));
        label_15->setText(QString());
        RateMinuteMovieLabel->setText(QApplication::translate("SearchWidget", "Rate", 0, QApplication::UnicodeUTF8));
        GoodMinuteMovieText->setText(QApplication::translate("SearchWidget", "Good", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieMovieText_4->setText(QApplication::translate("SearchWidget", "Crew", 0, QApplication::UnicodeUTF8));
        label_17->setText(QString());
        label_8->setText(QString());
        label_18->setText(QString());
        SumUpMinuteMovieMovieText_3->setText(QApplication::translate("SearchWidget", "Comments", 0, QApplication::UnicodeUTF8));
        JoinChannel->setText(QApplication::translate("SearchWidget", "Join channel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        SumUpMinuteMovieText_2->setHtml(QApplication::translate("SearchWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Directing</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Christopher Nolan	Director</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Writing</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Jonathan Nolan	Screenplay</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Christopher Nolan</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Screenplay</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Christopher Nolan	Story</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span s"
                        "tyle=\" font-size:10pt; font-weight:400;\">David S. Goyer	Story</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Sound</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Hans Zimmer	Original Music Composer</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">James Newton Howard	Original Music Composer</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Camera</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Wally Pfister	Director of Photography</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Production</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Christopher Nolan	Producer</s"
                        "pan></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Charles Roven	Producer</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400;\">Emma Thomas	Producer</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        Search->setText(QApplication::translate("SearchWidget", "Search", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieMovieText_7->setText(QApplication::translate("SearchWidget", "Christian Bale\n"
"as Batman", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieMovieText_8->setText(QApplication::translate("SearchWidget", "Heath Ledger\n"
"as Joker", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieMovieText_9->setText(QApplication::translate("SearchWidget", "Aaron Eckhart\n"
"as Harvey Dent", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieMovieText_10->setText(QApplication::translate("SearchWidget", "Maggie Gyllenhaal\n"
"as Rachel Dawes", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
