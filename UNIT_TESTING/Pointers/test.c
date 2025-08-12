#include <stdio.h>
#include "unity.h"
#include "demo.h"

void setUp(){}
void tearDown(){}

void test_swap(){
    int a = 10, b = 20;
    swap(&a,&b);
    TEST_ASSERT_EQUAL(20,a);
    TEST_ASSERT_EQUAL(10,b);
}

void test_reverse_arr(){
    int arr[] = {1,2,3,4,5};
    reverse_arr(arr,5);
    int expected[] = {5,4,3,2,1};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected,arr,5);
}

int main()
{

    UNITY_BEGIN();
    RUN_TEST(test_swap);
    RUN_TEST(test_reverse_arr);
    return UNITY_END();
   
}