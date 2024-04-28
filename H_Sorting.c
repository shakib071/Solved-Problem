#include<stdio.h>
int main(){
    
   int n,i;
   scanf("%d",&n);

   int data[n];
   
   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
   for(i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(data[i]>data[j]){
            int temp=data[i];
            data[i]=data[j];
            data[j]=temp;
        }
    }
   }

   for(i=0;i<n;i++){
    printf("%d ",data[i]);
   }
     
    return 0;
}