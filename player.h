#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QMediaPlayer>
#include <QObject>

class Player:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player();
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
//private:
    //QMediaPlayer * bulletsound;
};

#endif // PLAYER_H
