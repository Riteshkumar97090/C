#include<stdio.h>
int main(){
    char str[20];
    printf("enter String :");
    fgets(str,20,stdin);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='t'){
            if(str[i+1]=='h'){
                if(str[i+2]=='e'){
                    if(str[i+3]==' ' ||str[i+3]=='\n'){
                        count++;
                    }
                }
            }
        } 
    }
    printf("the count=%d",count);
    return 0;
}