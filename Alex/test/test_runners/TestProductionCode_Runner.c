#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(ProductionCode){
	RUN_TEST_CASE(ProductionCode, SeeIfMultiplyNumbersFunctionIsCorrect);
	RUN_TEST_CASE(ProductionCode, SeeIfAreaCalculationThreeDimensionalIsCorrect);
	RUN_TEST_CASE(ProductionCode, SeeIfCircumferenceCalculationIsCorrect);
}
