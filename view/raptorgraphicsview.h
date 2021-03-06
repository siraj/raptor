/* This file is part of the KDE project

   Copyright (C) 2009 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/
#ifndef RAPTORGRAPHICSVIEW_H
#define RAPTORGRAPHICSVIEW_H

#include <QGraphicsWidget>

class QAbstractItemModel;

class RaptorGraphicsView : public QGraphicsWidget
{
    Q_OBJECT
public:
    RaptorGraphicsView(QGraphicsItem *parent = 0);
    ~RaptorGraphicsView();

    QModelIndex rootIndex() const;

    /**
     * Defines the entire rect size used to draw each item.
     */
    void setItemsSize(const QSize &);
    QSize itemsSize() const;

    void setModel(QAbstractItemModel *model);
    QAbstractItemModel* model();

public slots:
    void setRootIndex(const QModelIndex &);

private:
    class Private;
    Private *d;
};

#endif
