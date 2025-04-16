#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int a=97,b=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1)       printf("*");
            else if(i==n || j==n)  printf("#");
            else if(i==j){
                printf("%c",a);
                a++;
            }
            else if(i+j==n+1){
                printf("%d",b);
                if(i==n/2 && j==n/2+2)    b=b+2;
                else                      b++;
            }
            else   printf(" ");
        }
        printf("\n");
    }
    return 0;
}



// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for(int k=1;k<=n;k++){
//         printf("%d",k);
//     }
//     printf("\n");
//     int a=97;
//     for(int i=1;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             printf(" ");
//         }
//         if(i==n-1){
//             for(int m=1;m<=i+1;m++){
//             printf("%c",a-32);
//             a++;
//             }
//         }
//         else{
//         for(int l=1;l<=i+1;l++){
//             printf("%c",a);
//             a++;
//         }
//         }
//         printf("\n");
//     }
//         return 0;
// }





// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter :");
//     scanf("%d",&n);
//     int smallest=999;
//     int largest=-999;
//     while(n>0){
//         if(n<=smallest){
//             smallest=n;
//         }
//         if(n>=largest){
//             largest=n;
//         }
//         printf("enter a number :");
//         scanf("%d",&n);
//     }
//     printf("%d negative number stop loop :\n",n);
//     printf("%d is largest number :\n",largest);
//     printf("%d is smallest number :\n",smallest);
//     return 0;
// }