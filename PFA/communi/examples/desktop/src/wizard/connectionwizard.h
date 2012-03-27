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

#ifndef CONNECTIONWIZARD_H
#define CONNECTIONWIZARD_H

#include <QWizard>
#include "connection.h"

class ConnectionWizard : public QWizard
{
    Q_OBJECT

public:
    ConnectionWizard(QWidget* parent = 0);

    enum Page
    {
        UserPage,
        ServerPage,
        ConnectionPage
    };

    Connection connection() const;
    void setConnection(const Connection& connection);
};

#endif // CONNECTIONWIZARD_H
