#include<stdio.h>
int main()
{
    int n,c;
    printf("enter a number :");
    scanf("%d",&n);
    c=n%4==0 && n%100!=0||n%400==0?printf("leap year"):printf("not leap year");
    return 0;
}