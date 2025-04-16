#include<stdio.h>
int main(){
    int n;
    printf("enter month :");
    scanf("%d",&n);
    if(n<=7){
        if(n%2==0){
            if(n==2){
                printf("this 28 days");
            }
            else{
                printf("this 30 days");
            }
        }
        else{
        printf("this month is 31 days");
        }
        }
    else{
        if(8<=n){
        if(n%2==0){
                printf("this month 31 days");
            }
            else{
               printf("this month 30 days"); 
                }
        }
        }
    return 0;
}