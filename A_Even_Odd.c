#include<stdio.h>
int main(){
    
   long long int n,k,i,j;
   int c=1;
   scanf("%lld %lld",&n,&k);
   long long int p=k-1;
   long long int data[n];
   j=0;

   for(i=1;i<=n;i=i+2){
   data[j]=i;
   if(j==p){
    printf("%lld",data[p]);
    c=0;
    break;
   }
   j++;
   }
   if(c!=0){
for(k=2;k<=n;k=k+2){
    data[j]=k;
    if(j==p){
    printf("%lld",data[p]);
    break;
   }
    j++;

   }
   }
   
     
    return 0;
}