#ifndef PIXMAPMANAGER_H
#define PIXMAPMANAGER_H

#include "pixmapres.h"

class PixmapManager
{
    PixmapManager();
public:
    static PixmapRes get(QString key);
    static QPointF getPos(QString key);
    static QSizeF getSize(QString key);

    static bool loadAll();

};

#endif // PIXMAPMANAGER_H
