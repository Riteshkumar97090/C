#include<stdio.h>
int main(){
    char c;
    printf("enter your charecter :");
    scanf("%c",&c);
    switch(c){
    case 'a':
    case 'A':
    printf("vowel");
    break;
    case 'e':
    case 'E':
    printf("vowel");
    break;
    case 'i':
    case 'I':
    printf("vowel");
    break;
    case 'o':
    case 'O':
    printf("vowel");
    break;
    case 'u':
    case 'U':
    printf("vowel");
    break;
   
   default:
   printf("consunant");
   }
    return 0;
}