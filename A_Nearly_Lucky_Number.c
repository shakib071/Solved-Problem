#include<stdio.h>
int main(){
    
   long long int n,p,d=0,dd=0;
   scanf("%lld",&n);
    while(n>0){
        
        if(n%10 !=4 && n%10 !=7){
            d++;
        }
        else{
            dd++;
        }
        n=n/10;
    } 
 

    if(d==0 && (dd==4 || dd==7)){
        printf("YES");
    }
    else if(dd==4 || dd==7){
       printf("YES"); 
    }
    else{
        printf("NO");
    }
    
    return 0;
}