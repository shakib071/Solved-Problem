#include<stdio.h>
int main(){
    
   int w,i,count=0;
   scanf("%d",&w);
   for(i=2;i<=w/2;i=i+2){
    if(w%i==0){
        count++;
        break;
    }
  
   }
   if(count>0){
    printf("YES");
   }
   else{
    printf("NO");
   }
    return 0;
}