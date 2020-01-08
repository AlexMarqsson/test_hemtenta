#include "ProductionCode.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ProductionCode);

//sometimes you may want to get at local data in a module.
//for example: If you plan to pass by reference, this could be useful
//however, it should often be avoided

TEST_SETUP(ProductionCode)
{
	//This is run before EACH TEST
}

TEST_TEAR_DOWN(ProductionCode)
{
}

TEST(ProductionCode, SeeIfMultiplyNumbersFunctionIsCorrect)
{
	TEST_ASSERT_EQUAL(25, multiplyNumbers(5,5));
	TEST_ASSERT_EQUAL(5000, multiplyNumbers(50,100));
	TEST_ASSERT_EQUAL(600, multiplyNumbers(15,40));
	TEST_ASSERT_EQUAL(6400, multiplyNumbers(16,400));
	TEST_ASSERT_NOT_EQUAL(220, multiplyNumbers(46,714));
	TEST_ASSERT_NOT_EQUAL(920, multiplyNumbers(250,800));
	TEST_ASSERT_NOT_EQUAL(2300, multiplyNumbers(108,460));
	TEST_ASSERT_NOT_EQUAL(8046, multiplyNumbers(156,480));
}

TEST(ProductionCode, SeeIfAreaCalculationThreeDimensionalIsCorrect)
{
	TEST_ASSERT_EQUAL(150, areaCalculationThreeDimensional(5,5,5));
	TEST_ASSERT_EQUAL(54, areaCalculationThreeDimensional(3,3,3));
	TEST_ASSERT_EQUAL(1049600, areaCalculationThreeDimensional(800,240,320));
	TEST_ASSERT_NOT_EQUAL(1049601, areaCalculationThreeDimensional(800,240,320));
	TEST_ASSERT_NOT_EQUAL(28, areaCalculationThreeDimensional(768,646,24));
}

TEST(ProductionCode, SeeIfCircumferenceCalculationIsCorrect)
{
	TEST_ASSERT_EQUAL(28, circumferenceCalculation(6,8));
	TEST_ASSERT_EQUAL(2568, circumferenceCalculation(560,724));
	TEST_ASSERT_NOT_EQUAL(28, circumferenceCalculation(762,4));
	TEST_ASSERT_NOT_EQUAL(28, circumferenceCalculation(882,860));
}
