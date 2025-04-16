#include <stdio.h>

int main()
{  
    char a;
    printf("enter name first letter :\n");
    int b;
    printf("enter name first letter :\n");
    int c;
    printf("enter name first letter :\n");
    scanf("%c %c %c",&a,&b,&c);
    int a1;
    printf("enter marks :\n");
    int a2;
    printf("enter marks :\n");
    int a3;
    printf("enter marks :\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1>a2){
        if(a1>a3){
            printf("%c=%d is first\n",a,a1);
            if(a2>a3){
                printf("%c=%d is second\n",b,a2);
                printf("%c=%d is third\n",c,a3);
            }
            else{
                printf("%c=%d is second\n",c,a3);
                printf("%c=%d is third\n",b,a2);
            }
        }
        else{
          printf("%c=%d is first\n",c,a3);
          printf("%c=%d is second\n",a,a1);
          printf("%c=%d is thirt\n",b,a2);
        }
    }
    else{
        if(a2>a3){
            printf("%c=%d is first\n",b,a2);
            if(a1>a3){
                printf("%c=%d is second\n",a,a1);
                printf("%c=%d is thirt\n",c,a3);
            }
            else{
                printf("%c=%d is second\n",c,a3);
                printf("%c=%d is first\n",a,a1);
            }
        }
        else{
            printf("%c=%d is first\n",c,a3);
            if(a1>a2){
                printf("%c=%d is second\n",a,a1);
                printf("%c=%d is thirt\n",b,a2);
            }
            else{
                printf("%c=%d is second\n",b,a2);
                printf("%c=%d is thirt\n",a,a1);
            }
        }
    }
    return 0;
} 