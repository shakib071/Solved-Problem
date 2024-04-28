#include<stdio.h>
#include<math.h>
int main(){
    
   int t,i,a,b,c,min;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d %d %d",&a,&b,&c);
    int s=a+b;
    float aver=s/2.0;
    if(a>b){
        min=b;
    }
    else{
        min=a;
    }
    float k=aver-min;
    int kk=ceil(k/c);
    printf("%d\n",kk);
   }
     
    return 0;
}