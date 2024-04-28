#include<stdio.h>
int main(){
    
  long long int t,i;
   long long j,n,sum;
   scanf("%lld",&t);

   for(i=1;i<=t;i++){
     scanf("%lld",&n);
      sum=0;
     for(j=n;j>0;j=j/2){
        sum=sum+j;
     }
     printf("%lld\n",sum);
   }
     
    return 0;
}