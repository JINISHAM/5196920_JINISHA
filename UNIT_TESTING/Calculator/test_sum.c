#include "unity.h"
#include "cal.h" 

void setUp(){}
void tearDown(){}

void test_sum(void){
    TEST_ASSERT_EQUAL(5,sum(2,3));
}