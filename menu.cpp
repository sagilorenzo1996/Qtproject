#include "menu.h"
#include <QDebug>

Menu::Menu()
{

}

void Menu::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        setPos(x()-10,y());
        qDebug() << "enemy deleted";
    }
}
