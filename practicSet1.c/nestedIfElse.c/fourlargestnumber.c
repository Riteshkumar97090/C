#include<stdio.h>
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    int b;
    printf("enter b number :");
    scanf("%d",&b);
    int c;
    printf("enter c number :");
    scanf("%d",&c);
    int d;
    printf("enter d number :");
    scanf("%d",&d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("a is max");
            }
        else{
            printf("d is max");
            }
        }
        else{
            if(c>d){
                printf("c is max");
            }
            else{
                printf("d is max");
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                printf("b is max");
            }
        else{
            printf("d is max");
              }
        }
        else{
        if(c>d){
            printf("c is max");
        }
        else{
            printf("d is max");
        }
    }
    }
    return 0;
}