#ifndef LOADBOOK_H
#define LOADBOOK_H

#include <QObject>

class loadBook : public QObject
{
    Q_OBJECT
public:
    explicit loadBook(QObject *parent = nullptr);
    void loadChapter(QString path);
    void loadBoo(QString path);
    void loadDir(QString path);
signals:

public slots:
};

#endif // LOADBOOK_H
