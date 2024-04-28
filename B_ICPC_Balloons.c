#include<stdio.h>
int main(){
    
   int t,n,i;
  
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    int sum=0;
    scanf("%d",&n);
     int count[26]={0};
    char data[n+1];
    scanf("%s",data);
    
    for(int j=0;j<n;j++){
        int v=data[j]-'A';
        count[v]++;
       
    }
    
    for(int k=0;k<26;k++) {
        if(count[k]>0) {
            
            sum=sum+count[k]+1;
           
        }
    }
    printf("%d\n",sum);
 
   }
   
     
    return 0;
}