#include<stdio.h>
int main(){
    
   int n,i;
   scanf("%d",&n);

    for(i=n-4;i>3;i--){
        int p=n-i;
        int q=i;
        int c=1;
        int cc=1;
        if(p%2==0 && p>2){
             c=0;
        }
        else{
            for(int j=2;j<p/2;j++){
                if(p%j==0){
                    c=0;
                    break;
                }
            }
        }
        if(q%2==0 && q>2){
             cc=0;
        }
        else{
           for(int j=2;j<p/2;j++){
                if(q%j==0){
                    cc=0;
                    break;
                }
            } 
        }
        if(c==0 && cc==0){
            if(p+q==n){
                printf("%d %d",p,q);
                break;
            }
            else{
                continue;
            }
        }
    }
   
     
    return 0;
}