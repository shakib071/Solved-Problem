#include<stdio.h>
int main(){
    
   int n,i,k,c=0,sum=0;
   scanf("%d %d",&n,&k);

   int data[n+1];

   for(i=1;i<=n;i++){
    scanf("%d",&data[i]);
    // sum=sum+data[i];
   }
   

   int item=data[k];



   for(i=1;i<=n;i++){
    if(data[i]!=0){
     if(data[i]>=item){
        c++;
    }
    }   
   }
  


   printf("%d",c);
     
    return 0;
}