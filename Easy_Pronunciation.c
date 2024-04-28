#include<stdio.h>
int main(){
    
   int t,n,i;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    int dd=0;
    scanf("%d",&n);
    char data[n+1];
    scanf("%s",data);
    for(int j=0;j<n;j++){
       if(data[j]=='a' || data[j]=='e' || data[j]=='i' || data[j]=='o' || data[j]=='u'){
        dd=0;
       }
       else{
        dd++;
        if(dd>=4){
            printf("NO\n");
            break;
        }
       }
       if(j==(n-1)){
        printf("YES\n");
        break;
       }
    }
   }
     
    return 0;
}