#include<stdio.h>
int main(){
    char str[20]="cager";
    char*ptr;
    ptr=str;
    ptr=&str[0];

    *ptr=str[0];
    *(ptr+1)=str[1];
    *(ptr+2)=str[2];
    *(ptr+3)=str[3];
    *(ptr+4)=str[4];
    
    return 0;
}