#include<stdio.h>
int main(){ 
    char i='a';
    char n='z';
    char j='A';
    char m='Z';
    for(;i<=n;i++){
        printf("%c=%d ",i,i);
    }
    printf("\n");
    printf("\n");
    for(;j<=m;j++){
        printf("%c=%d ",j,j);
    }
    return 0;
}