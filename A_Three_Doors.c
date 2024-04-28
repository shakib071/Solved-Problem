#include<stdio.h>
int main(){
    
   int t,i,n,sum;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    sum=n;
    int p=n-1;
    int arr[3];
     for(int j=0;j<3;j++){
        scanf("%d",&arr[j]);
     }
     for(int j=0;j<3;j++){
        if(arr[p]==0){
            break;
        }
        else{
            sum=sum+arr[p];
            p=arr[p]-1;
            
        }
     }
     if(sum==6){
        printf("YES\n");
     }
     else{
        printf("NO\n");
     }
  

   }

     
    return 0;
}