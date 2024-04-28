#include<stdio.h>
int main(){
    
   int n,m,i,j,c=0,mm=0,y=0,w=0,g=0,b=0;
   scanf("%d %d",&n,&m);
   char data[n][m];
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf(" %c",&data[i][j]);
    }
   }
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(data[i][j]=='C'){
        c++;
      }
      else if(data[i][j]=='M'){
        mm++;
      }
      else if(data[i][j]=='Y'){
        y++;
      }
      else if(data[i][j]=='W'){
        w++;
      }
      else if(data[i][j]=='G'){
        g++;
      }
      else{
        b++;
      }
    }
   }
   if((b+w+g)>0 && c==0 && mm==0 && y==0){
    printf("#Black&White");
   }
   else{
    printf("#Color");
   }
     
    return 0;
}