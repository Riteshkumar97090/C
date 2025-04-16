#include<stdio.h>
int main(){
    int i=1;
    int n=5;
    int s;
    while(i<=n){
        s=i*i*i;
        printf("cube of %d is %d\n",i,s);
        i++;
    }
    return 0;
}