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

/*
 * SmsSendResponse.h
 *
 * The structure to describe a response to a text message send request.
 */

#ifndef COM_NVT_API_CLIENT_MODEL_SmsSendResponse_H_
#define COM_NVT_API_CLIENT_MODEL_SmsSendResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace nvt {
namespace api {
namespace client {
namespace model {


/// <summary>
/// The structure to describe a response to a text message send request.
/// </summary>
class  SmsSendResponse
    : public ModelBase
{
public:
    SmsSendResponse();
    virtual ~SmsSendResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SmsSendResponse members

    /// <summary>
    /// 
    /// </summary>
    bool isSuccess() const;
    bool successIsSet() const;
    void unsetSuccess();

    void setSuccess(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unsetErrorMessage();

    void setErrorMessage(const utility::string_t& value);


protected:
    bool m_Success;
    bool m_SuccessIsSet;
    utility::string_t m_ErrorMessage;
    bool m_ErrorMessageIsSet;
};


}
}
}
}
}

#endif /* COM_NVT_API_CLIENT_MODEL_SmsSendResponse_H_ */
