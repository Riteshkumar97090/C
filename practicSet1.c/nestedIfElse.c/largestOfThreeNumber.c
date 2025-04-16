#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number :");
    scanf("%d",&a);
    printf("enter b number :");
    scanf("%d",&b);
    printf("enter c number :");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is greatest");
        }
        else{
            printf("c is largest");
        }
            }
    else{
        if(b>c){
            printf("b is largest");
        }
        else{
            printf("c is largest");
        }
    }
    return 0;
}