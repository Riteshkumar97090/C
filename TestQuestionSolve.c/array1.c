// #include<stdio.h>
// int main(){
//     int n;
//     printf("enterr array size :");
//     scanf("%d",&n);
//     printf("enter array element :\n");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int k=2;
//     printf("output :\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]<arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("%dnd min is :%d\n",k,arr[k-1]);
//     printf("index is :%d\n",k-1);
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1, max2;
    max1=max2=0;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
        
    }
    printf("1max no is :%d\n",max1);
    printf("2max no is :%d\n",max2);
    return 0;
} 