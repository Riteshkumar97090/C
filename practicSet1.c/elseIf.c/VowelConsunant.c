// #include<stdio.h>
// int main(){
//     char c;
//     printf("enter charecter :");
//     scanf("%c",&c);
//     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
//         printf("this charecter is vowel");
//     }
//     else{
//         printf("this cheracter is consunant");
//     }
//    return 0;
// }

#include<stdio.h>
int main(){
    char c;
    printf("enter charecter :");
    scanf("%c",&c);
    if(c=='a'||c=='A'){
        printf("this charecter is vowel");
    }
    else if(c=='e'||c=='E'){
       printf("this charecter is vowel");   
    }
    else if(c=='i'||c=='I'){
       printf("this charecter is vowel");   
    }
    else if(c=='o'||c=='O'){
       printf("this charecter is vowel");   
    }
    else if(c=='u'||c=='U'){
       printf("this charecter is vowel");   
    }
    else{
        printf("this cheracter is consunant");
    }
   return 0;
}