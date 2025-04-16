#include<stdio.h>
int main(){
    int a=3;
    int b=4;

    int *ptr1=&a;
    int *ptr2=&b;

    int c=*ptr1+*ptr2;
    
    printf("%d\n",c); 
    printf("sum :%d",*ptr1+*ptr2);
    return 0;
}