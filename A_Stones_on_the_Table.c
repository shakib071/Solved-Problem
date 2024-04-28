#include<stdio.h>
#include<string.h>
int main(){
    int n;

    scanf("%d",&n);

    char arr[n+1];
     
     for(int i=0;i<=n;i++){
        scanf("%c",&arr[i]);
     }
      for(int i=0;i<=n;i++){
        printf("%c",arr[i]);
     }
     
     
     
    return 0;
}