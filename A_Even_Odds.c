#include<stdio.h>
int main(){
    
   long long int n,k,i,p,kk,pp;
   scanf("%lld %lld",&n,&k);

   if(n%2==0){
     p=n/2;
     if(k<=p){
        kk=2*k-1;
     }
     else{
      pp=k-p;
      kk=2*pp;
     }
   }

   else{
     p=(n/2)+1;
     if(k<=p){
        kk=2*k-1;
     }
     else{
        pp=k-p;
        kk=2*pp;
     }
   }
   printf("%lld",kk);
     
    return 0;
}