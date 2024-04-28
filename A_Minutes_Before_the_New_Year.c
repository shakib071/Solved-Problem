#include<stdio.h>
int main(){
    
   int t,i,h,m,hh,mm;
   scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d %d",&h,&m);
         hh=23-h;
         mm=60-m;
    int s=(hh*60)+mm;
    printf("%d\n",s);
    }
     
    return 0;
}