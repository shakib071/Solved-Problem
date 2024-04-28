#include<stdio.h>
int main(){
    
   int t,i;
   scanf("%d",&t);
   char data[4];
   for(i=1;i<=t;i++){
    scanf("%s",data);
   

   if(data[0]=='a' || data[1]=='b' || data[2]=='c'){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }
   
   }
     
    return 0;
}