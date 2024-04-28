#include<stdio.h>
int main(){
    
   int t,i,n,d,p;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d %d",&n,&d);
    char pp=d+'0';
    char data[n+2];
    scanf("%s",data);
    p=n;
    for(int j=0;j<n;j++){
      int v=data[j]-'0';
      if(d>v){
        p=j;
        break;
      }
    }
    for(int j=n;j>p;j--){
        data[j]=data[j-1];
    }
    data[p]=pp;
    data[n+1]='\0';
    printf("%s\n",data);
   }
   
     
    return 0;
}