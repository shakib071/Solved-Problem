#include<stdio.h>
int main(){
    
  long long int n,x,d;
   char c;
   scanf("%lld %lld",&n,&x);
  long long int p=x,count=0;
   for(int i=1;i<=n;i++){
    scanf(" %c %lld",&c,&d);
      if(c=='+'){
         p=p+d;
      }
      else{
        if(p>=d){
            p=p-d;
        }
        else{
            count++;
        }
      }
      
   }
   printf("%lld %lld",p,count);
     
    return 0;
}