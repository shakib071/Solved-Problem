#include<stdio.h>
int main(){
    
   int a,b,alada,high;
   scanf("%d %d",&a,&b);
   if(a>b){
    alada=b;
    high=a;
   }
   else{
    alada=a;
    high=b;
   }
   int s=high-alada;
   int same=s/2;
   printf("%d %d",alada,same);

     
    return 0;
}