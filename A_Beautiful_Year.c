#include<stdio.h>
int main(){
    
     int n,i;
     scanf("%d",&n);
     int data[4];

     for(i=n+1; ;i++){
        int c=1;
        int p=i;
       data[0]=p%10;
       p=p/10;
       data[1]=p%10;
       p=p/10;
       data[2]=p%10;
       p=p/10;
       data[3]=p%10;
       for(int j=0;j<3;j++){
        for(int k=j+1;k<4;k++){
            if(data[j]==data[k]){
                c=0;
                break;
            }
        }
       }
       if(c==0){
        continue;
       }
       else{
        printf("%d",i);
        break;
       }
    
        
     }
     
    return 0;
}