#include<stdio.h>
#include "cal.h"


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
    return 0;
}