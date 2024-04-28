#include<stdio.h>
int main(){
    
   long long int t,n,i,a,b,d;
   scanf("%lld",&t);

   for(i=1;i<=t;i++){
    d=0;
    scanf("%lld",&n);
    if(n<3){
        printf("0\n");
    }
    else{
        a=n/2 +1;
        b=n-a;
        printf("%lld\n",b);
    }
   }
     
    return 0;
}