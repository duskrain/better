#include <stdio.h>
void swap(int * array,int n);

void swap(int * array,int n){
    int temp;
    if(n>0)
    {
        temp = array[0];
    array[0]=array[n-1];
    array[n-1]=temp;
    } else printf("error");
}