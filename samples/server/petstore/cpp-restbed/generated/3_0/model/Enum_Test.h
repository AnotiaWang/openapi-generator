/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Enum_Test.h
 *
 * 
 */

#ifndef Enum_Test_H_
#define Enum_Test_H_



#include "OuterEnumIntegerDefaultValue.h"
#include "OuterEnumInteger.h"
#include "OuterEnum.h"
#include "OuterEnumDefaultValue.h"
#include <string>
#include <memory>
#include <vector>
#include <array>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Enum_Test 
{
public:
    Enum_Test() = default;
    explicit Enum_Test(boost::property_tree::ptree const& pt);
    virtual ~Enum_Test() = default;

    Enum_Test(const Enum_Test& other) = default; // copy constructor
    Enum_Test(Enum_Test&& other) noexcept = default; // move constructor

    Enum_Test& operator=(const Enum_Test& other) = default; // copy assignment
    Enum_Test& operator=(Enum_Test&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// Enum_Test members

    /// <summary>
    /// 
    /// </summary>
    std::string getEnumString() const;
    void setEnumString(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getEnumStringRequired() const;
    void setEnumStringRequired(std::string value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getEnumInteger() const;
    void setEnumInteger(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    double getEnumNumber() const;
    void setEnumNumber(double value);

    /// <summary>
    /// 
    /// </summary>
    OuterEnum getOuterEnum() const;
    void setOuterEnum(OuterEnum value);

    /// <summary>
    /// 
    /// </summary>
    OuterEnumInteger getOuterEnumInteger() const;
    void setOuterEnumInteger(OuterEnumInteger value);

    /// <summary>
    /// 
    /// </summary>
    OuterEnumDefaultValue getOuterEnumDefaultValue() const;
    void setOuterEnumDefaultValue(OuterEnumDefaultValue value);

    /// <summary>
    /// 
    /// </summary>
    OuterEnumIntegerDefaultValue getOuterEnumIntegerDefaultValue() const;
    void setOuterEnumIntegerDefaultValue(OuterEnumIntegerDefaultValue value);

protected:
    std::string m_Enum_string = "";
    std::string m_Enum_string_required = "";
    int32_t m_Enum_integer = 0;
    double m_Enum_number = 0.0;
    OuterEnum m_OuterEnum = OuterEnum{};
    OuterEnumInteger m_OuterEnumInteger = OuterEnumInteger{};
    OuterEnumDefaultValue m_OuterEnumDefaultValue = OuterEnumDefaultValue{};
    OuterEnumIntegerDefaultValue m_OuterEnumIntegerDefaultValue = OuterEnumIntegerDefaultValue{};
};

std::vector<Enum_Test> createEnum_TestVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<Enum_Test>(const Enum_Test& val) {
    return val.toPropertyTree();
}

template<>
inline Enum_Test fromPt<Enum_Test>(const boost::property_tree::ptree& pt) {
    Enum_Test ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* Enum_Test_H_ */
