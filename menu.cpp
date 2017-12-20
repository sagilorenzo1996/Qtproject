#include "menu.h"
#include <QFont>

Menu::Menu(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    setPlainText(QString("heeey: "));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
}
