#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number :");
    scanf("%d",&a);
    printf("enter b number :");
    scanf("%d",&b);
    c=a>b?printf("a is max"):printf("b is max");
    return 0;
}