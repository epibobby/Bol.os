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

#include "searcheditor.h"
#include <QTextBrowser>
#include <QShortcut>

SearchEditor::SearchEditor(QWidget* parent) : HistoryLineEdit(parent)
{
    Q_ASSERT(parent);
    QShortcut* shortcut = new QShortcut(QKeySequence::Find, parent);
    connect(shortcut, SIGNAL(activated()), this, SLOT(find()));

    shortcut = new QShortcut(QKeySequence::FindNext, parent);
    connect(shortcut, SIGNAL(activated()), this, SLOT(findNext()));

    shortcut = new QShortcut(QKeySequence::FindPrevious, parent);
    connect(shortcut, SIGNAL(activated()), this, SLOT(findPrevious()));

    setButtonVisible(Left, true);
    setAutoHideButton(Left, true);
    setButtonPixmap(Left, QPixmap(":/resources/icons/buttons/prev.png"));
    connect(this, SIGNAL(leftButtonClicked()), this, SLOT(findPrevious()));

    setButtonVisible(Right, true);
    setAutoHideButton(Right, true);
    setButtonPixmap(Right, QPixmap(":/resources/icons/buttons/next.png"));
    connect(this, SIGNAL(rightButtonClicked()), this, SLOT(findNext()));

    connect(this, SIGNAL(returnPressed()), this, SLOT(findNext()));
    connect(this, SIGNAL(textEdited(QString)), this, SLOT(find(QString)));

    setVisible(false);
}

QTextEdit* SearchEditor::textEdit() const
{
    return d.textEdit;
}

void SearchEditor::setTextEdit(QTextEdit* textEdit)
{
    d.textEdit = textEdit;
}

void SearchEditor::findNext()
{
    find(text(), true, false);
}

void SearchEditor::findPrevious()
{
    find(text(), false, true);
}

void SearchEditor::find()
{
    show();
    setFocus(Qt::ShortcutFocusReason);
    selectAll();
}

void SearchEditor::find(const QString& text, bool forward, bool backward)
{
    if (!d.textEdit)
        return;

    QTextDocument* doc = d.textEdit->document();
    QTextCursor cursor = d.textEdit->textCursor();
    QString oldText = QLineEdit::text();

    QTextDocument::FindFlags options;
    QPalette pal = palette();
    pal.setColor(QPalette::Active, QPalette::Base, Qt::white);

    if (cursor.hasSelection())
        cursor.setPosition(forward ? cursor.position() : cursor.anchor(), QTextCursor::MoveAnchor);

    QTextCursor newCursor = cursor;

    if (!text.isEmpty()) {
        if (backward)
            options |= QTextDocument::FindBackward;

        newCursor = doc->find(text, cursor, options);

        if (newCursor.isNull()) {
            QTextCursor ac(doc);
            ac.movePosition(options & QTextDocument::FindBackward
                ? QTextCursor::End : QTextCursor::Start);
            newCursor = doc->find(text, ac, options);
            if (newCursor.isNull()) {
                pal.setColor(QPalette::Active, QPalette::Base, QColor(255, 102, 102));
                newCursor = cursor;
            }
        }
    }

    if (!isVisible())
        show();
    d.textEdit->setTextCursor(newCursor);
    setPalette(pal);
}
