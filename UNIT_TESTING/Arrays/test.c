#include <stdio.h>
#include "unity.h"
#include "demo.h"

void setUp(){}
void tearDown(){}

void test_calculate_average(){
    int arr[] = {2,4,6,8};
    float result = cal_avg(arr,4);
    TEST_ASSERT_FLOAT_WITHIN(0.1,5.0,result);
}


int main()
{

    UNITY_BEGIN();
    RUN_TEST(test_calculate_average);
    return UNITY_END();
   
}