#include<stdio.h>
int main(){
    
   int n,t,i;
   scanf("%d %d",&n,&t);
   char data[n+1];
   scanf("%s",data);

while(t>0){
    for(i=0;i<n-1;i++){
        if(data[i]=='B' && data[i+1]=='G'){
            char temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
            i++;
        }
    }
    t--;
}
printf("%s",data);
     
    return 0;
}