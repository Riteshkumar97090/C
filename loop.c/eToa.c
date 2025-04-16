#include<stdio.h>
int main(){
    char i;
    printf("enter charecter :");
    scanf("%c ",&i);
    char n;
    printf("enter charecter :");
    scanf("%c ",&n);
    while(n<=i){
        printf(" %c ",i);
        i--;
    }
    return 0;
}