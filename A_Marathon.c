#include<stdio.h>
int main(){
    
   int t,a,b,c,d;
   scanf("%d",&t);

   for(int i=1;i<=t;i++){
    int cc=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b){
        cc++;
    }
    if(a<c){
        cc++;
    }
    if(a<d){
        cc++;
    }

    printf("%d\n",cc);
   }
     
    return 0;
}