
#include "SamiNAUserAdministrative.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAUserAdministrative::SamiNAUserAdministrative() {
    init();
}

SamiNAUserAdministrative::~SamiNAUserAdministrative() {
    this->cleanup();
}

void
SamiNAUserAdministrative::init() {
    pCountry = null;
    pLang = null;
    pReg_locale = null;
    pUnit = null;
    pWindunit = null;
    pPressureunit = null;
    pFeel_like_algo = null;
    
}

void
SamiNAUserAdministrative::cleanup() {
    if(pCountry != null) {
        
        delete pCountry;
        pCountry = null;
    }
    if(pLang != null) {
        
        delete pLang;
        pLang = null;
    }
    if(pReg_locale != null) {
        
        delete pReg_locale;
        pReg_locale = null;
    }
    if(pUnit != null) {
        
        delete pUnit;
        pUnit = null;
    }
    if(pWindunit != null) {
        
        delete pWindunit;
        pWindunit = null;
    }
    if(pPressureunit != null) {
        
        delete pPressureunit;
        pPressureunit = null;
    }
    if(pFeel_like_algo != null) {
        
        delete pFeel_like_algo;
        pFeel_like_algo = null;
    }
    
}


SamiNAUserAdministrative*
SamiNAUserAdministrative::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiNAUserAdministrative::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountryKey = new JsonString(L"country");
        IJsonValue* pCountryVal = null;
        pJsonObject->GetValue(pCountryKey, pCountryVal);
        if(pCountryVal != null) {
            
            pCountry = new String();
            jsonToValue(pCountry, pCountryVal, L"String", L"String");
        }
        delete pCountryKey;
        JsonString* pLangKey = new JsonString(L"lang");
        IJsonValue* pLangVal = null;
        pJsonObject->GetValue(pLangKey, pLangVal);
        if(pLangVal != null) {
            
            pLang = new String();
            jsonToValue(pLang, pLangVal, L"String", L"String");
        }
        delete pLangKey;
        JsonString* pReg_localeKey = new JsonString(L"reg_locale");
        IJsonValue* pReg_localeVal = null;
        pJsonObject->GetValue(pReg_localeKey, pReg_localeVal);
        if(pReg_localeVal != null) {
            
            pReg_locale = new String();
            jsonToValue(pReg_locale, pReg_localeVal, L"String", L"String");
        }
        delete pReg_localeKey;
        JsonString* pUnitKey = new JsonString(L"unit");
        IJsonValue* pUnitVal = null;
        pJsonObject->GetValue(pUnitKey, pUnitVal);
        if(pUnitVal != null) {
            
            pUnit = new String();
            jsonToValue(pUnit, pUnitVal, L"String", L"String");
        }
        delete pUnitKey;
        JsonString* pWindunitKey = new JsonString(L"windunit");
        IJsonValue* pWindunitVal = null;
        pJsonObject->GetValue(pWindunitKey, pWindunitVal);
        if(pWindunitVal != null) {
            
            pWindunit = new String();
            jsonToValue(pWindunit, pWindunitVal, L"String", L"String");
        }
        delete pWindunitKey;
        JsonString* pPressureunitKey = new JsonString(L"pressureunit");
        IJsonValue* pPressureunitVal = null;
        pJsonObject->GetValue(pPressureunitKey, pPressureunitVal);
        if(pPressureunitVal != null) {
            
            pPressureunit = new String();
            jsonToValue(pPressureunit, pPressureunitVal, L"String", L"String");
        }
        delete pPressureunitKey;
        JsonString* pFeel_like_algoKey = new JsonString(L"feel_like_algo");
        IJsonValue* pFeel_like_algoVal = null;
        pJsonObject->GetValue(pFeel_like_algoKey, pFeel_like_algoVal);
        if(pFeel_like_algoVal != null) {
            
            pFeel_like_algo = new String();
            jsonToValue(pFeel_like_algo, pFeel_like_algoVal, L"String", L"String");
        }
        delete pFeel_like_algoKey;
        
    }
}

SamiNAUserAdministrative::SamiNAUserAdministrative(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiNAUserAdministrative::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiNAUserAdministrative::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCountryKey = new JsonString(L"country");
    pJsonObject->Add(pCountryKey, toJson(getPCountry(), "String", ""));

    
    JsonString *pLangKey = new JsonString(L"lang");
    pJsonObject->Add(pLangKey, toJson(getPLang(), "String", ""));

    
    JsonString *pReg_localeKey = new JsonString(L"reg_locale");
    pJsonObject->Add(pReg_localeKey, toJson(getPRegLocale(), "String", ""));

    
    JsonString *pUnitKey = new JsonString(L"unit");
    pJsonObject->Add(pUnitKey, toJson(getPUnit(), "String", ""));

    
    JsonString *pWindunitKey = new JsonString(L"windunit");
    pJsonObject->Add(pWindunitKey, toJson(getPWindunit(), "String", ""));

    
    JsonString *pPressureunitKey = new JsonString(L"pressureunit");
    pJsonObject->Add(pPressureunitKey, toJson(getPPressureunit(), "String", ""));

    
    JsonString *pFeel_like_algoKey = new JsonString(L"feel_like_algo");
    pJsonObject->Add(pFeel_like_algoKey, toJson(getPFeelLikeAlgo(), "String", ""));

    
    return pJsonObject;
}

String*
SamiNAUserAdministrative::getPCountry() {
    return pCountry;
}
void
SamiNAUserAdministrative::setPCountry(String* pCountry) {
    this->pCountry = pCountry;
}

String*
SamiNAUserAdministrative::getPLang() {
    return pLang;
}
void
SamiNAUserAdministrative::setPLang(String* pLang) {
    this->pLang = pLang;
}

String*
SamiNAUserAdministrative::getPRegLocale() {
    return pReg_locale;
}
void
SamiNAUserAdministrative::setPRegLocale(String* pReg_locale) {
    this->pReg_locale = pReg_locale;
}

String*
SamiNAUserAdministrative::getPUnit() {
    return pUnit;
}
void
SamiNAUserAdministrative::setPUnit(String* pUnit) {
    this->pUnit = pUnit;
}

String*
SamiNAUserAdministrative::getPWindunit() {
    return pWindunit;
}
void
SamiNAUserAdministrative::setPWindunit(String* pWindunit) {
    this->pWindunit = pWindunit;
}

String*
SamiNAUserAdministrative::getPPressureunit() {
    return pPressureunit;
}
void
SamiNAUserAdministrative::setPPressureunit(String* pPressureunit) {
    this->pPressureunit = pPressureunit;
}

String*
SamiNAUserAdministrative::getPFeelLikeAlgo() {
    return pFeel_like_algo;
}
void
SamiNAUserAdministrative::setPFeelLikeAlgo(String* pFeel_like_algo) {
    this->pFeel_like_algo = pFeel_like_algo;
}



} /* namespace Swagger */

