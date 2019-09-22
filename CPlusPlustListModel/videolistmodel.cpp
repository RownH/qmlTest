#include "videolistmodel.h"
#include<QXmlStreamReader>
#include<QVector>
#include<QFile>
#include<QDebug>
typedef QVector<QString>VideoData;
class VideoListModelPrivate
{
    friend class VideoListModel;
public:
    VideoListModelPrivate():m_bError(false) {
        int role=Qt::UserRole;
        m_roleNames.insert(role++,"name");
        m_roleNames.insert(role++,"data");
        m_roleNames.insert(role++,"director_tag");
        m_roleNames.insert(role++,"actor_tag");
        m_roleNames.insert(role++,"actor");
        m_roleNames.insert(role++,"rating_tag");
        m_roleNames.insert(role++,"rating");
        m_roleNames.insert(role++,"desc_tag");
        m_roleNames.insert(role++,"desc");
        m_roleNames.insert(role++,"img");
        m_roleNames.insert(role++,"playpage");
        m_roleNames.insert(role++,"playtimes");
    }
    ~VideoListModelPrivate(){
        clear();
    }
    void load(){
            QXmlStreamReader reader;
            QFile file(m_strXmlFile);
            if(!file.exists())
            {
                m_bError=true;
                m_strError="File not Found";
                return ;
            }
            if(!file.open(QFile::ReadOnly))
            {
                m_bError=true;
                m_strError=file.errorString();
                return ;
            }
            reader.setDevice(&file);
            QStringRef elementName;
            VideoData *video;
            while (!reader.atEnd()) {
                reader.readNext();
                if(!reader.isStartElement())
                {
                    elementName=reader.name();
                    if(elementName=="video")
                    {
                        video=new VideoData();
                        QXmlStreamAttributes attrs=reader.attributes();
                        video->append(attrs.value("name").toString());
                        video->append(attrs.value("data").toString());
                    }
                    else if(elementName=="attr"){
                        video->append(reader.attributes().value("tag").toString());
                        video->append(reader.readElementText());
                    }
                    else if(elementName=="poster")
                    {
                        video->append(reader.attributes().value("img").toString());
                    }else if(elementName=="page")
                    {
                        video->append(reader.attributes().value("link").toString());
                    }
                    else if(elementName=="playtimes")
                    {
                          video->append(reader.readElementText());

                    }

                }
                else if (reader.isEndElement()) {
                    elementName=reader.name();
                    if(elementName=="video")
                    {
                        m_vides.append(video);
                        video=0;
                    }
                }
            }
        file.close();
        if(reader.hasError())
        {
            m_bError=true;
            m_strError=reader.errorString();
        }
    }
    void reset(){
        m_bError=false;
        m_strError.clear();
        clear();
    }
    void clear()
    {
        int count=m_vides.size();
        if(count>0)
        {
            for(int i=0;i<count;i++)
            {
                delete m_vides.at(i);

            }
            m_vides.clear();
        }

    }
private:
    QString m_strXmlFile;
    QString m_strError;
    bool m_bError;
    QHash<int,QByteArray>m_roleNames;
    QVector<VideoData*>m_vides;
};



VideoListModel::VideoListModel(QObject *parent):QAbstractListModel(parent)
                                                ,m_ptr(new VideoListModelPrivate)
    {

    }
VideoListModel::~VideoListModel()
{

}
int VideoListModel::rowCount(const QModelIndex &parent) const
{
    return m_ptr->m_vides.size();
}
QVariant VideoListModel::data(const QModelIndex &index, int role) const
{
    VideoData* d=m_ptr->m_vides[index.row()];
    return d->at(role-Qt::UserRole);
}
QHash<int,QByteArray>VideoListModel::roleNames() const
{
       return m_ptr->m_roleNames;
}
QString VideoListModel::source() const
{
        return m_ptr->m_strXmlFile;
}
void VideoListModel::setSource(const QString & filePath)
{
        m_ptr->m_strXmlFile=filePath;
        reload();
        if(m_ptr->m_bError)
        {
            qDebug()<<"VideoListModel,error-"<<m_ptr->m_strError;
        }
}
QString VideoListModel::errorString() const
{
    return m_ptr->m_strError;
}
bool VideoListModel::hasError() const
{
    return m_ptr->m_bError;
}
void VideoListModel::reload()
{
       beginResetModel();
       m_ptr->reset();
       m_ptr->load();
       endResetModel();
}
void VideoListModel::remove(int index)
{
        beginRemoveRows(QModelIndex(),index,index);
        delete  m_ptr->m_vides.takeAt(index);
        endRemoveRows();
}
