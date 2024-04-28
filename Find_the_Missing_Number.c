#include<stdio.h>
int main(){
    
   long long int t,a,b,c,m,p,d;
   scanf("%lld",&t);

   for(int i=1;i<=t;i++){
    scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
     p=a*b*c;
     d=m/p;
    if(d*p==m){
        printf("%lld\n",d);
    }
    else{
        printf("-1\n");
    }
   }
     
    return 0;
}