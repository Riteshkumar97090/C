#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    n%4==0;
        printf("%d is leap year",n);
    
    n%4!=0;
        printf("%d is not leap year",n);
    
      return 0;
}