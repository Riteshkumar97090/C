#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("%d is divisible by 3 and 15",n);
    }
    else{
        printf("%d is not divisible by 3 and 5",n);
    }
      return 0;
}