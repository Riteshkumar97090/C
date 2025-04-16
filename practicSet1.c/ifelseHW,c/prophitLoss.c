 #include<stdio.h>
 int main(){
    int cp;         //kharidne vala price dale 
    int sp;        //bechne vala price dale
    printf("Enter your cp number :");
    scanf("%d",&cp); 
    printf("Enter your sp number :");
    scanf("%d",&sp);
    if(cp<sp){
        printf("profite ");
    }
    if(cp==sp){
        printf("not profite not loss");
    }
    if(cp>sp){
        printf("loss ");
    }
    
    return 0;
    }