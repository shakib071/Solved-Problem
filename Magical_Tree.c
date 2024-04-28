#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);

    int p=n/2+6;
    int pp=(((2*p)-1)/2)+1;
    int ppp=pp-(n/2)-1;
    for(int i=1;i<=p;i++){
        for(int k=1;k<=(p-i);k++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int k=1;k<=ppp;k++){
            printf(" ");

        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
   
     
    return 0;
}