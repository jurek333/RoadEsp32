#pragma once

#include "parser/routeParser.hpp"
#include "fakeSd.hpp"

using namespace RouteEsp32::parser;

void ReadJson_ShouldFind1stLvlObject()
{
    FakeSdCard sd{};
    RouteJsonParser parser{&sd, 0};

    auto res = parser.StartReadingObject(std::string("/headers"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithNumbers()
{
    FakeSdCard sd{};
    RouteJsonParser parser{&sd, 0};

    sd.ChooseJsonNo(1);

    auto res = parser.StartReadingObject(std::string("/p3"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithArrayWithNumbers()
{
    FakeSdCard sd{};
    RouteJsonParser parser{&sd, 0};

    sd.ChooseJsonNo(2);

    auto res = parser.StartReadingObject(std::string("/p2"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithArrayWithStrings()
{
    FakeSdCard sd{};
    RouteJsonParser parser{&sd, 0};

    sd.ChooseJsonNo(4);

    auto res = parser.StartReadingObject(std::string("/p2"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithHierarchicalObjects()
{
    FakeSdCard sd{};
    RouteJsonParser parser{&sd, 0};

    sd.ChooseJsonNo(5);

    auto res = parser.StartReadingObject(std::string("/p1/p2/p3"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ShouldDealWithArrayIndex()
{
    FakeSdCard sd{};
    RouteJsonParser parser{&sd, 0};

    sd.ChooseJsonNo(6);

    auto res = parser.StartReadingObject(std::string("/p1/p2[1]/p3/pr"));
    TEST_ASSERT_TRUE(res);
}

void ReadJson_ReadPropertyName()
{
    MockedSdCard sd("{ \"p\":\"deef\", \"header\":{ \"propName\" : \"text\" }}");
    RouteJsonParser parser{&sd, 0};
    auto res = parser.StartReadingObject(std::string("/header"));
    auto propName = parser.ReadPropertyName();

    TEST_ASSERT_TRUE(propName == std::string("propName"));
}

void ReadJson_ReadPropertyValue()
{
    MockedSdCard sd("{ \"p\":\"deef\", \"header\":{ \"propName\" : \"text\" }}");
    RouteJsonParser parser{&sd, 0};
    auto res = parser.StartReadingObject(std::string("/header"));
    auto propName = parser.ReadPropertyName();
    auto val = parser.ReadStringValue();

    TEST_ASSERT_TRUE(val == std::string("text"));
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
}