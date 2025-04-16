#include<stdio.h>
int main(){
    int a=9;
    int b=5;

    int *ptr1=&a;
    int *ptr2=&b;

    if(*ptr1>*ptr2){
        printf("ptr 1 is max");
    }
    else{
        printf("ptr2 is max");
    }

    return 0;
}