/********************************************************************************
** Form generated from reading UI file 'stackedwidgetmovienews.ui'
**
** Created: Mon 26. Mar 21:35:10 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKEDWIDGETMOVIENEWS_H
#define UI_STACKEDWIDGETMOVIENEWS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StackedWidgetMovieNews
{
public:
    QWidget *page;
    QLabel *MinuteMovieImg;
    QPushButton *MoreMinuteMovie;
    QPushButton *GoodMinuteMovie;
    QLabel *RankMinuteMovieText;
    QLabel *RateMinuteMovieLabel;
    QLabel *GoodMinuteMovieImg;
    QPushButton *LMCMinuteMovie;
    QTextEdit *SumUpMinuteMovieText;
    QLabel *label_16;
    QLabel *MinuteMovieText;
    QLabel *label_13;
    QLabel *SumUpMinuteMovieMovieText;
    QPushButton *PlayMinuteMovie;
    QLabel *GoodMinuteMovieText;
    QWidget *page1;

    void setupUi(QStackedWidget *StackedWidgetMovieNews)
    {
        if (StackedWidgetMovieNews->objectName().isEmpty())
            StackedWidgetMovieNews->setObjectName(QString::fromUtf8("StackedWidgetMovieNews"));
        StackedWidgetMovieNews->resize(318, 453);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        MinuteMovieImg = new QLabel(page);
        MinuteMovieImg->setObjectName(QString::fromUtf8("MinuteMovieImg"));
        MinuteMovieImg->setGeometry(QRect(60, 40, 181, 261));
        MinuteMovieImg->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/batman.jpg")));
        MoreMinuteMovie = new QPushButton(page);
        MoreMinuteMovie->setObjectName(QString::fromUtf8("MoreMinuteMovie"));
        MoreMinuteMovie->setGeometry(QRect(260, 250, 51, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Europe_Ext"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        MoreMinuteMovie->setFont(font);
        GoodMinuteMovie = new QPushButton(page);
        GoodMinuteMovie->setObjectName(QString::fromUtf8("GoodMinuteMovie"));
        GoodMinuteMovie->setGeometry(QRect(0, 140, 51, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../resources/images/good.gif"), QSize(), QIcon::Normal, QIcon::Off);
        GoodMinuteMovie->setIcon(icon);
        GoodMinuteMovie->setIconSize(QSize(48, 48));
        RankMinuteMovieText = new QLabel(page);
        RankMinuteMovieText->setObjectName(QString::fromUtf8("RankMinuteMovieText"));
        RankMinuteMovieText->setGeometry(QRect(250, 110, 71, 20));
        QFont font1;
        font1.setPointSize(6);
        RankMinuteMovieText->setFont(font1);
        RateMinuteMovieLabel = new QLabel(page);
        RateMinuteMovieLabel->setObjectName(QString::fromUtf8("RateMinuteMovieLabel"));
        RateMinuteMovieLabel->setGeometry(QRect(260, 70, 51, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Europe_Ext"));
        font2.setPointSize(12);
        RateMinuteMovieLabel->setFont(font2);
        GoodMinuteMovieImg = new QLabel(page);
        GoodMinuteMovieImg->setObjectName(QString::fromUtf8("GoodMinuteMovieImg"));
        GoodMinuteMovieImg->setGeometry(QRect(270, 160, 41, 41));
        GoodMinuteMovieImg->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/good mini.gif")));
        LMCMinuteMovie = new QPushButton(page);
        LMCMinuteMovie->setObjectName(QString::fromUtf8("LMCMinuteMovie"));
        LMCMinuteMovie->setGeometry(QRect(260, 220, 51, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Europe_Ext"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        LMCMinuteMovie->setFont(font3);
        SumUpMinuteMovieText = new QTextEdit(page);
        SumUpMinuteMovieText->setObjectName(QString::fromUtf8("SumUpMinuteMovieText"));
        SumUpMinuteMovieText->setGeometry(QRect(0, 350, 311, 101));
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(270, 90, 20, 21));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        MinuteMovieText = new QLabel(page);
        MinuteMovieText->setObjectName(QString::fromUtf8("MinuteMovieText"));
        MinuteMovieText->setGeometry(QRect(30, 0, 251, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Europe_Ext"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        MinuteMovieText->setFont(font4);
        label_13 = new QLabel(page);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(250, 90, 16, 21));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/etoile.gif")));
        SumUpMinuteMovieMovieText = new QLabel(page);
        SumUpMinuteMovieMovieText->setObjectName(QString::fromUtf8("SumUpMinuteMovieMovieText"));
        SumUpMinuteMovieMovieText->setGeometry(QRect(110, 330, 81, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Europe_Ext"));
        font5.setPointSize(13);
        SumUpMinuteMovieMovieText->setFont(font5);
        PlayMinuteMovie = new QPushButton(page);
        PlayMinuteMovie->setObjectName(QString::fromUtf8("PlayMinuteMovie"));
        PlayMinuteMovie->setGeometry(QRect(130, 290, 41, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../resources/images/playon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        PlayMinuteMovie->setIcon(icon1);
        PlayMinuteMovie->setIconSize(QSize(35, 35));
        GoodMinuteMovieText = new QLabel(page);
        GoodMinuteMovieText->setObjectName(QString::fromUtf8("GoodMinuteMovieText"));
        GoodMinuteMovieText->setGeometry(QRect(260, 140, 51, 16));
        GoodMinuteMovieText->setFont(font2);
        StackedWidgetMovieNews->addWidget(page);
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        StackedWidgetMovieNews->addWidget(page1);

        retranslateUi(StackedWidgetMovieNews);

        StackedWidgetMovieNews->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StackedWidgetMovieNews);
    } // setupUi

    void retranslateUi(QStackedWidget *StackedWidgetMovieNews)
    {
        StackedWidgetMovieNews->setWindowTitle(QApplication::translate("StackedWidgetMovieNews", "StackedWidget", 0, QApplication::UnicodeUTF8));
        MinuteMovieImg->setText(QString());
        MoreMinuteMovie->setText(QApplication::translate("StackedWidgetMovieNews", "More", 0, QApplication::UnicodeUTF8));
        GoodMinuteMovie->setText(QString());
        RankMinuteMovieText->setText(QApplication::translate("StackedWidgetMovieNews", "8.6/10 (250 votes)", 0, QApplication::UnicodeUTF8));
        RateMinuteMovieLabel->setText(QApplication::translate("StackedWidgetMovieNews", "Rate", 0, QApplication::UnicodeUTF8));
        GoodMinuteMovieImg->setText(QString());
        LMCMinuteMovie->setText(QApplication::translate("StackedWidgetMovieNews", "LMC", 0, QApplication::UnicodeUTF8));
        SumUpMinuteMovieText->setHtml(QApplication::translate("StackedWidgetMovieNews", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline;\">The Dark Knight</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Batman raises the stakes in his war on crime. With the help of Lt. Jim Gordon and District Attorney Harvey Dent,"
                        " Batman sets out to dismantle the remaining criminal organizations that plague the streets. The partnership proves to be effective, but they soon find themselves prey to a reign of chaos unleashed by a rising criminal mastermind known to the terrified citizens of Gotham as the Joker.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QString());
        MinuteMovieText->setText(QApplication::translate("StackedWidgetMovieNews", "One Minute One Movie", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        SumUpMinuteMovieMovieText->setText(QApplication::translate("StackedWidgetMovieNews", "Sum up", 0, QApplication::UnicodeUTF8));
        PlayMinuteMovie->setText(QString());
        GoodMinuteMovieText->setText(QApplication::translate("StackedWidgetMovieNews", "Good", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StackedWidgetMovieNews: public Ui_StackedWidgetMovieNews {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKEDWIDGETMOVIENEWS_H
