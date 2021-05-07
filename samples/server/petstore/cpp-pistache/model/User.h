/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * User.h
 *
 * A User who is purchasing from the pet store
 */

#ifndef User_H_
#define User_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// A User who is purchasing from the pet store
/// </summary>
class  User
{
public:
    User();
    virtual ~User() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    bool operator==(const User& rhs) const;
    bool operator!=(const User& rhs) const;

    /////////////////////////////////////////////
    /// User members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t const value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getUsername() const;
    void setUsername(std::string const& value);
    bool usernameIsSet() const;
    void unsetUsername();
    /// <summary>
    /// 
    /// </summary>
    std::string getFirstName() const;
    void setFirstName(std::string const& value);
    bool firstNameIsSet() const;
    void unsetFirstName();
    /// <summary>
    /// 
    /// </summary>
    std::string getLastName() const;
    void setLastName(std::string const& value);
    bool lastNameIsSet() const;
    void unsetLastName();
    /// <summary>
    /// 
    /// </summary>
    std::string getEmail() const;
    void setEmail(std::string const& value);
    bool emailIsSet() const;
    void unsetEmail();
    /// <summary>
    /// 
    /// </summary>
    std::string getPassword() const;
    void setPassword(std::string const& value);
    bool passwordIsSet() const;
    void unsetPassword();
    /// <summary>
    /// 
    /// </summary>
    std::string getPhone() const;
    void setPhone(std::string const& value);
    bool phoneIsSet() const;
    void unsetPhone();
    /// <summary>
    /// User Status
    /// </summary>
    int32_t getUserStatus() const;
    void setUserStatus(int32_t const value);
    bool userStatusIsSet() const;
    void unsetUserStatus();

    friend void to_json(nlohmann::json& j, const User& o);
    friend void from_json(const nlohmann::json& j, User& o);
protected:
    int64_t m_Id;
    bool m_IdIsSet;
    std::string m_Username;
    bool m_UsernameIsSet;
    std::string m_FirstName;
    bool m_FirstNameIsSet;
    std::string m_LastName;
    bool m_LastNameIsSet;
    std::string m_Email;
    bool m_EmailIsSet;
    std::string m_Password;
    bool m_PasswordIsSet;
    std::string m_Phone;
    bool m_PhoneIsSet;
    int32_t m_UserStatus;
    bool m_UserStatusIsSet;

    // Helper overload for validate. Used when one model stores another model and calls it's validate.
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

} // namespace org::openapitools::server::model

#endif /* User_H_ */
