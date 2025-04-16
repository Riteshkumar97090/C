#include<stdio.h>
#include<string.h>
int main(){
    char filename[50];
    printf("enter file name :");
    scanf("%s",filename);

    FILE *ptr=fopen(filename,"r");

    printf("Enter The Text To Write In File: ");
    char text[50];
    getchar();
    fgets(text,100,ptr);

    fclose(ptr);
    printf("%s",text);
    return 0;
}