#include "game.h"

Game::Game(QWidget *parent)
{
    //create the scene
    scene = new QGraphicsScene();

    //create an item to put into the scene
    player = new Player();
    player->setPixmap(QPixmap(":/images/shipthree.png"));

    //add the item to the scene
    scene->addItem(player);

    //make item focussable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    //add a view

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //size of view and scene
    setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    scene->setBackgroundBrush(QBrush(QImage(":/images/bg.jpg")));

    player->setPos(400,450);

    //create score
    score = new Score();
    score->setPos(score->x()+25,score->y());
    scene->addItem(score);
    //spawn enemies
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);


    //play bg music
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/sound.mpeg"));
    music->play();

    show();

}
