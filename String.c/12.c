#include<stdio.h>
int main(){
    char str[30];
    printf("enter string :");
    fgets(str,30,stdin);
    
    int count=0;
    for(int i=0;str[i]!='\n';i++){
        count++;
    }
    int num=0;
    int j=count-1;
    int i=0;
    while (i<j){
        if(str[i]!=str[j]){
            num=1;
            break;
        }
        i++;
        j--;
    }
    if(num==0)  printf("polindrome");
    else        printf("not polindrome");
    return 0;
}