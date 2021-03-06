/**
 * sms-client
 * API for sms-send functions
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "SmsSendRequest.h"

namespace com {
namespace nvt {
namespace api {
namespace client {
namespace model {




SmsSendRequest::SmsSendRequest()
{
    m_SenderName = utility::conversions::to_string_t("");
    m_SenderNameIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_Source = utility::conversions::to_string_t("");
    m_SourceIsSet = false;
}

SmsSendRequest::~SmsSendRequest()
{
}

void SmsSendRequest::validate()
{
    // TODO: implement validation
}

web::json::value SmsSendRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SenderNameIsSet)
    {
        val[utility::conversions::to_string_t("senderName")] = ModelBase::toJson(m_SenderName);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_SourceIsSet)
    {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(m_Source);
    }

    return val;
}

bool SmsSendRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("senderName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("senderName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_senderName;
            ok &= ModelBase::fromJson(fieldValue, refVal_senderName);
            setSenderName(refVal_senderName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_body;
            ok &= ModelBase::fromJson(fieldValue, refVal_body);
            setBody(refVal_body);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_phone;
            ok &= ModelBase::fromJson(fieldValue, refVal_phone);
            setPhone(refVal_phone);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_source;
            ok &= ModelBase::fromJson(fieldValue, refVal_source);
            setSource(refVal_source);
        }
    }
    return ok;
}

void SmsSendRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SenderNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("senderName"), m_SenderName));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
    }
    if(m_SourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("source"), m_Source));
    }
}

bool SmsSendRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("senderName")))
    {
        utility::string_t refVal_senderName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("senderName")), refVal_senderName );
        setSenderName(refVal_senderName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        utility::string_t refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        utility::string_t refVal_phone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone")), refVal_phone );
        setPhone(refVal_phone);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("source")))
    {
        utility::string_t refVal_source;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("source")), refVal_source );
        setSource(refVal_source);
    }
    return ok;
}

utility::string_t SmsSendRequest::getSenderName() const
{
    return m_SenderName;
}

void SmsSendRequest::setSenderName(const utility::string_t& value)
{
    m_SenderName = value;
    m_SenderNameIsSet = true;
}

bool SmsSendRequest::senderNameIsSet() const
{
    return m_SenderNameIsSet;
}

void SmsSendRequest::unsetSenderName()
{
    m_SenderNameIsSet = false;
}
utility::string_t SmsSendRequest::getBody() const
{
    return m_Body;
}

void SmsSendRequest::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool SmsSendRequest::bodyIsSet() const
{
    return m_BodyIsSet;
}

void SmsSendRequest::unsetBody()
{
    m_BodyIsSet = false;
}
utility::string_t SmsSendRequest::getPhone() const
{
    return m_Phone;
}

void SmsSendRequest::setPhone(const utility::string_t& value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}

bool SmsSendRequest::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void SmsSendRequest::unsetPhone()
{
    m_PhoneIsSet = false;
}
utility::string_t SmsSendRequest::getSource() const
{
    return m_Source;
}

void SmsSendRequest::setSource(const utility::string_t& value)
{
    m_Source = value;
    m_SourceIsSet = true;
}

bool SmsSendRequest::sourceIsSet() const
{
    return m_SourceIsSet;
}

void SmsSendRequest::unsetSource()
{
    m_SourceIsSet = false;
}
}
}
}
}
}


