#include<stdio.h>
#include "cal.h"
#include "unity.h"
#include "cal_test.h"

int main(){
    int a,b,c,d,e,f;
    a = 20;
    b = 10;
    c = sum(a,b);
    d = diff(a,b);
    e = pdt(a,b);
    f = div(a,b);
    
    printf("Sum : %d\n",c);
    printf("Difference : %d\n",d);
    printf("Product : %d\n",e);
    printf("Division : %d\n",f);

    UNITY_BEGIN();
    RUN_TEST(test_sum);
    RUN_TEST(test_diff);
    RUN_TEST(test_pdt);
    RUN_TEST(test_div);
    return UNITY_END();
    return 0;
}