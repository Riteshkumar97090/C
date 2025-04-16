// #include<stdio.h>
// #include<string.h>
// int main(){
//     FILE *ptr=fopen("append.txt","a");

//     char text;
//     printf("enter append word :");
//     scanf("%s",text);

//     fprintf(ptr,text);

//     fclose(ptr);

//     return 0;
// }



#include <stdio.h>
int main() {
    char filename[50];
    printf("Enter the file name to append: ");
    scanf("%s",filename);
   
    char text[50];
    printf("Enter the text to append: ");
    scanf("%s",text);

    FILE *file = fopen(filename, "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs(text, file);
    fputs("\n", file); 

    fclose(file);

    printf("Data appended successfully.\n");

    return 0;
}
