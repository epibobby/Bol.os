/*
* Copyright (C) 2008-2011 J-P Nurmi jpnurmi@gmail.com
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/

#include "shortcutswizardpage.h"
#include "settings.h"
#include <QStyledItemDelegate>

enum Columns
{
    Description,
    Shortcut
};

class ItemDelegate : public QStyledItemDelegate
{
public:
    ItemDelegate(QObject* parent = 0) : QStyledItemDelegate(parent) { }
    QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& opt, const QModelIndex& index) const
    {
        QWidget* editor = 0;
        if (index.column() == Shortcut)
            editor = QStyledItemDelegate::createEditor(parent, opt, index);
        return editor;
    }
};

ShortcutsWizardPage::ShortcutsWizardPage(QWidget* parent) : QWizardPage(parent)
{
    ui.setupUi(this);
    setPixmap(QWizard::LogoPixmap, QPixmap(":/resources/oxygen/64x64/actions/forward.png"));
    ui.treeWidget->setItemDelegate(new ItemDelegate(ui.treeWidget));
    ui.treeWidget->header()->setResizeMode(0, QHeaderView::ResizeToContents);

    updateUi();
}

QHash<int, QString> ShortcutsWizardPage::shortcuts() const
{
    QHash<int, QString> shortcuts;
    for (int i = Settings::TabUp; i <= Settings::TabRight; ++i)
    {
        QTreeWidgetItem* item = ui.treeWidget->topLevelItem(i);
        shortcuts.insert(i, item->text(Shortcut));
    }
    return shortcuts;
}

void ShortcutsWizardPage::setShortcuts(const QHash<int, QString>& shortcuts)
{
    for (int i = Settings::TabUp; i <= Settings::TabRight; ++i)
    {
        QTreeWidgetItem* item = ui.treeWidget->topLevelItem(i);
        item->setText(Shortcut, shortcuts.value(i));
    }
}

void ShortcutsWizardPage::updateUi()
{
    //bool hasCurrent = ui.treeView->currentIndex().isValid();
    //ui.toolButtonEdit->setEnabled(hasCurrent);
    //ui.toolButtonRemove->setEnabled(hasCurrent);
}
