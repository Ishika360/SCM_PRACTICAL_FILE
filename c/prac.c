/*#include<stdio.h>
int main(){
    int n,i;
    printf("enter value : \n");
    scanf("%d",&n);
    for ( i = 0; i<n; i++){
        for ( int j = 0; j < n; j++){
            printf(" * ");
        }
        printf("\n");
    
        
    }
        return 0;

    }

#include<stdio.h>
int main(){
    int x=1,y;
    while(x<=5){
        y=1;
        while(y<=x){
            printf("*");
            y++;
        }
        printf("/n");
        x++;
    }
    return 0;
}

#include<stdio.h>
int main(){
    int i,rows,k=0;
   \
   
   
   
   for(i=1;i<=rows;i++){
        for(i=1;i<rows-1;j++){
            printf("");

        }
    }
    for(k=1;k<=(2*i-1);k++)
    {
        printf("*");

    }
printf("\n");
return 0;
}


#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;
    for()
}

#include<stdio.h>
#include<math.h>
int main(){
    float num,res;
    printf("enter the num:");
    res=sqt(num);
    printf("%.2f",res);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    float y,x;
    printf("enter the num:");
    scanf("%f",&x);
    y=ceil(x);
    printf("%f",y);
    return 0;

}
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch =tolower('M');
    printf("%c",ch);
    return 0;


}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int value;
    printf("enter the num:");
    scanf("%d",&value);
    printf("%d",abs(value));
    return 0;
}
#include<stdio.h>
int main(){
    int x=0,num;
    printf("enter the num:");
    scanf("%d",&x);
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            x=1;
            break;
        }
        if(x==0){
            printf("prime num");
        }
        else{
            printf("not prime num");
        }
    return 0;
    }

}

#include<stdio.h>
int main(){
    int i,j,k,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=N;j>i;j--){
            printf(" ");
            for(k=1;k<=2*i-1;k++){
                printf("*");
            }
        }
        printf("\n");
    }
return 0;
}
#include<stdio.h>
int main(){
    int i,j,k,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf(" ");
        }
            for(k=1;k=(2*i-1);k++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }*
#include<stdio.h>
int main(){
    int x,y,a;
    printf("enter the num:);
    scanf("%d",&x);
    printf("enter the num:);
    scanf("%d",&y);
    if(a=='+'){
    printf("addition: %d",x+y);
    }
    elif(a=='-'){
    printf("subtraction:%d",x-y);
    }
     elif(a=='*'){
    printf("multiplication:%d",x-y);
    } elif(a=='/'){
    printf("division:%d",x/y);
    }
    return 0; 
    }

#include<stdio.h>
int main(){
    int r,area;
    printf("enter the num:");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("%d",area);
    return 0;
}
#include<stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int x;
    scanf("%d", &x);
    
    int sum = 0;
    for (int i = 1; i <= x; i++) {
        sum += factorial(i) / i;
    }
    
    printf("%d\n", sum);
    
    return 0;
}

#include<stdio.h>
float sum(int a ,int b){
    return a+b;

}
float diff(int a,int b){
    return a-b;
}
float mul(int a,int b){
    return a*b;

}
float div(int a,int b){
    return a/b;
}
if(c=='+'){
            printf("%.2f",sum(a,b));
        }
        else if(c=='-'){
            printf("%.2f",diff(a,b));
        }
        else if(c=='*'){
            printf("%.2f",mul(a,b));
        }
        else if(c=='/'){
            printf("%.2f",div(a,b));
        }
        else{
         printf("INVALID INPUT");
         }
         return 0;
        }*/


#include<stdio.h>
float sum(int a,int b){
    return a+b;
}
float diff(int a,int b){
    return a-b;
}
float mul(int a,int b){
    return a*b;
}
float div(int a,int b){
    return a/b;
}
int main(){
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if(c=='+'){
        printf("%.2f",sum(a,b));
    }
    else if(c=='-'){
        printf("%.2f",diff(a,b));
    }
    else if(c=='*'){
        printf("%.2f",mul(a,b));
    }
    else if(c=='/'){
        printf("%.2f",div(a,b));
    }
    else{
        printf("INVALID INPUT");
    }
}        














