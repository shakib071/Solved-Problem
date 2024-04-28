#include<stdio.h>
int main(){
    
   int a;
   long long int b;
   char cc;
   float d;
   double e;
   scanf("%d",&a);
   scanf("%lld",&b);
   scanf("%c",&cc);
   scanf("%f %lf",&d,&e);
   printf("%d\n%lld\n%c\n%f\n%lf",&a,&b,&cc,&d,&e);
     
    return 0;
}