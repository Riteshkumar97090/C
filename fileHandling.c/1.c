#include<stdio.h>
#include<string.h>
int main(){
    char filename[50];
    printf("enter file name :");
    scanf("%s",filename);

    FILE *ptr=fopen(filename,"w");

    char text[50];
    printf("Enter The Text To Write In File: ");
    getchar();
    fgets(text,50,stdin);


    fputs(text,ptr);
    
    fclose(ptr);
    
    return 0;
}