#ifndef COLORMARKER_H
#define COLORMARKER_H

#include <QObject>

class ColorMarker : public QObject
{
    Q_OBJECT
public:
    explicit ColorMarker(QObject *parent = nullptr);

signals:

public slots:
};

#endif // COLORMARKER_H
