#include<stdio.h>
int main(){
    
   int t,i,n,dd;
   scanf("%d",&t);

   for(int i=1;i<=t;i++){
    scanf("%d",&n);
    int data[n];
    dd=0;
    for(int j=0;j<n;j++){
        scanf("%d",&data[i]);
    }
    int s=data[0]%2;
    int h=data[1]%2;
    for(int k=0;k<n;k++){
        if(k%2==0){
            if(data[k]%2!=s){
                dd=1;
                break;
            }  
        }
        else{
            if(data[k]%2 != h){
                dd=1;
                break;
            }
        }
    }
    if(dd==0){
        printf("YES\n");
    }
    else if(dd==1){
          printf("NO\n");
    }
    
   }
  //Solved   
    return 0;
}