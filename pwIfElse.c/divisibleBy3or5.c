#include<stdio.h>
 int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("The divisible by 3 or 5");
    }
    else{
        printf("The number is not divisible by 3 or 5");
    }
    
    return 0;
    }