#include<stdio.h>
int main(){
    
   int n,i,count=0,c;
   scanf("%d",&n);

   int data[n];
   for(i=0;i<n;i++){
      scanf("%d",&data[i]);
   }

  while(1){
     c=1;
  for(i=0;i<n;i++){
   
    if(data[i]%2 != 0){
        c=0;
    }

    
    data[i]=data[i]/2;
  }
  if(c==1){
    count++;

  }
  else if(c==0){
    break;
  }
}
printf("%d",count);
    return 0;
}