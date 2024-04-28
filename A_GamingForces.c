#include<stdio.h>
int main(){
    
   int t,i,n;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    int data[n];
    int sum=0,sum1=0;

    for(int j=0;j<n;j++){
        scanf("%d",&data[j]);
        if(data[j]>1){
            sum++;
        }
        else{
            sum1++;
        }
    }
    if(sum1%2==0){
      sum=sum+(sum1/2);
    }
    else{
        sum=sum+(sum1/2)+1;
    }
    
    printf("%d\n",sum);
   }
     
    return 0;
}