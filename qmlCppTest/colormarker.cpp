#include "colormarker.h"
#include<QDateTime>
#include<QTimerEvent>
ColorMarker::ColorMarker(QObject *parent) : QObject(parent),m_algorithm(RandomRGB),m_currentColor(Qt::black),m_nColorTimer(0)
{
    qsrand(QDateTime::currentDateTime().toTime_t());
}

ColorMarker::GenerateAlgorithm ColorMarker::algorigthm() const
{
    return m_algorithm;
}

void ColorMarker::setAlgorithm(ColorMarker::GenerateAlgorithm algorithm)
{
    m_algorithm=algorithm;
}

QColor ColorMarker::color() const
{
    return m_currentColor;
}

void ColorMarker::setColor(const QColor &color)
{
    m_currentColor=color;
    emit colorChanged(m_currentColor);
}

QColor ColorMarker::timeColor() const
{
    QTime time=QTime::currentTime();
    int r=time.hour();
    int g=time.minute()*2;
    int b=time.second()*4;
    return QColor::fromRgb(r,g,b);
}


void ColorMarker::setTimeColor(const QColor &color)
{
    m_currentColor=color;
    emit colorChanged(m_currentColor);
}

void ColorMarker::start()
{
    if(m_nColorTimer==0)
    {
        m_nColorTimer=startTimer(1000);
    }
}

void ColorMarker::stop()
{
    if(m_nColorTimer>0)
    {
        killTimer(m_nColorTimer);
        m_nColorTimer=0;
    }
}

void ColorMarker::timerEvent(QTimerEvent *e)
{
    if(e->timerId()==m_nColorTimer)
    {
        switch (m_algorithm)
        {
        case RandomRGB:
            m_currentColor.setRgb(qrand()%255,qrand()%255,qrand()%255);
            break;
        case RandomRed:
            m_currentColor.setRed(qrand()%255);
            break;
        case RandomGreen:
            m_currentColor.setGreen(qrand()%255);
            break;
        case RandomBlue:
            m_currentColor.setBlue(qrand()%255);
            break;
        case LinearIncrease:
            {
            int r=m_currentColor.red()+10;
            int b=m_currentColor.blue()+10;
            int g=m_currentColor.green()+10;
            m_currentColor.setRgb(r%255,g%255,b%255);
            break;
            }
            break;
        }
        emit colorChanged(m_currentColor);
        emit currentTime(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    }
    else {
        QObject::timerEvent(e);
    }
}



