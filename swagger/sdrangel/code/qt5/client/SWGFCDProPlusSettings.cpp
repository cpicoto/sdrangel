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


#include "SWGFCDProPlusSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFCDProPlusSettings::SWGFCDProPlusSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFCDProPlusSettings::SWGFCDProPlusSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    range_low = 0;
    m_range_low_isSet = false;
    lna_gain = 0;
    m_lna_gain_isSet = false;
    mix_gain = 0;
    m_mix_gain_isSet = false;
    bias_t = 0;
    m_bias_t_isSet = false;
    if_gain = 0;
    m_if_gain_isSet = false;
    if_filter_index = 0;
    m_if_filter_index_isSet = false;
    rf_filter_index = 0;
    m_rf_filter_index_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_imbalance = 0;
    m_iq_imbalance_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    file_record_name = nullptr;
    m_file_record_name_isSet = false;
}

SWGFCDProPlusSettings::~SWGFCDProPlusSettings() {
    this->cleanup();
}

void
SWGFCDProPlusSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    range_low = 0;
    m_range_low_isSet = false;
    lna_gain = 0;
    m_lna_gain_isSet = false;
    mix_gain = 0;
    m_mix_gain_isSet = false;
    bias_t = 0;
    m_bias_t_isSet = false;
    if_gain = 0;
    m_if_gain_isSet = false;
    if_filter_index = 0;
    m_if_filter_index_isSet = false;
    rf_filter_index = 0;
    m_rf_filter_index_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_imbalance = 0;
    m_iq_imbalance_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    file_record_name = new QString("");
    m_file_record_name_isSet = false;
}

void
SWGFCDProPlusSettings::cleanup() {















    if(file_record_name != nullptr) { 
        delete file_record_name;
    }
}

SWGFCDProPlusSettings*
SWGFCDProPlusSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFCDProPlusSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fc_pos, pJson["fcPos"], "qint32", "");
    
    ::SWGSDRangel::setValue(&range_low, pJson["rangeLow"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_gain, pJson["lnaGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mix_gain, pJson["mixGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bias_t, pJson["biasT"], "qint32", "");
    
    ::SWGSDRangel::setValue(&if_gain, pJson["ifGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&if_filter_index, pJson["ifFilterIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rf_filter_index, pJson["rfFilterIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_imbalance, pJson["iqImbalance"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&file_record_name, pJson["fileRecordName"], "QString", "QString");
    
}

QString
SWGFCDProPlusSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFCDProPlusSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_fc_pos_isSet){
        obj->insert("fcPos", QJsonValue(fc_pos));
    }
    if(m_range_low_isSet){
        obj->insert("rangeLow", QJsonValue(range_low));
    }
    if(m_lna_gain_isSet){
        obj->insert("lnaGain", QJsonValue(lna_gain));
    }
    if(m_mix_gain_isSet){
        obj->insert("mixGain", QJsonValue(mix_gain));
    }
    if(m_bias_t_isSet){
        obj->insert("biasT", QJsonValue(bias_t));
    }
    if(m_if_gain_isSet){
        obj->insert("ifGain", QJsonValue(if_gain));
    }
    if(m_if_filter_index_isSet){
        obj->insert("ifFilterIndex", QJsonValue(if_filter_index));
    }
    if(m_rf_filter_index_isSet){
        obj->insert("rfFilterIndex", QJsonValue(rf_filter_index));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_imbalance_isSet){
        obj->insert("iqImbalance", QJsonValue(iq_imbalance));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(file_record_name != nullptr && *file_record_name != QString("")){
        toJsonValue(QString("fileRecordName"), file_record_name, obj, QString("QString"));
    }

    return obj;
}

qint64
SWGFCDProPlusSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGFCDProPlusSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGFCDProPlusSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGFCDProPlusSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGFCDProPlusSettings::getFcPos() {
    return fc_pos;
}
void
SWGFCDProPlusSettings::setFcPos(qint32 fc_pos) {
    this->fc_pos = fc_pos;
    this->m_fc_pos_isSet = true;
}

qint32
SWGFCDProPlusSettings::getRangeLow() {
    return range_low;
}
void
SWGFCDProPlusSettings::setRangeLow(qint32 range_low) {
    this->range_low = range_low;
    this->m_range_low_isSet = true;
}

qint32
SWGFCDProPlusSettings::getLnaGain() {
    return lna_gain;
}
void
SWGFCDProPlusSettings::setLnaGain(qint32 lna_gain) {
    this->lna_gain = lna_gain;
    this->m_lna_gain_isSet = true;
}

qint32
SWGFCDProPlusSettings::getMixGain() {
    return mix_gain;
}
void
SWGFCDProPlusSettings::setMixGain(qint32 mix_gain) {
    this->mix_gain = mix_gain;
    this->m_mix_gain_isSet = true;
}

qint32
SWGFCDProPlusSettings::getBiasT() {
    return bias_t;
}
void
SWGFCDProPlusSettings::setBiasT(qint32 bias_t) {
    this->bias_t = bias_t;
    this->m_bias_t_isSet = true;
}

qint32
SWGFCDProPlusSettings::getIfGain() {
    return if_gain;
}
void
SWGFCDProPlusSettings::setIfGain(qint32 if_gain) {
    this->if_gain = if_gain;
    this->m_if_gain_isSet = true;
}

qint32
SWGFCDProPlusSettings::getIfFilterIndex() {
    return if_filter_index;
}
void
SWGFCDProPlusSettings::setIfFilterIndex(qint32 if_filter_index) {
    this->if_filter_index = if_filter_index;
    this->m_if_filter_index_isSet = true;
}

qint32
SWGFCDProPlusSettings::getRfFilterIndex() {
    return rf_filter_index;
}
void
SWGFCDProPlusSettings::setRfFilterIndex(qint32 rf_filter_index) {
    this->rf_filter_index = rf_filter_index;
    this->m_rf_filter_index_isSet = true;
}

qint32
SWGFCDProPlusSettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGFCDProPlusSettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGFCDProPlusSettings::getDcBlock() {
    return dc_block;
}
void
SWGFCDProPlusSettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGFCDProPlusSettings::getIqImbalance() {
    return iq_imbalance;
}
void
SWGFCDProPlusSettings::setIqImbalance(qint32 iq_imbalance) {
    this->iq_imbalance = iq_imbalance;
    this->m_iq_imbalance_isSet = true;
}

qint32
SWGFCDProPlusSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGFCDProPlusSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGFCDProPlusSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGFCDProPlusSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

QString*
SWGFCDProPlusSettings::getFileRecordName() {
    return file_record_name;
}
void
SWGFCDProPlusSettings::setFileRecordName(QString* file_record_name) {
    this->file_record_name = file_record_name;
    this->m_file_record_name_isSet = true;
}


bool
SWGFCDProPlusSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_log2_decim_isSet){ isObjectUpdated = true; break;}
        if(m_fc_pos_isSet){ isObjectUpdated = true; break;}
        if(m_range_low_isSet){ isObjectUpdated = true; break;}
        if(m_lna_gain_isSet){ isObjectUpdated = true; break;}
        if(m_mix_gain_isSet){ isObjectUpdated = true; break;}
        if(m_bias_t_isSet){ isObjectUpdated = true; break;}
        if(m_if_gain_isSet){ isObjectUpdated = true; break;}
        if(m_if_filter_index_isSet){ isObjectUpdated = true; break;}
        if(m_rf_filter_index_isSet){ isObjectUpdated = true; break;}
        if(m_l_oppm_tenths_isSet){ isObjectUpdated = true; break;}
        if(m_dc_block_isSet){ isObjectUpdated = true; break;}
        if(m_iq_imbalance_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_mode_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_delta_frequency_isSet){ isObjectUpdated = true; break;}
        if(file_record_name != nullptr && *file_record_name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

