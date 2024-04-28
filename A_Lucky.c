#include<stdio.h>
int main(){
    
   int t,i;
   scanf("%d",&t);
   char n[7];
   for(i=1;i<=t;i++){
    scanf("%s",n);
    int v=n[0]+n[1]+n[2]-3*'0';
    int l=n[3]+n[4]+n[5]-3*'0';
    if(v==l){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
   }
     
    return 0;
}