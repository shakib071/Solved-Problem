#include<stdio.h>
int main(){
    
   int n,i;
   scanf("%d",&n);
   int data[n];
     for(i=0;i<n;i++){
        scanf("%d",&data[i]);
     }
     int count=0;
     for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(data[i]==data[j] && data[i]>0 && data[j]>0){
                data[i]=-1;
               count++;
                
            }
            else{
                
                continue;
            }
        }
     }
     int p=n-count;
     printf("%d\n",p);
      for(i=0;i<n;i++){
        if(data[i]!=-1){
         printf("%d ",data[i]);
        }
       
     }
    return 0;
}