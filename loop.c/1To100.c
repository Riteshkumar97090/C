// #include<stdio.h>
// int main(){
//     int i;
//     printf("enter first digit :");
//     scanf("%d",&i);
//     int n;
//     printf("enter last digit :");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("%d ",i);
//         i++;
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("enter last digit :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}