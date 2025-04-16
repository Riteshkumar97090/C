#include<stdio.h>
int main(){
   char i='a';
   char n;
   printf("enter n charecter :");
   scanf(" %c",&n);
   while(i<=n){
    printf("%c ",i);
    i++;
   }
    return 0;
}