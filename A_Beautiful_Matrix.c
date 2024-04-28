#include<stdio.h>
#include<math.h>
int main(){
    
   int arr[5][5],i,j,count=0,p,q;

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
     scanf("%d",&arr[i][j]);
     if(arr[i][j]==1){
      p=i;
      q=j;
     }
    }
  }
  if(2-p<0){
  count=count-(2-p);
  }
  else{
    count=count+(2-p);
  }
  if(2-q<0){
count=count-(2-q);
  }
  else{
    count=count+(2-q);
  }
  
  printf("%d",count);
    
    return 0;
}