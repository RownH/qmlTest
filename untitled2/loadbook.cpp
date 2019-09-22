#include "loadbook.h"
#include<QDir>
#include<QDebug>
loadBook::loadBook(QObject *parent) : QObject(parent)
{

}

void loadBook::loadBoo(QString path)
{
    QDir Dir(path);
    if(!Dir.exists())return ;
    QString temContent;
    QString temName;

    for (unsigned i=0;i<Dir.count();i++) {
          temName=Dir.absolutePath()+"/"+Dir[i];
          qDebug()<<temName;
    }
}

void loadBook::loadDir(QString path)
{
    QDir Dir(path);
    if(!Dir.exists())return ;
    for (unsigned i=0;i<Dir.count();i++) {
        loadBoo(Dir.absolutePath()+"/"+Dir[i]+"/");
    }
}
