#include "bullet.h"
#include <QTimer>
#include <QList>
#include <QGraphicsScene>
#include <QDebug>
#include <enemy.h>
#include <typeinfo>
#include "game.h"

extern Game * game;//external global object

Bullet::Bullet()
{
    setPixmap(QPixmap(":/images/bullet.png"));

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Bullet::move()
{
    //if bullet collide with enemy
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0,n = colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Enemy)){
            //increase score
            game->score->increase();
            //remove em
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;

        }
    }

    //move bullet up
    setPos(x(),y()-10);
    if(pos().y()+50<0){
        scene()->removeItem(this);
        delete this;
    }

}


