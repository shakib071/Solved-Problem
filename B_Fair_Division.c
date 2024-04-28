#include<stdio.h>
int main(){
    
   int t,i,n,o,two;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    int data[n];
    o=0;
    two=0;
    for(int j=0;j<n;j++){
        scanf("%d",&data[j]);
       if(data[j]==1){
        o=o+data[j];
       }
       else{
        two=two+data[j];
       }
    }
    if((o+two)%2==0){
         if((two/2)%2 ==0 && (o%2)==0){
            printf("YES\n");

         }
         else if((two/2)%2==1 && (o%2)==0 && o!=0){
            printf("YES\n");
         }
         else{
            printf("NO\n");
         }
    }
    else{
        printf("NO\n");
    }

   }
     
    return 0;
}