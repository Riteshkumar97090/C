#include<stdio.h>
int main(){
    int a ,b;
    printf("enter a number :",a);
    scanf("%d",&a);
    printf("enter a number :",b);
    scanf("%d",&b);
    if (a < b){
    printf("%d is min and %d is max",a,b);
    }
    if (a>b){
        printf("%d is max and %d is min",a,b);
    }
    return 0;
}