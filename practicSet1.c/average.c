#include<stdio.h>
int main(){
    int x;
    printf("enter first num :");
    scanf("%d",&x);
    int y;
    printf("enter second num :");
    scanf("%d",&y);
    int z;
    printf("enter third num :");
    scanf("%d",&z);
    
    int avg=(x+y+z)/3;


    printf("avg is three num : %d",avg);
    return 0;
}