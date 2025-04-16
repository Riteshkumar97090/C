#include<stdio.h>
int main(){
    char str[20];
    printf("enter string :\n");
    fgets(str,20,stdin);
    
    printf("ripited charec :");
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                putchar(str[i]);
            }
        }
    }
    return 0;
}