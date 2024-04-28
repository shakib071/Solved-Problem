#include<stdio.h>

int sum(int x, int y){
  int   sum=x+y;
    return sum;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    
    int p=sum(a,b);
    printf("%d",p);
   
     
    return 0;
}

