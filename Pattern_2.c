#include<stdio.h>
int main(){
    
   int N;
   scanf("%d",&N);

   for(int i=1;i<=N;i++){
       for(int k=N-1-i;k>=0;k--){
        printf(" ");
    }
     for(int j=i;j>0;j--){
        printf("%d",j);
     }
     printf("\n");
   }
   
     
    return 0;
}