#include<stdio.h>
int main(){
    
   int n,i,j,c=0,sum;
   scanf("%d",&n);

 int data[n][3];

 for(i=0;i<n;i++){
    for(j=0;j<3;j++){
        scanf("%d",&data[i][j]);
    }
 }

 for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<3;j++){
      if(data[i][j]!=1){
        continue;
      }
      sum=sum+data[i][j];
    }
    if(sum>=2){
        c++;
    }
 }

 printf("%d",c);


//      for(i=0;i<n;i++){
//     for(j=0;j<3;j++){
//         printf("%d",data[i][j]);
//     }

//     printf("\n");
//  } 
    return 0;
}