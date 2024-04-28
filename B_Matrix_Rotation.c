#include<stdio.h>
int main(){
    
   int t,i,dd;
   scanf("%d",&t);
  int data[2][2];
   for(i=1;i<=t;i++){
     for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
            scanf("%d",&data[j][k]);
        }
     }
    
    dd=0;
     for(int k=0;k<4;k++){
     if(data[0][0]<=data[0][1] && data[1][0]<=data[1][1] && data[0][0]<=data[1][0] && data[0][1]<=data[1][1]){
         dd=1;
        printf("YES\n");
        break;
     }
     else{
        int temp=data[0][0];
        data[0][0]=data[1][0];
        data[1][0]=data[1][1];
        data[1][1]=data[0][1];
        data[0][1]=temp;
     }
    
     }

     if(dd==0){
        printf("NO\n");
     }
    
   }
     
    return 0;
}