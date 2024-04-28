#include<stdio.h>
int main(){
    
   int t,n;
   scanf("%d",&t);

   for(int i=1;i<=t;i++){
    scanf("%d",&n);
    int A[n],B[n],C[n];

    for(int j=0;j<n;j++){
        scanf("%d",&A[j]);
        B[j]=A[j];
    }
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(B[j]>=B[k]){
                int temp=B[j];
                B[j]=B[k];
                B[k]=temp;
            }
        }
    }
    
    for(int j=0;j<n;j++){
        int p=A[j]-B[j];
        if(p<0){
            C[j]=-p;
        }
        else{
            C[j]=p;
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",C[j]);
    }
    printf("\n");

   }
     
    return 0;
}