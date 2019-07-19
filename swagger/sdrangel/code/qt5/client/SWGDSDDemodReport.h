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

/*
 * SWGDSDDemodReport.h
 *
 * DSDDemod
 */

#ifndef SWGDSDDemodReport_H_
#define SWGDSDDemodReport_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGDSDDemodReport: public SWGObject {
public:
    SWGDSDDemodReport();
    SWGDSDDemodReport(QString* json);
    virtual ~SWGDSDDemodReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGDSDDemodReport* fromJson(QString &jsonString) override;

    float getChannelPowerDb();
    void setChannelPowerDb(float channel_power_db);

    qint32 getAudioSampleRate();
    void setAudioSampleRate(qint32 audio_sample_rate);

    qint32 getChannelSampleRate();
    void setChannelSampleRate(qint32 channel_sample_rate);

    qint32 getSquelch();
    void setSquelch(qint32 squelch);

    qint32 getPllLocked();
    void setPllLocked(qint32 pll_locked);

    qint32 getSlot1On();
    void setSlot1On(qint32 slot1_on);

    qint32 getSlot2On();
    void setSlot2On(qint32 slot2_on);

    QString* getSyncType();
    void setSyncType(QString* sync_type);

    qint32 getInLevel();
    void setInLevel(qint32 in_level);

    qint32 getCarierPosition();
    void setCarierPosition(qint32 carier_position);

    qint32 getZeroCrossingPosition();
    void setZeroCrossingPosition(qint32 zero_crossing_position);

    qint32 getSyncRate();
    void setSyncRate(qint32 sync_rate);

    QString* getStatusText();
    void setStatusText(QString* status_text);


    virtual bool isSet() override;

private:
    float channel_power_db;
    bool m_channel_power_db_isSet;

    qint32 audio_sample_rate;
    bool m_audio_sample_rate_isSet;

    qint32 channel_sample_rate;
    bool m_channel_sample_rate_isSet;

    qint32 squelch;
    bool m_squelch_isSet;

    qint32 pll_locked;
    bool m_pll_locked_isSet;

    qint32 slot1_on;
    bool m_slot1_on_isSet;

    qint32 slot2_on;
    bool m_slot2_on_isSet;

    QString* sync_type;
    bool m_sync_type_isSet;

    qint32 in_level;
    bool m_in_level_isSet;

    qint32 carier_position;
    bool m_carier_position_isSet;

    qint32 zero_crossing_position;
    bool m_zero_crossing_position_isSet;

    qint32 sync_rate;
    bool m_sync_rate_isSet;

    QString* status_text;
    bool m_status_text_isSet;

};

}

#endif /* SWGDSDDemodReport_H_ */
