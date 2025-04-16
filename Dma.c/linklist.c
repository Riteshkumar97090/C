#include<stdio.h>
struct node{
    int a;
    struct node *n;
};
void print(struct node n1){
    struct node *first;
    first=&n1;
    while(first!=NULL){
        printf("%d->",first->a);
        first=first->n;
    }
}

int main(){
    struct node n1,n2,n3;
    n1.a=1;
    n1.n=NULL;
    n2.a=2;
    n1.n=&n2;
    n2.n=NULL;
    n3.a=3;
    n2.n=&n3;
    n3.n=NULL;

    print(n1);

    return 0;
}





// #include<stdio.h>
// struct node{
//     int a;
//     struct node *n;
// }n1,n2,n3;
// int main(){
//     n1.a=1;
//     n1.n=NULL;
//     n2.a=2;
//     n1.n=&n2;
//     n2.n=NULL;
//     n3.a=3;
//     n2.n=&n3;
//     n3.n=NULL;

//     struct node *first;
//     first=&n1;
//     while(first!=NULL){
//         printf("%d->",first->a);
//         first=first->n;
//     }
//     return 0;
// }






// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("enter array size :");
//     scanf("%d",&n);
    
//     int *ptr=(int*)malloc(n*sizeof(int)); 
//     printf("enter array element :\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&ptr[i]);
//     }

//     int k;
//     printf("enter new array size :");
//     scanf("%d",&k);
//     ptr=realloc(ptr ,k);
//     printf("enter array element :\n");
//     for(int i=n;i<k;i++){
//         scanf("%d",&ptr[i]);
//     }

//     for(int i=0;i<k;i++){
//         printf("%d ",ptr[i]);
//     }

//     return 0;
// }