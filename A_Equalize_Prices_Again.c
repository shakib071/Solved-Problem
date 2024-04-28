#include<stdio.h>
int main(){
    
   int t,i,n,p;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    int data[n];
    int sum=0;
    for(int j=0;j<n;j++){
       scanf("%d",&data[j]);
       sum=sum+data[j];
    }
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(data[j]>=data[k]){
                int temp=data[j];
                data[j]=data[k];
                data[k]=temp;
            }
        }
    }
   
    for(int j=0;j<n;j++){
        if((n*data[j])>=sum){
           p=data[j];
           break;
        }
    }
    printf("%d\n",p);
   }
     
    return 0;
}