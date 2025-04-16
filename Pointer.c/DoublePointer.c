#include<stdio.h>
int main(){
    int a=5;
    int *p=&a;
    int **pp=&p;

    //printf("&p = %p   pp=%p",&p,pp);

    // printf("&a = %p   p = %p   *pp=%p",&a,p,*pp);

    printf("a = %d   *p = %d   *pp=%d",a,*p,**pp);

    return 0;
}