#include <stdio.h>
#include "unity.h"
#include "demo.h"

void setUp(){}
void tearDown(){}

void testLeapYear(){
    TEST_ASSERT_EQUAL(1,IsLeapYear(1600));
    TEST_ASSERT_EQUAL(0,IsLeapYear(1999));
    TEST_ASSERT_EQUAL(-1,IsLeapYear(-1900));
}


int main()
{

    UNITY_BEGIN();
    RUN_TEST(testLeapYear);
    return UNITY_END();
   
}