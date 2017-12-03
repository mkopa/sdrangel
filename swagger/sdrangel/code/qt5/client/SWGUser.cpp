/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGUser.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGUser::SWGUser(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUser::SWGUser() {
    init();
}

SWGUser::~SWGUser() {
    this->cleanup();
}

void
SWGUser::init() {
    index = 0;
    name = new QString("");
}

void
SWGUser::cleanup() {
    

    if(name != nullptr) {
        delete name;
    }
}

SWGUser*
SWGUser::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUser::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&index, pJson["index"], "qint32", "");
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
}

QString
SWGUser::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUser::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("index", QJsonValue(index));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    return obj;
}

qint32
SWGUser::getIndex() {
    return index;
}
void
SWGUser::setIndex(qint32 index) {
    this->index = index;
}

QString*
SWGUser::getName() {
    return name;
}
void
SWGUser::setName(QString* name) {
    this->name = name;
}


}
