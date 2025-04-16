#include<stdio.h>
int main(){
    int n;
    printf("enter digit :");
    scanf("%d",&n);
    int m=n;
    while(n>=10){
        n=n/10;
    }
    printf("first digit is :%d\n",n);
    printf("last digit number is :%d\n",m%10);
    return 0;
}


// #include<stdio.h>
// int main(){
//     while(1){
//     int n;
//     printf("enter digit :");
//     scanf("%d",&n);
//     printf("last digit number is :%d\n",n%10);
//     while(n>=10){
//         n=n/10;
//     }
//     printf("first digit is :%d\n",n);
//     }
//     return 0;
// }