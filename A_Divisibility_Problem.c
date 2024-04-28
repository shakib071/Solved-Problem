#include<stdio.h>
int main(){
    
 int n,i,a,b,c,d;
   scanf("%lld",&n);

   for(i=1;i<=n;i++){
    scanf("%d %d",&a,&b);
     d=a%b;
     if(d!=0){
       c=b-d;
     }
     else{
        c=0;
     }
     
    printf("%d\n",c);
   }
     
    return 0;
}