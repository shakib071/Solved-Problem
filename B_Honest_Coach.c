#include<stdio.h>
#include <stdlib.h>
int main(){
    
   int t,i,n,min,dd;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
        scanf("%d",&n);
        int data[n];
        for(int j=0;j<n;j++){
            scanf("%d",&data[j]);
        }
        min=abs(data[0]-data[1]);
        
          for(int k=0;k<n-1;k++){
            for(int l=k+1;l<n;l++){
                dd=abs(data[k]-data[l]);
                if(dd<min){
                    min=dd;
                }
            }
        }
        printf("%d\n",min);
      
   }
     
    return 0;
}