#include<stdio.h>
int main(){
    int a=5;
    int b=6;

    int *ptr1=&a;
    int *ptr2=&b;

    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);
    return 0;
}