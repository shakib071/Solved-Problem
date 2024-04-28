#include<stdio.h>
int main(){
    
   int n,m;
   scanf("%d %d",&n,&m);
   int data[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&data[i][j]);
    }
   }
   for(int i=0;i<m;i++){
    printf("%d ",data[n-1][i]);
   }
   printf("\n");
   for(int i=0;i<n;i++){
    printf("%d ",data[i][m-1]);
   }
     
    return 0;
}