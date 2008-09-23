/* This file is part of the KDE project

   Copyright (C) 2008 Lukas Appelhans <l.appelhans@gmx.de>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/
#ifndef RAPTORBREADCRUMB_H
#define RAPTORBREADCRUMB_H

#include <QGraphicsWidget>

class RaptorBreadCrumb : public QGraphicsWidget
{
    Q_OBJECT
    public:
        RaptorBreadCrumb(QGraphicsWidget * parent);
        ~RaptorBreadCrumb();

    private:
        class Private;
        Private * d;
};

#endif 