#include<stdio.h>
int main(){
    
   int n,m,i,j;
   scanf("%d %d",&n,&m);

   for(i=0;i<n;i=i+1){
    if(i%2==0){
     for(j=0;j<m;j++){
        printf("#");
     }
      printf("\n");

    }
   else if(i%4==1){
        for(int k=0;k<m;k++){
            if(k==m-1){
             printf("#");
            }
            else{
                printf(".");
            }
            
        }
        printf("\n");
    }
   else{
    for(int l=0;l<m;l++){
        if(l==0){
          printf("#");
        }
        else{
            printf(".");
        }
        
    }
    printf("\n");
   }
   
   }
   
    return 0;
}