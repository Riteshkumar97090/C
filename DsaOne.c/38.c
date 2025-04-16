//kitna pair hai jo kth element se divisible hai
#include <stdio.h>
int main() {
    int n;
    printf("Size = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements of Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int k;
    printf("Enter number = ");
    scanf("%d",&k);
    int count=0,sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(sum%k==0){
                count++;
            }
        }
    }
    printf("The count of pairs is = %d",count);

    return 0;
}