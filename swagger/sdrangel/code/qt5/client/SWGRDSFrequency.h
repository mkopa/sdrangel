/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGRDSFrequency.h
 *
 * Frequency information
 */

#ifndef SWGRDSFrequency_H_
#define SWGRDSFrequency_H_

#include <QJsonObject>



#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGRDSFrequency: public SWGObject {
public:
    SWGRDSFrequency();
    SWGRDSFrequency(QString* json);
    virtual ~SWGRDSFrequency();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGRDSFrequency* fromJson(QString &jsonString) override;

    float getFrequency();
    void setFrequency(float frequency);


    virtual bool isSet() override;

private:
    float frequency;
    bool m_frequency_isSet;

};

}

#endif /* SWGRDSFrequency_H_ */