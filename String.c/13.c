#include<stdio.h>
int main(){
    char str[20];
    printf("enter string :");
    fgets(str,20,stdin);

    for(int i=0;str[i]!='\0';i++){

        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }  
    }
    puts(str);
    return 0;
}