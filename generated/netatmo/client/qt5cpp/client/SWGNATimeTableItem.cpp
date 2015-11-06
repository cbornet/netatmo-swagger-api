
#include "SWGNATimeTableItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNATimeTableItem::SWGNATimeTableItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNATimeTableItem::SWGNATimeTableItem() {
    init();
}

SWGNATimeTableItem::~SWGNATimeTableItem() {
    this->cleanup();
}

void
SWGNATimeTableItem::init() {
    id = 0;
    m_offset = 0;
    
}

void
SWGNATimeTableItem::cleanup() {
    
    
    
}

SWGNATimeTableItem*
SWGNATimeTableItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNATimeTableItem::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&m_offset, pJson["m_offset"], "qint32", "");
    
}

QString
SWGNATimeTableItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNATimeTableItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("m_offset", QJsonValue(m_offset));
    

    return obj;
}

qint32
SWGNATimeTableItem::getId() {
    return id;
}
void
SWGNATimeTableItem::setId(qint32 id) {
    this->id = id;
}

qint32
SWGNATimeTableItem::getMOffset() {
    return m_offset;
}
void
SWGNATimeTableItem::setMOffset(qint32 m_offset) {
    this->m_offset = m_offset;
}



} /* namespace Swagger */

