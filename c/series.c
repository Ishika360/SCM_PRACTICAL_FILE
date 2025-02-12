/*#include<stdio.h>
int main(){
   int i;
   for(i=1;i<=10;i++){
      printf("%d",i);
   }
   return 0;

}

#include<stdio.h>
int main()
{
   int i,n;
   printf("enter the value:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      if(i%2!=0){
         printf("%d",i);
      }
   }
   return 0;
   

}*/
#include<stdio.h>
int main(){
   int n1=0,n2=1,n3,i,number;
   printf("enter the mum :");
   scanf("%d",&number);
   printf("%d %d",n1,n2);
   for(i=2;i<number;i++){
      n3=n1+n2;
      printf("%d",n3);
      n1=n2;
      n2=n3;

   }
   return 0;
   }


