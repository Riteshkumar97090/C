#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number :");
    scanf("%d",&a);
    printf("enter b number :");
    scanf("%d",&b);
    printf("enter c number :");
    scanf("%d",&c);
    a>b && a>c? printf("a is max") : b>c ? printf("b is max") : printf("c is max");

    return 0;
}