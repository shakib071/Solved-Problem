#include<stdio.h>
#include<stdlib.h>
int main(){
    
   int t,i,a,b,c,k;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d %d %d",&a,&b,&c);
    int s=2*(abs(a-b));
     if(a>s || b>s || c>s){
        printf("-1\n");
     }
     else{
        int h=s/2;
        if(c>h){
          k=c-h; 
        }
        else{
            k=c+h;
        }
         printf("%d\n",k);
     }
    
   }
     
    return 0;
}