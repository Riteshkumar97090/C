#include<stdio.h>
int main(){
    int n;
    printf("enter your persentage :");
    scanf("%d",&n);
    if(n>=90){
        printf("a grade");
    }
    else if(n>=80){
        printf("b grade");
    }
    else if(n>=70){
        printf("c grade");
    }
    else if(n>=60){
        printf("d grade");
    }
    else if(n>=40){
        printf("e grade");
    }
    
    else{
        printf("f grade");
    }
    return 0;
}