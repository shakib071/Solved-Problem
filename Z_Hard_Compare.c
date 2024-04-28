#include<stdio.h>
#include<math.h>
int main(){
    
  long long int a,b,c,d;
   scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
   

   long long int s=pow(a,b);
  long long int h=pow(c,d);
  printf("%lld %lld",s,h);
  if(s>=h){
    printf("YES");
  }
  else{
    printf("NO");
  }
     
    return 0;
}