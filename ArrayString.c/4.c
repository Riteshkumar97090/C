#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int zeror=0;
    for(int i=0;i<=0;i++){
        for(int j=0;j<n;j++){
            zeror+=arr[i][j];
        }
    }
    printf("zero row=%d\n",zeror);

    int firstr=0;
    for(int i=1;i<=1;i++){
        for(int j=0;j<n;j++){
            firstr+=arr[i][j];
        }
    }
    printf("first row=%d\n",firstr);

     int secondr=0;
    for(int i=2;i<=2;i++){
        for(int j=0;j<n;j++){
            secondr+=arr[i][j];
        }
    }
    printf("secondr row=%d\n",secondr);
    printf("\n");

    int zeroc=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=0;j++){
            zeroc+=arr[i][j];
        }
    }
    printf("zeroc :%d\n",zeroc);

    int firstc=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=1;j++){
            firstc+=arr[i][j];
        }
    }
    printf("firstc :%d\n",firstc);

     int secondc=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<=2;j++){
            secondc+=arr[i][j];
        }
    }
    printf("secondc :%d\n",secondc);

    return 0;
}