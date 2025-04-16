#include<stdio.h>
int main(){
    char c;
    printf("enter your cherecter :");
    scanf("%c",&c);
    if(c>'A'&&'Z'>c){
        printf("upper case");
    }
    else if(c>'a'&&'z'>c){
        printf("lower case");
    }
    else{
        printf("not valid in this carecter");
    }
    return 0;
}