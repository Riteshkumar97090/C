#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    int evencount=0;
    int arreven[evencount];
    int oddcount=0;
    int arrodd[oddcount];
    printf("enter array element:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){ 
            arreven[evencount]=arr[i];
            evencount++;
        }
        else{
            arrodd[oddcount]=arr[i];
            oddcount++;
        }
    }
    printf("even element=");
    for(int i=0;i<evencount;i++){
        printf("%d,",arreven[i]);
    }
    printf("\nodd  element=");
    for(int i=0;i<oddcount;i++){
        printf("%d,",arrodd[i]);
    }
    return 0;
}