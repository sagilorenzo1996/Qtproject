#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    //score to 0
    score = 0;

    //set text
    setPlainText(QString("score: ") + QString::number(score));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));

}

void Score::increase()
{
    score++;
    setPlainText(QString("score: ") + QString::number(score));
}

int Score::getScore()
{
    return score;
}
