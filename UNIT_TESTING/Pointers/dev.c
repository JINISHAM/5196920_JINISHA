#include "demo.h"

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_arr(int *arr,int size){
    int *start = arr;
    int *end = arr + (size - 1);

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

