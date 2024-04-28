#include<stdio.h>
int main(){
    
   int n,m,flag=0;
   scanf("%d %d",&n,&m);
   int data[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&data[i][j]);
    }
   }
   if(n==m){
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if((i==j) || (i+j)==(n-1)){
        if(data[i][j]!=1){
        flag=1;
        break;
       }
       }
       else if(data[i][j]!=0){
        flag=1;
        break;
       }
    }
   }
   if(flag==0){
     printf("YES\n");
   }
   else{
    printf("NO\n");
   }
   }
   else{
    printf("NO\n");
   }
     
    return 0;
}