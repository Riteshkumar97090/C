 #include<stdio.h>
 int main(){
    int cp; 
    int sp;        
    printf("Enter your cp number :");
    scanf("%d",&cp); 
    printf("Enter your sp number :");
    scanf("%d",&sp);
    if(cp<sp){
        printf("profite %d",sp-cp);
    }
    if(cp==sp){
        printf("not profite not loss");
    }
    if(cp>sp){
        printf("loss :%d",cp-sp);
    }
    
    return 0;
    }