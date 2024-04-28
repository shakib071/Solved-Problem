#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
    
   int t,n,i,dd;
   scanf("%d",&t);
  
   for(i=1;i<=t;i++){
    dd=1;
    scanf("%d",&n);
    int data[n];
    if(n>1){
    for(int j=0;j<n;j++){
        scanf("%d",&data[j]);
    }
    
        for(int k=1;k<n;k++){
            int p=abs(data[0]-data[k]);
        
            if(p>1){
                dd=0;
                break;
            }
        }
       if(dd==0){
        printf("NO\n");
        }
    else{
        printf("YES\n");
    }

     
    }
    else{
        printf("YES\n");
    }


   
   
   }
     
    return 0;
}