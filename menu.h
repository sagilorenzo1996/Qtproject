#ifndef MENU_H
#define MENU_H
#include <QMouseEvent>
#include <QGraphicsTextItem>


class Menu:public QGraphicsTextItem
{
public:
    Menu();
    void mousePressEvent(QMouseEvent * event);
};

#endif // MENU_H
