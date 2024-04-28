#include<stdio.h>
#include<string.h>
int main(){
    
   int t,i;
   scanf("%d",&t);
   char data[101];
   for(i=1;i<=t;i++){
    int c=0;
         scanf("%s",data);
        
        int ln=strlen(data);
        if(ln%2==0){
            
            int v=ln/2;
             int p=v;
            for(int j=0;j<v;j++){
                 if(data[j]!=data[p]){
                  c=1;
                  break;
                 }
                 p++;
            }
            if(c==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
   }
     
    return 0;
}