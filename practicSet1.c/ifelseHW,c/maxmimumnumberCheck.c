#include<stdio.h>
int main()
{
    int a;
    printf("enter first number :");
    scanf("%d",&a);
    int b;
    printf("enter second number :");
    scanf("%d",&b);
    if(a<b){
        printf("%d b is maximum",b);
    }
    if(a>b){
        printf("%d a is maximum",a);
    }
    if(a==b){
        printf("not max not min");
    }
      return 0;
}