#include<stdio.h>
int main(){
    int i=1;
    int c;
    int n;
    printf("enter table :");
    scanf("%d",&n); 
    while(i<=10){
        c=n*i;
        printf("%d*%d=%d\n",n,i,c);
        i++;
    }
    return 0;
}