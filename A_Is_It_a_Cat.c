#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    
   int t,i,n;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    char data[n+1];
     scanf("%s",&data);
     if(n>=4){
        for (int k = 0;k <n; k++)
        {
            if(data[k]>='A' && data[k]<='Z'){
                data[k]=tolower(data[k]);
            }
        }
        char data1[n+1];
       data1[0]=data[0];
       int l=1;
     for(int j=0;j<n;j++){
        for(int kk=j+1;kk<n;kk++){
          if(data1[j]==data[kk]){
            continue;
          }
          else{
               data1[l]=data[]
          }
        }

        }
     }
        
      if(data[0]=='m'|| data[0]=='M'){
        int p=0;
         for(int j=1;j<n;j++){
            if(data[j]==data[j-1]){
                p++;
                continue;
            }
            else{

            }
         }
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