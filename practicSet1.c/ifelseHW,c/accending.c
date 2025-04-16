#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number :");
    scanf("%d",&a);
    printf("enter b number :");
    scanf("%d",&b);
    printf("enter c number :");
    scanf("%d",&c);
    if(a>b && a>c ){
        printf("%d %d %d is max",a,b,c);
    }
    if(b>a && b>c){
        printf("%d %d %d is max",b,a,c);
    }
    if(c>b&&c>a){
        printf("%d %d %d is max",c,b,a);
    }
    return 0;
}