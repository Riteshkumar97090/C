#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    //int a=1;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}



// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter row :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     printf("123\n");
//     printf("456\n");
//     printf("789\n");
//     return 0;
// }