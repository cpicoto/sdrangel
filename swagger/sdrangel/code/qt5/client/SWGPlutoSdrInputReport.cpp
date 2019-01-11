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


#include "SWGPlutoSdrInputReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPlutoSdrInputReport::SWGPlutoSdrInputReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPlutoSdrInputReport::SWGPlutoSdrInputReport() {
    adc_rate = 0;
    m_adc_rate_isSet = false;
    rssi = nullptr;
    m_rssi_isSet = false;
    gain_db = 0;
    m_gain_db_isSet = false;
    temperature = 0.0f;
    m_temperature_isSet = false;
}

SWGPlutoSdrInputReport::~SWGPlutoSdrInputReport() {
    this->cleanup();
}

void
SWGPlutoSdrInputReport::init() {
    adc_rate = 0;
    m_adc_rate_isSet = false;
    rssi = new QString("");
    m_rssi_isSet = false;
    gain_db = 0;
    m_gain_db_isSet = false;
    temperature = 0.0f;
    m_temperature_isSet = false;
}

void
SWGPlutoSdrInputReport::cleanup() {

    if(rssi != nullptr) { 
        delete rssi;
    }


}

SWGPlutoSdrInputReport*
SWGPlutoSdrInputReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPlutoSdrInputReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&adc_rate, pJson["adcRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rssi, pJson["rssi"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&gain_db, pJson["gainDB"], "qint32", "");
    
    ::SWGSDRangel::setValue(&temperature, pJson["temperature"], "float", "");
    
}

QString
SWGPlutoSdrInputReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPlutoSdrInputReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_adc_rate_isSet){
        obj->insert("adcRate", QJsonValue(adc_rate));
    }
    if(rssi != nullptr && *rssi != QString("")){
        toJsonValue(QString("rssi"), rssi, obj, QString("QString"));
    }
    if(m_gain_db_isSet){
        obj->insert("gainDB", QJsonValue(gain_db));
    }
    if(m_temperature_isSet){
        obj->insert("temperature", QJsonValue(temperature));
    }

    return obj;
}

qint32
SWGPlutoSdrInputReport::getAdcRate() {
    return adc_rate;
}
void
SWGPlutoSdrInputReport::setAdcRate(qint32 adc_rate) {
    this->adc_rate = adc_rate;
    this->m_adc_rate_isSet = true;
}

QString*
SWGPlutoSdrInputReport::getRssi() {
    return rssi;
}
void
SWGPlutoSdrInputReport::setRssi(QString* rssi) {
    this->rssi = rssi;
    this->m_rssi_isSet = true;
}

qint32
SWGPlutoSdrInputReport::getGainDb() {
    return gain_db;
}
void
SWGPlutoSdrInputReport::setGainDb(qint32 gain_db) {
    this->gain_db = gain_db;
    this->m_gain_db_isSet = true;
}

float
SWGPlutoSdrInputReport::getTemperature() {
    return temperature;
}
void
SWGPlutoSdrInputReport::setTemperature(float temperature) {
    this->temperature = temperature;
    this->m_temperature_isSet = true;
}


bool
SWGPlutoSdrInputReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_adc_rate_isSet){ isObjectUpdated = true; break;}
        if(rssi != nullptr && *rssi != QString("")){ isObjectUpdated = true; break;}
        if(m_gain_db_isSet){ isObjectUpdated = true; break;}
        if(m_temperature_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

