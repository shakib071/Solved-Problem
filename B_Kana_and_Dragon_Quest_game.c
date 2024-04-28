#include<stdio.h>
int main(){
    
   int t,m,n,x,i;
   scanf("%d",&t);
  
  for(i=1;i<=t;i++){
    scanf("%d %d %d",&x,&n,&m);
    int h=x;
    int hh=(h/2)+10;
    if(hh<=h){
    for(int j=0;j<n;j++){
     h=(h/2)+10;
    }
    h=h-(m*10);
   
    if(h<=0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    else{
        h=h-(m*10);
        if(h<=0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    } 
    }
  }
     
    return 0;
}