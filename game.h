#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include "player.h"
#include <QGraphicsView>
#include <QTimer>
#include "enemy.h"
#include "score.h"


class Game
{
public:
    Game();
    QGraphicsScene * scene;
    Player * player;
    QGraphicsView * view;
    Score * score;
};

#endif // GAME_H
