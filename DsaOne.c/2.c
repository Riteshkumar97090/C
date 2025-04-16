// #include<stdio.h>
// void arr(){
//     int n;
//     printf("enter array size :");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter array element :\n");
//     for(int i=0;i<n;i++){
//         scanf("%d ",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     arr();
//     return 0;
// }


#include<stdio.h>
void arr(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    arr();
    return 0;
}