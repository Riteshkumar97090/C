#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(0<n){
        printf("%d is positive number",n);
    }
    if(0>n){
        printf("%d is nigative number",n);
    }
    if(n==0){
        printf("%d is zero",n);
    }
      return 0;
}