#include "player.h"
#include <QDebug>
#include <QKeyEvent>
#include "enemy.h"
#include <QGraphicsScene>
#include "bullet.h"
#include <typeinfo>
#include <QList>


Player::Player()
{
//    bulletsound = new QMediaPlayer();
//    bulletsound->setMedia(QUrl("qrc:/sounds/bullet.mp3"));
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
//        if(bulletsound->state() == QMediaPlayer::PlayingState){
//            bulletsound->setPosition(0);
//        }
//        else if (bulletsound->state() == QMediaPlayer::StoppedState) {
//            bulletsound->play();
//        }
    }
}

void Player::spawn()
{
    //create enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
