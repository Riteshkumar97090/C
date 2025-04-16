#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter 1st side :");
    scanf("%d",&a);
    printf("Enter 2nd side :");
    scanf("%d",&b);
    printf("Enter 3rd side :");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("valide triangle");
    }
    else{
        printf("invalide triangle");
    }
    return 0;
    }