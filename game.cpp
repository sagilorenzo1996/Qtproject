#include "game.h"
#include <QFont>



Game::Game(QWidget *parent)
{
    //create the menu
//    newgame = new QGraphicsScene();

//    newgame->setSceneRect(0,0,800,600);
//    newgame->setBackgroundBrush(QBrush(QImage(":/images/bg.jpg")));

//    menu = new Menu();
//    menu->setPlainText(QString("newgame"));
//    menu->setDefaultTextColor(Qt::white);
//    menu->setFont(QFont("times",16));
//    menu->setPos(x()+25,y());
//    menu->setFlag(QGraphicsTextItem::ItemIsFocusable);
//    menu->setFocus();
//    newgame->addItem(menu);



    //create the scene
    scene = new QGraphicsScene();

    //create an item to put into the scene
    player = new Player();
    player->setPixmap(QPixmap(":/images/shipthree.png"));

    //add the item to the scene
    scene->addItem(player);

    //make item focussable
    //player->setFlag(QGraphicsItem::ItemIsFocusable);
    //player->setFocus();
    setScene(scene);

    //add a view


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

