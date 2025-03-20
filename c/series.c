
#include<stdio.h>
int main(){
    int num,x=0;
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            x=1;
            break;
        }  
    }
    if(x==0){
        printf("Prime");
    }    
    else{
        printf("Not Prime");
    }
    return 0;
}