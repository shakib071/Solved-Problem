#include<stdio.h>

int count_before_one( int array[],int N){
    int x;
    for(int i=0;i<N;i++){
        if(array[i]==1){
           x=i;
           break;
        }
    }
   return x;
}


int main(){
    
    int N;
    scanf("%d",&N);
     int array[N];
    for(int i=0;i<N;i++){
      scanf("%d",&array[i]);
    }
  int p=count_before_one(array,N);
    printf("%d",p);
   
     
    return 0;
}