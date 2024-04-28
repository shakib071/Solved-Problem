#include<stdio.h>
int main(){
    
  long long int p,i,sum=0,even,odd,n;
   scanf("%lld",&p);
   n=p/2;
   even=n*(n+1);
   if(p%2==0){
    odd=(n)*(n);
    } 
    else {
      odd=(n+1)*(n+1);     
    }
    sum=even-odd;

   printf("%lld",sum);
     
    return 0;
}