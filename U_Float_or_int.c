#include<stdio.h>
int main(){
    
   float N;
   scanf("%f",&N);

   int v=N;
   float p=N-v;
   if(p>0){
    printf("float %d %.3f",v,p);
   }
   else{
    printf("int %d",v);
   }
   
     
    return 0;
}