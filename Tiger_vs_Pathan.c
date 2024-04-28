#include<stdio.h>
int main(){
    
   int t,n;
   scanf("%d",&t);
  
  for(int i=1;i<=t;i++){
    scanf("%d",&n);
    char S[n+1];
    scanf("%s",S);
    int p=0,t=0;
    for(int j=0;j<n;j++){
        if(S[j]=='T'){
          t++;
        }
        else{
            p++;
        }
    }
    if(p>t){
        printf("Pathaan\n");
    }
    else if(t>p){
        printf("Tiger\n");
    }
    else if(t==p){
        printf("Draw\n");
    }
  }
    return 0;
}