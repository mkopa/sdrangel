/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.2
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGRDSReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGRDSReport::SWGRDSReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRDSReport::SWGRDSReport() {
    demod_status = 0;
    m_demod_status_isSet = false;
    decod_status = 0;
    m_decod_status_isSet = false;
    rds_demod_accum_db = 0.0f;
    m_rds_demod_accum_db_isSet = false;
    rds_demod_frequency = 0.0f;
    m_rds_demod_frequency_isSet = false;
    pid = nullptr;
    m_pid_isSet = false;
    pi_type = nullptr;
    m_pi_type_isSet = false;
    pi_coverage = nullptr;
    m_pi_coverage_isSet = false;
    prog_service_name = nullptr;
    m_prog_service_name_isSet = false;
    music_speech = nullptr;
    m_music_speech_isSet = false;
    mono_stereo = nullptr;
    m_mono_stereo_isSet = false;
    radio_text = nullptr;
    m_radio_text_isSet = false;
    time = nullptr;
    m_time_isSet = false;
    alt_frequencies = nullptr;
    m_alt_frequencies_isSet = false;
}

SWGRDSReport::~SWGRDSReport() {
    this->cleanup();
}

void
SWGRDSReport::init() {
    demod_status = 0;
    m_demod_status_isSet = false;
    decod_status = 0;
    m_decod_status_isSet = false;
    rds_demod_accum_db = 0.0f;
    m_rds_demod_accum_db_isSet = false;
    rds_demod_frequency = 0.0f;
    m_rds_demod_frequency_isSet = false;
    pid = new QString("");
    m_pid_isSet = false;
    pi_type = new QString("");
    m_pi_type_isSet = false;
    pi_coverage = new QString("");
    m_pi_coverage_isSet = false;
    prog_service_name = new QString("");
    m_prog_service_name_isSet = false;
    music_speech = new QString("");
    m_music_speech_isSet = false;
    mono_stereo = new QString("");
    m_mono_stereo_isSet = false;
    radio_text = new QString("");
    m_radio_text_isSet = false;
    time = new QString("");
    m_time_isSet = false;
    alt_frequencies = new QList<SWGRDSReport_altFrequencies*>();
    m_alt_frequencies_isSet = false;
}

void
SWGRDSReport::cleanup() {




    if(pid != nullptr) { 
        delete pid;
    }
    if(pi_type != nullptr) { 
        delete pi_type;
    }
    if(pi_coverage != nullptr) { 
        delete pi_coverage;
    }
    if(prog_service_name != nullptr) { 
        delete prog_service_name;
    }
    if(music_speech != nullptr) { 
        delete music_speech;
    }
    if(mono_stereo != nullptr) { 
        delete mono_stereo;
    }
    if(radio_text != nullptr) { 
        delete radio_text;
    }
    if(time != nullptr) { 
        delete time;
    }
    if(alt_frequencies != nullptr) { 
        auto arr = alt_frequencies;
        for(auto o: *arr) { 
            delete o;
        }
        delete alt_frequencies;
    }
}

SWGRDSReport*
SWGRDSReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRDSReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&demod_status, pJson["demodStatus"], "qint32", "");
    
    ::SWGSDRangel::setValue(&decod_status, pJson["decodStatus"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rds_demod_accum_db, pJson["rdsDemodAccumDB"], "float", "");
    
    ::SWGSDRangel::setValue(&rds_demod_frequency, pJson["rdsDemodFrequency"], "float", "");
    
    ::SWGSDRangel::setValue(&pid, pJson["pid"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&pi_type, pJson["piType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&pi_coverage, pJson["piCoverage"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&prog_service_name, pJson["progServiceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&music_speech, pJson["musicSpeech"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&mono_stereo, pJson["monoStereo"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&radio_text, pJson["radioText"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&time, pJson["time"], "QString", "QString");
    
    
    ::SWGSDRangel::setValue(&alt_frequencies, pJson["altFrequencies"], "QList", "SWGRDSReport_altFrequencies");
}

QString
SWGRDSReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGRDSReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_demod_status_isSet){
        obj->insert("demodStatus", QJsonValue(demod_status));
    }
    if(m_decod_status_isSet){
        obj->insert("decodStatus", QJsonValue(decod_status));
    }
    if(m_rds_demod_accum_db_isSet){
        obj->insert("rdsDemodAccumDB", QJsonValue(rds_demod_accum_db));
    }
    if(m_rds_demod_frequency_isSet){
        obj->insert("rdsDemodFrequency", QJsonValue(rds_demod_frequency));
    }
    if(pid != nullptr && *pid != QString("")){
        toJsonValue(QString("pid"), pid, obj, QString("QString"));
    }
    if(pi_type != nullptr && *pi_type != QString("")){
        toJsonValue(QString("piType"), pi_type, obj, QString("QString"));
    }
    if(pi_coverage != nullptr && *pi_coverage != QString("")){
        toJsonValue(QString("piCoverage"), pi_coverage, obj, QString("QString"));
    }
    if(prog_service_name != nullptr && *prog_service_name != QString("")){
        toJsonValue(QString("progServiceName"), prog_service_name, obj, QString("QString"));
    }
    if(music_speech != nullptr && *music_speech != QString("")){
        toJsonValue(QString("musicSpeech"), music_speech, obj, QString("QString"));
    }
    if(mono_stereo != nullptr && *mono_stereo != QString("")){
        toJsonValue(QString("monoStereo"), mono_stereo, obj, QString("QString"));
    }
    if(radio_text != nullptr && *radio_text != QString("")){
        toJsonValue(QString("radioText"), radio_text, obj, QString("QString"));
    }
    if(time != nullptr && *time != QString("")){
        toJsonValue(QString("time"), time, obj, QString("QString"));
    }
    if(alt_frequencies->size() > 0){
        toJsonArray((QList<void*>*)alt_frequencies, obj, "altFrequencies", "SWGRDSReport_altFrequencies");
    }

    return obj;
}

qint32
SWGRDSReport::getDemodStatus() {
    return demod_status;
}
void
SWGRDSReport::setDemodStatus(qint32 demod_status) {
    this->demod_status = demod_status;
    this->m_demod_status_isSet = true;
}

qint32
SWGRDSReport::getDecodStatus() {
    return decod_status;
}
void
SWGRDSReport::setDecodStatus(qint32 decod_status) {
    this->decod_status = decod_status;
    this->m_decod_status_isSet = true;
}

float
SWGRDSReport::getRdsDemodAccumDb() {
    return rds_demod_accum_db;
}
void
SWGRDSReport::setRdsDemodAccumDb(float rds_demod_accum_db) {
    this->rds_demod_accum_db = rds_demod_accum_db;
    this->m_rds_demod_accum_db_isSet = true;
}

float
SWGRDSReport::getRdsDemodFrequency() {
    return rds_demod_frequency;
}
void
SWGRDSReport::setRdsDemodFrequency(float rds_demod_frequency) {
    this->rds_demod_frequency = rds_demod_frequency;
    this->m_rds_demod_frequency_isSet = true;
}

QString*
SWGRDSReport::getPid() {
    return pid;
}
void
SWGRDSReport::setPid(QString* pid) {
    this->pid = pid;
    this->m_pid_isSet = true;
}

QString*
SWGRDSReport::getPiType() {
    return pi_type;
}
void
SWGRDSReport::setPiType(QString* pi_type) {
    this->pi_type = pi_type;
    this->m_pi_type_isSet = true;
}

QString*
SWGRDSReport::getPiCoverage() {
    return pi_coverage;
}
void
SWGRDSReport::setPiCoverage(QString* pi_coverage) {
    this->pi_coverage = pi_coverage;
    this->m_pi_coverage_isSet = true;
}

QString*
SWGRDSReport::getProgServiceName() {
    return prog_service_name;
}
void
SWGRDSReport::setProgServiceName(QString* prog_service_name) {
    this->prog_service_name = prog_service_name;
    this->m_prog_service_name_isSet = true;
}

QString*
SWGRDSReport::getMusicSpeech() {
    return music_speech;
}
void
SWGRDSReport::setMusicSpeech(QString* music_speech) {
    this->music_speech = music_speech;
    this->m_music_speech_isSet = true;
}

QString*
SWGRDSReport::getMonoStereo() {
    return mono_stereo;
}
void
SWGRDSReport::setMonoStereo(QString* mono_stereo) {
    this->mono_stereo = mono_stereo;
    this->m_mono_stereo_isSet = true;
}

QString*
SWGRDSReport::getRadioText() {
    return radio_text;
}
void
SWGRDSReport::setRadioText(QString* radio_text) {
    this->radio_text = radio_text;
    this->m_radio_text_isSet = true;
}

QString*
SWGRDSReport::getTime() {
    return time;
}
void
SWGRDSReport::setTime(QString* time) {
    this->time = time;
    this->m_time_isSet = true;
}

QList<SWGRDSReport_altFrequencies*>*
SWGRDSReport::getAltFrequencies() {
    return alt_frequencies;
}
void
SWGRDSReport::setAltFrequencies(QList<SWGRDSReport_altFrequencies*>* alt_frequencies) {
    this->alt_frequencies = alt_frequencies;
    this->m_alt_frequencies_isSet = true;
}


bool
SWGRDSReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_demod_status_isSet){ isObjectUpdated = true; break;}
        if(m_decod_status_isSet){ isObjectUpdated = true; break;}
        if(m_rds_demod_accum_db_isSet){ isObjectUpdated = true; break;}
        if(m_rds_demod_frequency_isSet){ isObjectUpdated = true; break;}
        if(pid != nullptr && *pid != QString("")){ isObjectUpdated = true; break;}
        if(pi_type != nullptr && *pi_type != QString("")){ isObjectUpdated = true; break;}
        if(pi_coverage != nullptr && *pi_coverage != QString("")){ isObjectUpdated = true; break;}
        if(prog_service_name != nullptr && *prog_service_name != QString("")){ isObjectUpdated = true; break;}
        if(music_speech != nullptr && *music_speech != QString("")){ isObjectUpdated = true; break;}
        if(mono_stereo != nullptr && *mono_stereo != QString("")){ isObjectUpdated = true; break;}
        if(radio_text != nullptr && *radio_text != QString("")){ isObjectUpdated = true; break;}
        if(time != nullptr && *time != QString("")){ isObjectUpdated = true; break;}
        if(alt_frequencies->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

