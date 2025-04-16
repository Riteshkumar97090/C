#include<stdio.h>
int main(){
    int l;
    printf("enter your lenth : ");
    scanf("%d",&l);
    int b;
    printf("enter your breath : ");
    scanf("%d",&b);
    int perimeter = 2*(l + b);
    printf("your perimeter of rectangle is : %d",perimeter);
    return 0;
}