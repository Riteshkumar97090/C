#include<stdio.h>
int main(){
    int i;
    printf("enter first digit of mult :");
    scanf("%d",&i);
    int n;
    printf("enter last digit of mult :");
    scanf("%d",&n);
    int fact=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("%d ",fact);
    return 0;
}


// #include<stdio.h>
// int main (){
//   int n;
//   printf("enter a table :");
//   scanf("%d",&n);
//   int fact=1;
//   for(int i=1;i<=n;i++){
//   fact=fact*i;
//   printf("factorial is %d :%d\n",i,fact);
//   }
//   return 0;
