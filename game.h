#ifndef GAME_H
#define GAME_H
#include <QWidget>
#include <QGraphicsScene>
#include "player.h"
#include <QGraphicsView>
#include <QMediaPlayer>
#include <QTimer>
#include "enemy.h"
#include "score.h"
#include "menu.h"
#include <QBrush>
#include <QImage>


class Game: public QGraphicsView
{
public:
    Game(QWidget * parent = 0);
    QGraphicsScene * scene;
    Player * player;
    QGraphicsView * view;
    Score * score;

};

#endif // GAME_H
