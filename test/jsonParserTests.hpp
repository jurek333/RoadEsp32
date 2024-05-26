#pragma once

#include "parser/jsonParser.hpp"
#include "fakeSd.hpp"

using namespace RouteEsp32::parser;

void ReadJson_ShouldFind1stLvlObject()
{
    FakeSdCard sd{};
    JsonParser parser{&sd, 0};

    auto res = parser.StartReadingObject(std::string("/headers"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithNumbers()
{
    FakeSdCard sd{};
    JsonParser parser{&sd, 0};

    sd.ChooseJsonNo(1);

    auto res = parser.StartReadingObject(std::string("/p3"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithArrayWithNumbers()
{
    FakeSdCard sd{};
    JsonParser parser{&sd, 0};

    sd.ChooseJsonNo(2);

    auto res = parser.StartReadingObject(std::string("/p2"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithArrayWithStrings()
{
    FakeSdCard sd{};
    JsonParser parser{&sd, 0};

    sd.ChooseJsonNo(4);

    auto res = parser.StartReadingObject(std::string("/p2"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithHierarchicalObjects()
{
    FakeSdCard sd{};
    JsonParser parser{&sd, 0};

    sd.ChooseJsonNo(5);

    auto res = parser.StartReadingObject(std::string("/p1/p2/p3"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithArrayIndex()
{
    FakeSdCard sd{};
    JsonParser parser{&sd, 0};

    sd.ChooseJsonNo(6);

    auto res = parser.StartReadingObject(std::string("/p1/p2[1]/p3/pr"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ReadPropertyName()
{
    MockedSdCard sd("{ \"p\":\"deef\", \"header\":{ \"propName\" : \"text\" }}");
    JsonParser parser{&sd, 0};
    auto res = parser.StartReadingObject(std::string("/header"));
    auto propName = parser.ReadPropertyName();

    TEST_ASSERT_TRUE(propName == std::string("propName"));
}

void ReadJson_ReadPropertyValue()
{
    MockedSdCard sd("{ \"p\":\"deef\", \"header\":{ \"propName\" : \"text\" }}");
    JsonParser parser{&sd, 0};
    auto res = parser.StartReadingObject(std::string("/header"));
    auto propName = parser.ReadPropertyName();
    auto val = parser.ReadStringValue();

    TEST_ASSERT_TRUE(val == std::string("text"));
}

void ReadJson_BetweenPropertiesInObject() {
    MockedSdCard sd(R"#({ 
        "p1":"beef", 
        "obj":{ 
            "pr1" : "text" ,
            "pr2" : "text"
        },
        "p2":"test2"
        })#");
    JsonParser parser{&sd, 0};
    auto res = parser.StartReadingObject(std::string("/obj"));
    parser.ReadPropertyName();
    parser.ReadStringValue();
    parser.JumpOverCurrentState();
    TEST_ASSERT_TRUE_MESSAGE(
        parser.CurrentElement() == JsonParserStates::Object,
        "after string read and skipping the whole Property, we should be in Object");
}

void ReadJson_Read_ObjectInArray()
{
    MockedSdCard sd(R"#({ 
        "p1":"beef", 
        "array":[{ 
            "propName" : "text" 
        }],
        "p2":"test2"
        })#");
    JsonParser parser{&sd, 0};
    auto res = parser.StartReadingObject(std::string("/array"));
    TEST_ASSERT_TRUE_MESSAGE(
        parser.CurrentElement() == JsonParserStates::PropertyValue,
        "Start reading on property value");

    auto val = parser.ReadPropertyName();
    TEST_ASSERT_TRUE_MESSAGE(
        val == "propName", "first property should by propName");
    TEST_ASSERT_TRUE_MESSAGE(
        parser.CurrentElement() == JsonParserStates::Property,
        "after property name read we should by on property");
    
    val = parser.ReadStringValue();
    TEST_ASSERT_TRUE_MESSAGE(
        val == "text", "value should be text ");
    TEST_ASSERT_TRUE_MESSAGE(
        parser.CurrentElement() == JsonParserStates::PropertyValue,
        "after string read we should by on property value");

    parser.JumpOverCurrentState();
    TEST_ASSERT_TRUE_MESSAGE(
        parser.CurrentElement() == JsonParserStates::Array,
        "going to the end of PV we should by on array");

    parser.Probe();
    TEST_ASSERT_TRUE_MESSAGE(
        parser.CurrentElement() == JsonParserStates::PropertyValue,
        "after one char read we should by on property value");
    
    parser.Probe();
    TEST_ASSERT_TRUE_MESSAGE(
        parser.CurrentElement() == JsonParserStates::Object,
        "after one char read we should by on object");
}

void JsonParserTests()
{
    RUN_TEST(ReadJson_ShouldDealWithNumbers);
    RUN_TEST(ReadJson_ShouldDealWithArrayWithNumbers);
    RUN_TEST(ReadJson_ShouldDealWithArrayWithStrings);
    RUN_TEST(ReadJson_ShouldFind1stLvlObject);
    RUN_TEST(ReadJson_ShouldDealWithHierarchicalObjects);
    RUN_TEST(ReadJson_ReadPropertyName);
    RUN_TEST(ReadJson_ReadPropertyValue);
    RUN_TEST(ReadJson_Read_ObjectInArray);
    RUN_TEST(ReadJson_BetweenPropertiesInObject);
}