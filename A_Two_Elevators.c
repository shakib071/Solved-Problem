#include<stdio.h>
#include<stdlib.h>
int main(){
    
   int t,i,a,b,c;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d %d %d",&a,&b,&c);
    
    int s=a-1;
    int h=abs(b-c)+(c-1);
    if(s==h){
        printf("3\n");
    }
    else if(s<h){
        printf("1\n");
    }
    else{
        printf("2\n");
    }
   }
     
    return 0;
}