#include<stdio.h>
int main(){
    float principle,time,rate,si;
    printf("enter principle :");
    scanf("%f",&principle);
    printf("enter time :");
    scanf("%f",&time);
    printf("enter rate :");
    scanf("%f",&rate);
    si = (principle*time*rate)/100;
    printf("your simple interest is :%f",si);

    return 0;
}