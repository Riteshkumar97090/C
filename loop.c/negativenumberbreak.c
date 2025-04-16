#include<stdio.h>
int main(){
    int n;
    while(0<=n){
    printf("enter a number :");
    scanf("%d",&n);
    if(0>n){
        break;
    }
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int a=1;
//     int n;         
//     printf("enter a number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             a++;
//         }
//         printf("\n");
//         a++;
//     }
//     return 0;
// }