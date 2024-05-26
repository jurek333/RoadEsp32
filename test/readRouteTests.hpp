#pragma once
#include "fakeSd.hpp"
#include "parser/routeReader.hpp"
#include "helpers.hpp"

std::string RouteWithPointsJson(R"##({
	"header":{
		"name":"Pomnik"
	},
	"road":{
		"ver":1,
		"directions":[
			{
				"type": "crossing",
				"dir":"left",
				"points":[{
						"type":"shrine",
						"position": 3
					},{
						"type":"cross",
						"position": 1
					}]
			}]
	}
})##");

std::string RouteJson(R"##({
	"header":{
		"name":"Pomnik"
	},
	"road":{
		"ver":1,
		"directions":[
			{
				"type": "crossing",
				"dir":"left"
			},
			{
				"type": "round",
				"exit": 3
			},
			{
				"type":"bridge",
				"name":"Kanał Kampinowski"
			},{
				"distance":0.6,
				"type":"end",
				"gps":{
					"lat":52.383881,
					"lon":20.295997
				},
				"dirSign":"Famułki Brochowskie"
			}
]
	}
})##");

using namespace RouteEsp32::parser;

void ReadRoute_StartReading()
{
    MockedSdCard sd(RouteJson);
    RouteReader reader{&sd, 0};
    auto res = reader.StartReading();

    TEST_ASSERT_TRUE(res);
}

void ReadRoute_ReadDirection()
{
    MockedSdCard sd(RouteJson);
    RouteReader reader{&sd, 0};
    auto _ = reader.StartReading();
    
	Direction dir;
    auto success = reader.ReadNextDirection(dir);

    TEST_ASSERT_TRUE_MESSAGE(success, "Cannot read the whole direction");
	TEST_ASSERT_TRUE_MESSAGE(dir.Type == DirectionType::crossing, "type of direction should be crossing");
	TEST_ASSERT_TRUE_MESSAGE(dir.Dir == Directions::left, "direction should be left");
}

void ReadRoute_Read2ndDirection()
{
    MockedSdCard sd(RouteJson);
    RouteReader reader{&sd, 0};
    auto _ = reader.StartReading();
    
	Direction dir;
    reader.ReadNextDirection(dir);
	auto success = reader.ReadNextDirection(dir);

    TEST_ASSERT_TRUE_MESSAGE(success, "Cannot read the whole 2nd direction");
	TEST_ASSERT_TRUE_MESSAGE(dir.Type == DirectionType::round, "type of direction should be round");
	TEST_ASSERT_TRUE_MESSAGE(dir.Exit == 3, "should be 3rd exit");
}

void ReadRoute_Read3rdDirection()
{
    MockedSdCard sd(RouteJson);
    RouteReader reader{&sd, 0};
    auto _ = reader.StartReading();
    
	Direction dir;
    reader.ReadNextDirection(dir);
	reader.ReadNextDirection(dir);
	auto success = reader.ReadNextDirection(dir);

    TEST_ASSERT_TRUE_MESSAGE(success, "Cannot read the whole 2nd direction");
	TEST_ASSERT_TRUE_MESSAGE(dir.Type == DirectionType::bridge, "type of direction should be bridge");
	TEST_ASSERT_TRUE_MESSAGE(dir.Name == "Kanał Kampinowski", "should be Name \"Kanał Kampinowski\"");
}

void ReadRoute_Read4thDirection()
{
    MockedSdCard sd(RouteJson);
    RouteReader reader{&sd, 0};
    auto _ = reader.StartReading();
    
	Direction dir;
    reader.ReadNextDirection(dir);
	reader.ReadNextDirection(dir);
	reader.ReadNextDirection(dir);
	auto success = reader.ReadNextDirection(dir);

    TEST_ASSERT_TRUE_MESSAGE(success, "Cannot read the whole 2nd direction");
	TEST_ASSERT_TRUE_MESSAGE(dir.Type == DirectionType::end, "type of direction should be end");
	TEST_ASSERT_TRUE_MESSAGE(dir.DirSign == "Famułki Brochowskie", "should be Name \"Famułki Brochowskie\"");
	TEST_ASSERT_TRUE_MESSAGE(AreEqual(dir.Distance, 0.6f), "should be Distance 0.6");
	TEST_ASSERT_TRUE_MESSAGE(AreEqual(dir.Gps.Lat, 52.383881), "Gps lat is incorrect");
	TEST_ASSERT_TRUE_MESSAGE(AreEqual(dir.Gps.Lon, 20.295997), "Gps lon is incorrect");
}

void ReadRoute_ReadDirectionWithPoints()
{
    MockedSdCard sd(RouteWithPointsJson);
    RouteReader reader{&sd, 0};
    auto _ = reader.StartReading();
    
	Direction dir;
    auto success = reader.ReadNextDirection(dir);

    TEST_ASSERT_TRUE_MESSAGE(success, "Cannot read the whole direction");
	TEST_ASSERT_TRUE_MESSAGE(dir.Type == DirectionType::crossing, "type of direction should be crossing");
	TEST_ASSERT_TRUE_MESSAGE(dir.Dir == Directions::left, "direction should be left");
	TEST_ASSERT_TRUE_MESSAGE(dir.Points.size() == 2, "there should be 2 points");
	TEST_ASSERT_TRUE_MESSAGE(dir.Points[0].Position == 3, "there should be 2 points");
	TEST_ASSERT_TRUE_MESSAGE(dir.Points[0].Type == PointType::shrine, "there should be a shrine");
	TEST_ASSERT_TRUE_MESSAGE(dir.Points[1].Position == 1, "there should be 2 points");
	TEST_ASSERT_TRUE_MESSAGE(dir.Points[1].Type == PointType::cross, "there should be a cross");
}

void RouteReaderTests()
{
    RUN_TEST(ReadRoute_StartReading);
    RUN_TEST(ReadRoute_ReadDirection);
	RUN_TEST(ReadRoute_Read2ndDirection);
	RUN_TEST(ReadRoute_Read3rdDirection);
	RUN_TEST(ReadRoute_Read4thDirection);
	RUN_TEST(ReadRoute_ReadDirectionWithPoints);
}
