// #include <stdio.h>
// int main() {
//     FILE *file;
//     char ch;
//     int characters = 0, words = 0, lines = 0;
//     int inWord = 0; 

//     char filename[100];
//     printf("Enter the file name: ");
//     scanf("%s", filename);

//     file = fopen(filename, "r");
//     if (file == NULL) {
//         printf("Could not open file %s for reading\n", filename);
//         return 1;
//     }

//     while ((ch = fgetc(file)) != EOF) {
//         characters++;

//         if (ch == '\n') {
//             lines++;
//         }

//         if (ch == ' ' || ch == '\n') {
//             if (inWord) {
//                 words++;  
//                 inWord = 0;  
//             }
//         } else {
//             if (!inWord) {
//                 inWord = 1;  
//             }
//         }
//     }

//     if (inWord) {
//         words++;
//     }

//     if (characters > 0 && ch != '\n') {
//         lines++;
//     }

//     fclose(file);

//     printf("Characters: %d\n", characters);
//     printf("Words: %d\n", words);
//     printf("Lines: %d\n", lines);

//     return 0;
// }




#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 1, lines = 1;

    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s for reading\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n') {
            words++;
            }   
        }
    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}