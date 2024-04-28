#include<stdio.h>
int main(){
    
   int N,i;

   scanf("%d",&N);
  int p=2*N-1;
  for(int i=0;i<N;i++){
    for(int k=N-1-i;k>0;k--){
        printf(" ");
    }
    for(int j=0;j<2*i+1;j++){
        if(i%2==0){
            printf("#");
        }
        else{
            printf("-");
        }
    }
    printf("\n");
    
  }
  for(i=N-1;i>0;i--){
    for(int k=0;k<N-i;k++){
        printf(" ");
    }
    for(int j=0;j<2*i-1;j++){
            if(i%2!=0){
            printf("#");
        }
        else{
            printf("-");
        }
    }
    printf("\n");
    
  }
  return 0;
}