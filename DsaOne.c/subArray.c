#include<stdio.h>
int main(){
    int arr[5]={1,3,2,6,4};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                printf(" %d ",arr[k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}