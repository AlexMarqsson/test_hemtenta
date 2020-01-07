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

TEST(ProductionCode, SeeIfNumbersAreAdded)
{
  TEST_ASSERT_EQUAL(10, SeeIfNumbersAreAdded(4,6));
  TEST_ASSERT_EQUAL(26, SeeIfNumbersAreAdded(14,12));
  TEST_ASSERT_NOT_EQUAL(150, SeeIfNumbersAreAdded(14,86));
  TEST_ASSERT_NOT_EQUAL(18, SeeIfNumbersAreAdded(7,6));
}
