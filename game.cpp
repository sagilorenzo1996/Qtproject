#include "game.h"

Game::Game()
{
    //create the scene
    scene = new QGraphicsScene();

    //create an item to put into the scene
    player = new Player();
    player->setRect(0,0,100,100);

    //add the item to the scene
    scene->addItem(player);

    //make item focussable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    //add a view

    view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    //size of view and scene
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player->setPos(view->width()/2,view->height()-player->rect().height());

    //create score
    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(),health->y()+25);
    scene->addItem(health);


    //spawn enemies
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);


    //play bg music
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/sound.mpeg"));
    music->play();

}
