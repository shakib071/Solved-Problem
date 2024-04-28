#include<stdio.h>
int main(){
    
   char data[11]="codeforces\0";
   char data1[11];
   int t,i,cc;
   scanf("%d",&t);
   
   for(i=1;i<=t;i++){
     cc=0;
    scanf("%s",data1);

    for(int j=0;j<10;j++){
        if(data[j] != data1[j]){
            cc++;
        }
    }
    printf("%d\n",cc);
   }

   
     
    return 0;
}