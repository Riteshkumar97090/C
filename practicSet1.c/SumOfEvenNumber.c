 #include<stdio.h>
 int main(){
    int sum=0;
    int i=2;
    int n;    //dabba  bansa
    printf("Enter a number : ");
    scanf("%d",&n);   //dabba mai value dalega
    if(n%i==0){
        printf("even number");
        while(i<=n){
            sum=sum+i;
            i=i+1;
            
        }
    }
    else{
        printf("odd number");
    }
    
    return 0;
 }