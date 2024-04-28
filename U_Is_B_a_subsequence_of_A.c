#include<stdio.h>
int main(){
    
   int n,m,d=1;
   scanf("%d %d",&n,&m);
   int a[n],b[m];

   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
   }
   if(m>n){
    printf("NO");
   }
   else{
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(b[j]==a[i]){
                d=1;
                break;
            }
            if(i=n-1){
                 d=0;
                 break;
            }
        }
        if(d==0){
            break;
        }
    }
    if(d==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
   }
     
    return 0;
}