#include<stdio.h>
int main(){
    int m;
    printf("enter row size of first matrix :");
    scanf("%d",&m);
    int n;
    printf("enter column size of fist matrix :");
    scanf("%d",&n);
    int a[m][n];
    printf("enter element of first matrix :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //second matrix
    int p;
    printf("enter row size of second matrix :");
    scanf("%d",&p);
    int q;
    printf("enter colunm size of second matrix");
    scanf("%d",&q);
    int b[p][q];
    printf("second metrix element :\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p){
        printf("the matrix cannot be multyply");
    }
    else{
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("result matrix :\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}