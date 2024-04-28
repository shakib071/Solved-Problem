#include<stdio.h>
int main(){
    
   int  n;
   scanf("%d",&n);
   float data[n];
   float sum=0;


    for(int i=0;i<n;i++){
        scanf("%f",&data[i]);
        sum=sum+data[i];
    }
   
   double ans=(sum/n);
   printf("%0.12f",ans);
    return 0;
}