#include<stdio.h>
int main(){
    
   int n,h,i,c=0;
   scanf("%d %d",&n,&h);

   int friend[n];

   for(i=0;i<n;i++){
    scanf("%d",&friend[i]);
   }

   for(i=0;i<n;i++){
    if(friend[i]>h){
        c=c+2;
    }
    else{
        c++;
    }
   }

   printf("%d",c);
     
    return 0;
}