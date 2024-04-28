#include<stdio.h>

int prime(int n){
    int d=0;
    for(int i=2;i<=n/2;i++){
      if(n%i==0){
        d=1;
        break;
      }
    }
    return d;
}

int main(){
    int nn,i,pp;
  scanf("%d",&nn);
  for(i=1;i<=nn;i++){
   scanf("%d",&pp);
   int p=prime(pp);
   if(p==0){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }
  }
    return 0;
}