#include<stdio.h>
int main(){
    
   int t,i,max,n;
   scanf("%d",&t);
   for(i=1;i<=t;i++){
    scanf("%d",&n);
    int data[n];
    max=2147483647;
    for(int j=0;j<n;j++){
        scanf("%d",&data[j]);
    }
 
    for(int k=0;k<n-1;k++){
    for(int j=k+1;j<n;j++){
        int ii=k+1,jj=j+1;
        int s=data[k]+data[j]+jj-ii;
        if(s<max){
            max=s;
        }
       
    }
    
    }
    printf("%d\n",max);
   }
     
    return 0;
}