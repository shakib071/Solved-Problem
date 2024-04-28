#include<stdio.h>
int main(){
    
   int t,i,n;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    int data[n],data1[n];
    for(int j=0;j<n;j++){
        scanf("%d",&data[j]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&data1[j]);
    }
    for(int j=0;j<n;j++){
        if(data[j]<data1[j]){
            int temp=data[j];
            data[j]=data1[j];
            data1[j]=temp;
        }
    }
    int max=data[0];
    int max1=data1[0];
    for(int j=1;j<n;j++){
        if(max<data[j]){
            max=data[j];
        }
        if(max1<data1[j]){
            max1=data1[j];
        }
    }
    int skb=max*max1;
    printf("%d\n",skb);
   }
     
    return 0;
}