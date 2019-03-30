/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.5.3
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGAudioInputDevice.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAudioInputDevice::SWGAudioInputDevice(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAudioInputDevice::SWGAudioInputDevice() {
    name = nullptr;
    m_name_isSet = false;
    index = 0;
    m_index_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    is_system_default = 0;
    m_is_system_default_isSet = false;
    default_unregistered = 0;
    m_default_unregistered_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
}

SWGAudioInputDevice::~SWGAudioInputDevice() {
    this->cleanup();
}

void
SWGAudioInputDevice::init() {
    name = new QString("");
    m_name_isSet = false;
    index = 0;
    m_index_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    is_system_default = 0;
    m_is_system_default_isSet = false;
    default_unregistered = 0;
    m_default_unregistered_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
}

void
SWGAudioInputDevice::cleanup() {
    if(name != nullptr) { 
        delete name;
    }





}

SWGAudioInputDevice*
SWGAudioInputDevice::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAudioInputDevice::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&index, pJson["index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sample_rate, pJson["sampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&is_system_default, pJson["isSystemDefault"], "qint32", "");
    
    ::SWGSDRangel::setValue(&default_unregistered, pJson["defaultUnregistered"], "qint32", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    
}

QString
SWGAudioInputDevice::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAudioInputDevice::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(m_index_isSet){
        obj->insert("index", QJsonValue(index));
    }
    if(m_sample_rate_isSet){
        obj->insert("sampleRate", QJsonValue(sample_rate));
    }
    if(m_is_system_default_isSet){
        obj->insert("isSystemDefault", QJsonValue(is_system_default));
    }
    if(m_default_unregistered_isSet){
        obj->insert("defaultUnregistered", QJsonValue(default_unregistered));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }

    return obj;
}

QString*
SWGAudioInputDevice::getName() {
    return name;
}
void
SWGAudioInputDevice::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

qint32
SWGAudioInputDevice::getIndex() {
    return index;
}
void
SWGAudioInputDevice::setIndex(qint32 index) {
    this->index = index;
    this->m_index_isSet = true;
}

qint32
SWGAudioInputDevice::getSampleRate() {
    return sample_rate;
}
void
SWGAudioInputDevice::setSampleRate(qint32 sample_rate) {
    this->sample_rate = sample_rate;
    this->m_sample_rate_isSet = true;
}

qint32
SWGAudioInputDevice::getIsSystemDefault() {
    return is_system_default;
}
void
SWGAudioInputDevice::setIsSystemDefault(qint32 is_system_default) {
    this->is_system_default = is_system_default;
    this->m_is_system_default_isSet = true;
}

qint32
SWGAudioInputDevice::getDefaultUnregistered() {
    return default_unregistered;
}
void
SWGAudioInputDevice::setDefaultUnregistered(qint32 default_unregistered) {
    this->default_unregistered = default_unregistered;
    this->m_default_unregistered_isSet = true;
}

float
SWGAudioInputDevice::getVolume() {
    return volume;
}
void
SWGAudioInputDevice::setVolume(float volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}


bool
SWGAudioInputDevice::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(m_index_isSet){ isObjectUpdated = true; break;}
        if(m_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_is_system_default_isSet){ isObjectUpdated = true; break;}
        if(m_default_unregistered_isSet){ isObjectUpdated = true; break;}
        if(m_volume_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

