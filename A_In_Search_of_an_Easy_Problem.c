#include<stdio.h>
int main(){
    
   int n,i,d=0;
   scanf("%d",&n);

   int data[n];
   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
   for(i=0;i<n;i++){
     if(data[i]==1){
        d++;
     }
   }
   if(d==0){
    printf("EASY");
   }
   else{
    printf("HARD");
   }
     
    return 0;
}