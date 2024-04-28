#include<stdio.h>
//Solved but time problem
int main(){
    
   int n,i,p;
   scanf("%d",&n);
   int l[n],r[n];
   for(i=0;i<n;i++){
    scanf("%d %d",&l[i],&r[i]);
   }
   int dd=0;
   for(i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
        if(l[i]>=l[j] && r[i]<=r[j]){
          dd=1;
           p=i;
          break;
        }
        else if(l[i]<=l[j] && r[i]>=r[j]){
             dd=1;
               p=j;
               break;
        }
        else if(r[i]==l[j]){
            for(int k=0;k<n;k++){
                if(r[j]==l[k]){
                    p=j;
                    dd=1;
                    break;
                }
            }
          }

     }
   }
   if(dd==1){
    printf("%d\n",p+1);
   }
   else{
    printf("-1");
   }
     
    return 0;
}