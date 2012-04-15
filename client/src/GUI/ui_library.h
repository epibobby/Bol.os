/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created: Mon 16. Apr 01:18:35 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Library
{
public:
    QLabel *label_3;
    QLabel *FondWidget2_2;
    QLabel *StatusText_8;
    QLabel *StatusText_2;
    QLabel *FondWidget2_3;
    QLabel *StatusText_7;
    QLabel *StatusText_9;
    QPushButton *Search;
    QComboBox *comboBox;
    QLabel *StatusText_3;
    QLineEdit *SearchMovie_2;
    QLineEdit *SearchMovie_3;
    QLineEdit *SearchMovie_4;
    QLineEdit *SearchMovie;
    QLabel *StatusText_4;
    QLabel *StatusText_5;
    QLabel *StatusText_6;
    QTreeView *treeView;
    QListWidget *listWidget;
    QPushButton *Add;
    QPushButton *Delete;

    void setupUi(QWidget *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName(QString::fromUtf8("Library"));
        Library->resize(1044, 816);
        label_3 = new QLabel(Library);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 1071, 831));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        FondWidget2_2 = new QLabel(Library);
        FondWidget2_2->setObjectName(QString::fromUtf8("FondWidget2_2"));
        FondWidget2_2->setGeometry(QRect(740, -20, 381, 541));
        FondWidget2_2->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre4.png")));
        StatusText_8 = new QLabel(Library);
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
        QFont font;
        font.setFamily(QString::fromUtf8("Europe_Ext"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        StatusText_8->setFont(font);
        StatusText_2 = new QLabel(Library);
        StatusText_2->setObjectName(QString::fromUtf8("StatusText_2"));
        StatusText_2->setGeometry(QRect(830, 30, 121, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Europe_Ext"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        StatusText_2->setFont(font1);
        FondWidget2_3 = new QLabel(Library);
        FondWidget2_3->setObjectName(QString::fromUtf8("FondWidget2_3"));
        FondWidget2_3->setGeometry(QRect(740, 500, 381, 541));
        FondWidget2_3->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/Widgetcadre4.png")));
        StatusText_7 = new QLabel(Library);
        StatusText_7->setObjectName(QString::fromUtf8("StatusText_7"));
        StatusText_7->setGeometry(QRect(760, 610, 121, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Europe_Ext"));
        font2.setPointSize(9);
        StatusText_7->setFont(font2);
        StatusText_9 = new QLabel(Library);
        StatusText_9->setObjectName(QString::fromUtf8("StatusText_9"));
        StatusText_9->setGeometry(QRect(760, 670, 121, 21));
        StatusText_9->setFont(font2);
        Search = new QPushButton(Library);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(840, 740, 101, 31));
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
        comboBox = new QComboBox(Library);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(870, 700, 141, 22));
        StatusText_3 = new QLabel(Library);
        StatusText_3->setObjectName(QString::fromUtf8("StatusText_3"));
        StatusText_3->setGeometry(QRect(840, 540, 121, 21));
        StatusText_3->setFont(font1);
        SearchMovie_2 = new QLineEdit(Library);
        SearchMovie_2->setObjectName(QString::fromUtf8("SearchMovie_2"));
        SearchMovie_2->setGeometry(QRect(870, 610, 141, 20));
        SearchMovie_3 = new QLineEdit(Library);
        SearchMovie_3->setObjectName(QString::fromUtf8("SearchMovie_3"));
        SearchMovie_3->setGeometry(QRect(870, 640, 141, 20));
        SearchMovie_4 = new QLineEdit(Library);
        SearchMovie_4->setObjectName(QString::fromUtf8("SearchMovie_4"));
        SearchMovie_4->setGeometry(QRect(870, 670, 141, 20));
        SearchMovie = new QLineEdit(Library);
        SearchMovie->setObjectName(QString::fromUtf8("SearchMovie"));
        SearchMovie->setGeometry(QRect(870, 580, 141, 20));
        StatusText_4 = new QLabel(Library);
        StatusText_4->setObjectName(QString::fromUtf8("StatusText_4"));
        StatusText_4->setGeometry(QRect(760, 580, 121, 21));
        StatusText_4->setFont(font2);
        StatusText_5 = new QLabel(Library);
        StatusText_5->setObjectName(QString::fromUtf8("StatusText_5"));
        StatusText_5->setGeometry(QRect(760, 640, 121, 21));
        StatusText_5->setFont(font2);
        StatusText_6 = new QLabel(Library);
        StatusText_6->setObjectName(QString::fromUtf8("StatusText_6"));
        StatusText_6->setGeometry(QRect(770, 700, 121, 21));
        StatusText_6->setFont(font2);
        treeView = new QTreeView(Library);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 60, 721, 721));
        listWidget = new QListWidget(Library);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(760, 60, 261, 411));
        Add = new QPushButton(Library);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(760, 20, 44, 31));
        Add->setStyleSheet(QString::fromUtf8("#Add {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width:30px;\n"
"}\n"
"\n"
"#Add:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#Add:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        Delete = new QPushButton(Library);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(970, 20, 51, 31));
        Delete->setStyleSheet(QString::fromUtf8("#Delete {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 20px;\n"
"}\n"
"\n"
"#Delete:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#Delete:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        retranslateUi(Library);

        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QWidget *Library)
    {
        Library->setWindowTitle(QApplication::translate("Library", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        FondWidget2_2->setText(QString());
        StatusText_8->setText(QApplication::translate("Library", "Choose your Movie, and share it !!!", 0, QApplication::UnicodeUTF8));
        StatusText_2->setText(QApplication::translate("Library", "Libraries", 0, QApplication::UnicodeUTF8));
        FondWidget2_3->setText(QString());
        StatusText_7->setText(QApplication::translate("Library", "Library Title :", 0, QApplication::UnicodeUTF8));
        StatusText_9->setText(QApplication::translate("Library", " Director       :", 0, QApplication::UnicodeUTF8));
        Search->setText(QApplication::translate("Library", "Search", 0, QApplication::UnicodeUTF8));
        StatusText_3->setText(QApplication::translate("Library", "Search", 0, QApplication::UnicodeUTF8));
        StatusText_4->setText(QApplication::translate("Library", "Movie Title   :", 0, QApplication::UnicodeUTF8));
        StatusText_5->setText(QApplication::translate("Library", "  Actor           :", 0, QApplication::UnicodeUTF8));
        StatusText_6->setText(QApplication::translate("Library", "Type             :", 0, QApplication::UnicodeUTF8));
        Add->setText(QApplication::translate("Library", "Add", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("Library", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
