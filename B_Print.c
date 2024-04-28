#include<stdio.h>
int lll(int p){
      for(int i=1;i<=p;i++){
    printf("%d",i);
    if(i<p){
       printf(" ");
    }
   }
}
int  main(){
    int n;
    scanf("%d",&n);
    lll(n);
   
     
    return 0;
}