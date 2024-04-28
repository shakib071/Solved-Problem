#include<stdio.h>
int main(){
    
   int t,i,n,s;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    int sum=0;
    scanf("%d",&n);
    int data[n];
    for(int j=0;j<n;j++){
        scanf("%d",&data[j]);
        
    }
    for(int k=0;k<n;k++){
        sum=sum+data[k];
    }
   
    if(sum<=0){
        printf("1\n");
    }
    
    else{
        if(sum>=n){
          s=sum-n;
      printf("%d\n",s);
        }
        else{
            printf("1\n");
        }
     
    }

   }
     
    return 0;
}