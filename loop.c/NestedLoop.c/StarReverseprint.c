#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    for(int i=1;i<=n;n--){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//second type

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter row :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;n--){
//         for(int j=1;j<=n+1-i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//third type

