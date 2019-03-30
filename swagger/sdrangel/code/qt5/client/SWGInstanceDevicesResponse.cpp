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


#include "SWGInstanceDevicesResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGInstanceDevicesResponse::SWGInstanceDevicesResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInstanceDevicesResponse::SWGInstanceDevicesResponse() {
    devicecount = 0;
    m_devicecount_isSet = false;
    devices = nullptr;
    m_devices_isSet = false;
}

SWGInstanceDevicesResponse::~SWGInstanceDevicesResponse() {
    this->cleanup();
}

void
SWGInstanceDevicesResponse::init() {
    devicecount = 0;
    m_devicecount_isSet = false;
    devices = new QList<SWGDeviceListItem*>();
    m_devices_isSet = false;
}

void
SWGInstanceDevicesResponse::cleanup() {

    if(devices != nullptr) { 
        auto arr = devices;
        for(auto o: *arr) { 
            delete o;
        }
        delete devices;
    }
}

SWGInstanceDevicesResponse*
SWGInstanceDevicesResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInstanceDevicesResponse::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&devicecount, pJson["devicecount"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&devices, pJson["devices"], "QList", "SWGDeviceListItem");
}

QString
SWGInstanceDevicesResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGInstanceDevicesResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_devicecount_isSet){
        obj->insert("devicecount", QJsonValue(devicecount));
    }
    if(devices->size() > 0){
        toJsonArray((QList<void*>*)devices, obj, "devices", "SWGDeviceListItem");
    }

    return obj;
}

qint32
SWGInstanceDevicesResponse::getDevicecount() {
    return devicecount;
}
void
SWGInstanceDevicesResponse::setDevicecount(qint32 devicecount) {
    this->devicecount = devicecount;
    this->m_devicecount_isSet = true;
}

QList<SWGDeviceListItem*>*
SWGInstanceDevicesResponse::getDevices() {
    return devices;
}
void
SWGInstanceDevicesResponse::setDevices(QList<SWGDeviceListItem*>* devices) {
    this->devices = devices;
    this->m_devices_isSet = true;
}


bool
SWGInstanceDevicesResponse::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_devicecount_isSet){ isObjectUpdated = true; break;}
        if(devices->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

