#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include "player.h"
#include <QGraphicsView>
#include <QMediaPlayer>
#include <QTimer>
#include "enemy.h"
#include "score.h"
#include "health.h"


class Game
{
public:
    Game();
    QGraphicsScene * scene;
    Player * player;
    QGraphicsView * view;
    Score * score;
    Health * health;

};

#endif // GAME_H
