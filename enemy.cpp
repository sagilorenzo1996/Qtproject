#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <stdlib.h>
#include "game.h"

extern Game * game;

Enemy::Enemy()
{

    //set random positions
    int random_number = rand()%700;
    setPos(random_number,0);

    setPixmap(QPixmap(":/images/shipone.png"));


    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move()
{
    //move enemy down
    setPos(x(),y()+5);
    if(pos().y()+50<0){
        scene()->removeItem(this);
        delete this;
        qDebug() << "enemy deleted";
    }

}

