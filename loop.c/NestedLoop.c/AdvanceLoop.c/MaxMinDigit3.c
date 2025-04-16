#include<stdio.h>
int main(){
    int n,rem;
    printf("enter digit :");
    scanf("%d",&n);
    int max=-999;
    int min=999;
    while(n!=0){
        rem=n%10;
        if(rem>max){
            max=rem;
        }
        if(min>rem){
            min=rem;
        }
        n=n/10;
    }
    printf("Maximum is %d\n",max);
    printf("Minimum is %d\n",min);
    return 0;
}