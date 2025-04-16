#include<stdio.h>
void prime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count=1;
            break;
        }
    }
    if(count==1)  printf("not prime");
    else          printf("prime");
}

int main(){
    int n=6;
    prime(n);

    return 0;
}