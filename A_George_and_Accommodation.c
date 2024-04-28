#include<stdio.h>
int main(){
    
   int n,p,q,i,d=0;
   scanf("%d",&n);

   for(i=0;i<n;i++){
    scanf("%d %d",&p,&q);
    if(q-p>=2){
        d++;
    }
   }
    printf("%d",d);
    return 0;
}