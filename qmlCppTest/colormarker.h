#ifndef COLORMARKER_H
#define COLORMARKER_H

#include <QObject>
#include<QColor>
class ColorMarker : public QObject
{
    Q_OBJECT
    Q_ENUMS(GenerateAlgorithm);
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged);
    Q_PROPERTY(QColor timeColor READ timeColor WRITE setTimeColor);
public:
    explicit ColorMarker(QObject *parent = nullptr);
    enum GenerateAlgorithm{
        RandomRGB,
        RandomRed,
        RandomGreen,
        RandomBlue,
        LinearIncrease
    };
    Q_INVOKABLE GenerateAlgorithm algorigthm()const;
    Q_INVOKABLE void setAlgorithm(GenerateAlgorithm algorithm);

public:
    QColor color() const;
    void setColor(const QColor &color);
    QColor timeColor()const;
    void setTimeColor(QColor const &color);
signals:
    void colorChanged(const QColor &color);
    void currentTime(const QString &strTIme);
public slots:
    void start();
    void stop();
protected:
    void timerEvent(QTimerEvent *e);
private:
    GenerateAlgorithm m_algorithm;
    QColor m_currentColor;
    int m_nColorTimer;
};

#endif // COLORMARKER_H
