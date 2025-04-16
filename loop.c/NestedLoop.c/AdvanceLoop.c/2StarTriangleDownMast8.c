// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter row :");
//     scanf("%d",&n);
//     int nsp=1;
//     int nst=n;
//     for(int m=1;m<=n*2-1;m++){
//        printf("*");
//     }
//     printf("\n");
//     for(int i=1;i<n;i++){
//         for(int j=i;j<n;j++){
//             printf("*");
//         }
//         for(int k=1;k<=nsp;k++){
//             printf(" ");
//         }
//         for(int l=i;l<n;l++){
//             printf("*");
//         }
//         nsp+=2;
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int pre=n/2;
    int post=n/2+2;
    for(int i=1;i<=n/2+1;i++){
        for(int j=1;j<=n;j++){
            if(i==1) printf("*");
            else if(j>pre && j<post) printf(" ");
            else printf("*");
        }
        pre--;
        post++;
        printf("\n");
    }
    return 0;
}