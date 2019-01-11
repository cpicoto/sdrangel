/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.4.1
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGTestSourceSettings.h
 *
 * TestSource
 */

#ifndef SWGTestSourceSettings_H_
#define SWGTestSourceSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGTestSourceSettings: public SWGObject {
public:
    SWGTestSourceSettings();
    SWGTestSourceSettings(QString* json);
    virtual ~SWGTestSourceSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGTestSourceSettings* fromJson(QString &jsonString) override;

    qint32 getCenterFrequency();
    void setCenterFrequency(qint32 center_frequency);

    qint32 getFrequencyShift();
    void setFrequencyShift(qint32 frequency_shift);

    qint32 getSampleRate();
    void setSampleRate(qint32 sample_rate);

    qint32 getLog2Decim();
    void setLog2Decim(qint32 log2_decim);

    qint32 getFcPos();
    void setFcPos(qint32 fc_pos);

    qint32 getSampleSizeIndex();
    void setSampleSizeIndex(qint32 sample_size_index);

    qint32 getAmplitudeBits();
    void setAmplitudeBits(qint32 amplitude_bits);

    qint32 getAutoCorrOptions();
    void setAutoCorrOptions(qint32 auto_corr_options);

    qint32 getModulation();
    void setModulation(qint32 modulation);

    qint32 getModulationTone();
    void setModulationTone(qint32 modulation_tone);

    qint32 getAmModulation();
    void setAmModulation(qint32 am_modulation);

    qint32 getFmDeviation();
    void setFmDeviation(qint32 fm_deviation);

    float getDcFactor();
    void setDcFactor(float dc_factor);

    float getIFactor();
    void setIFactor(float i_factor);

    float getQFactor();
    void setQFactor(float q_factor);

    float getPhaseImbalance();
    void setPhaseImbalance(float phase_imbalance);

    QString* getFileRecordName();
    void setFileRecordName(QString* file_record_name);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);


    virtual bool isSet() override;

private:
    qint32 center_frequency;
    bool m_center_frequency_isSet;

    qint32 frequency_shift;
    bool m_frequency_shift_isSet;

    qint32 sample_rate;
    bool m_sample_rate_isSet;

    qint32 log2_decim;
    bool m_log2_decim_isSet;

    qint32 fc_pos;
    bool m_fc_pos_isSet;

    qint32 sample_size_index;
    bool m_sample_size_index_isSet;

    qint32 amplitude_bits;
    bool m_amplitude_bits_isSet;

    qint32 auto_corr_options;
    bool m_auto_corr_options_isSet;

    qint32 modulation;
    bool m_modulation_isSet;

    qint32 modulation_tone;
    bool m_modulation_tone_isSet;

    qint32 am_modulation;
    bool m_am_modulation_isSet;

    qint32 fm_deviation;
    bool m_fm_deviation_isSet;

    float dc_factor;
    bool m_dc_factor_isSet;

    float i_factor;
    bool m_i_factor_isSet;

    float q_factor;
    bool m_q_factor_isSet;

    float phase_imbalance;
    bool m_phase_imbalance_isSet;

    QString* file_record_name;
    bool m_file_record_name_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

};

}

#endif /* SWGTestSourceSettings_H_ */
