/********************************************************************************
** Form generated from reading UI file 'listmovies.ui'
**
** Created: Mon 16. Apr 01:18:35 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTMOVIES_H
#define UI_LISTMOVIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListMovies
{
public:
    QLabel *label_2;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QWidget *ListMovies)
    {
        if (ListMovies->objectName().isEmpty())
            ListMovies->setObjectName(QString::fromUtf8("ListMovies"));
        ListMovies->resize(302, 327);
        ListMovies->setMinimumSize(QSize(302, 327));
        ListMovies->setMaximumSize(QSize(302, 327));
        label_2 = new QLabel(ListMovies);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-270, -10, 661, 391));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../resources/images/wallpaper2.jpg")));
        listWidget = new QListWidget(ListMovies);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 261, 281));
        label = new QLabel(ListMovies);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 231, 20));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(248, 248, 248, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Europe_Ext"));
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(ListMovies);

        QMetaObject::connectSlotsByName(ListMovies);
    } // setupUi

    void retranslateUi(QWidget *ListMovies)
    {
        ListMovies->setWindowTitle(QApplication::translate("ListMovies", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("ListMovies", "Choose a movie", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ListMovies: public Ui_ListMovies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTMOVIES_H
