#include "player.h"
#include <QDebug>
#include <QKeyEvent>
#include "enemy.h"
#include <QGraphicsScene>
#include "bullet.h"


Player::Player()
{

}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left){
        if(pos().x()>0)
        setPos(x()-10,y());
    }
    else if(event->key()==Qt::Key_Right){
        if(pos().x()+100<800)
        setPos(x()+10,y());
    }
//    else if(event->key()==Qt::Key_Up){
//        setPos(x(),y()-10);
//    }
//    else if(event->key()==Qt::Key_Down){
//        setPos(x(),y()+10);
//    }
    else if(event->key()==Qt::Key_Space){
    //create bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

void Player::spawn()
{
    //create enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
