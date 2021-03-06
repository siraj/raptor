/* This file is part of the KDE project

   Copyright (C) 2009 Alessandro Diaferia <alediaferia@gmail.com>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/
#ifndef RAPTORMENUITEM_H
#define RAPTORMENUITEM_H

#include <QObject>

class QPainter;
class QStyleOptionViewItem;
class QModelIndex;

class RaptorMenuItem : public QObject
{
    Q_OBJECT
public:
    RaptorMenuItem(QModelIndex index, QObject *parent = 0);
    ~RaptorMenuItem();

    /**
     * Call this method in order to set the geometry of the item.
     * This setting will override the rect passed with
     * option in the paint() method.
     */
    void setRect(const QRect &);

    /**
     * @Returns the rect used to paint the item. If no
     * setRect has been called previously it will return the rect
     * used to paint the item with the first paint() call.
     * If no paint() occurred this method will return QRect().
     */
    QRect rect() const;

    /**
     * This is a convenience function and it is the same as calling:
     * setRect ( rect().translated(dx, dy) );
     * A paint() call is needed after this call in order to apply
     * the geometry modification.
     */
    void moveBy(int dx, int dy);

    /**
     * Paints the item with the given @param painter and the given @param option.
     * @Note that the rect set using setRect() has priority over option.rect.
     */
    void paint(QPainter *painter, const QStyleOptionViewItem &option);

private:
    class Private;
    Private *d;
};

#endif
