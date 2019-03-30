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

/*
 * SWGRemoteSourceReport.h
 *
 * Remote channel source report
 */

#ifndef SWGRemoteSourceReport_H_
#define SWGRemoteSourceReport_H_

#include <QJsonObject>



#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGRemoteSourceReport: public SWGObject {
public:
    SWGRemoteSourceReport();
    SWGRemoteSourceReport(QString* json);
    virtual ~SWGRemoteSourceReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGRemoteSourceReport* fromJson(QString &jsonString) override;

    qint32 getQueueLength();
    void setQueueLength(qint32 queue_length);

    qint32 getQueueSize();
    void setQueueSize(qint32 queue_size);

    qint32 getSamplesCount();
    void setSamplesCount(qint32 samples_count);

    qint32 getCorrectableErrorsCount();
    void setCorrectableErrorsCount(qint32 correctable_errors_count);

    qint32 getUncorrectableErrorsCount();
    void setUncorrectableErrorsCount(qint32 uncorrectable_errors_count);

    qint32 getTvSec();
    void setTvSec(qint32 tv_sec);

    qint32 getTvUSec();
    void setTvUSec(qint32 tv_u_sec);

    qint32 getNbOriginalBlocks();
    void setNbOriginalBlocks(qint32 nb_original_blocks);

    qint32 getNbFecBlocks();
    void setNbFecBlocks(qint32 nb_fec_blocks);

    qint32 getCenterFreq();
    void setCenterFreq(qint32 center_freq);

    qint32 getSampleRate();
    void setSampleRate(qint32 sample_rate);

    qint32 getDeviceCenterFreq();
    void setDeviceCenterFreq(qint32 device_center_freq);

    qint32 getDeviceSampleRate();
    void setDeviceSampleRate(qint32 device_sample_rate);


    virtual bool isSet() override;

private:
    qint32 queue_length;
    bool m_queue_length_isSet;

    qint32 queue_size;
    bool m_queue_size_isSet;

    qint32 samples_count;
    bool m_samples_count_isSet;

    qint32 correctable_errors_count;
    bool m_correctable_errors_count_isSet;

    qint32 uncorrectable_errors_count;
    bool m_uncorrectable_errors_count_isSet;

    qint32 tv_sec;
    bool m_tv_sec_isSet;

    qint32 tv_u_sec;
    bool m_tv_u_sec_isSet;

    qint32 nb_original_blocks;
    bool m_nb_original_blocks_isSet;

    qint32 nb_fec_blocks;
    bool m_nb_fec_blocks_isSet;

    qint32 center_freq;
    bool m_center_freq_isSet;

    qint32 sample_rate;
    bool m_sample_rate_isSet;

    qint32 device_center_freq;
    bool m_device_center_freq_isSet;

    qint32 device_sample_rate;
    bool m_device_sample_rate_isSet;

};

}

#endif /* SWGRemoteSourceReport_H_ */
