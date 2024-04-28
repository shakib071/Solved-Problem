#include<stdio.h>
#include<string.h>
int main(){
    
   int n,i,j;
   scanf("%d",&n);

   char data[n];

   for(i=0;i<n;i++){
    scanf("%s",&data[i]);
   }

   for(i=0;i<n;i++){
    printf("%s",data[i]);
   }


     
    return 0;
}