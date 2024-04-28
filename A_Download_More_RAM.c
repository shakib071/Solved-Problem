#include<stdio.h>
int main(){
    
   int t,i,n,k;
   scanf("%d",&t);
   
   for(i=1;i<=t;i++){
    scanf("%d %d",&n,&k);
    int a[n],b[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    int sum=k;
    for(int j=0;j<n;j++){
        for(int l=0;l<n;l++){
            if(a[l]!=-1 && a[l]<=sum){
                sum=sum+b[l];
                a[l]=-1;
            }
        }
    }
    printf("%d\n",sum);
   }
     
    return 0;
}