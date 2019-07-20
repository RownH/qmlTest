#ifndef CHANGECOLOR_H
#define CHANGECOLOR_H

#include <QObject>

class changeColor : public QObject
{
    Q_OBJECT
public:
    explicit changeColor(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CHANGECOLOR_H
