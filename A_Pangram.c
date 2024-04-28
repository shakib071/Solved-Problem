#include<stdio.h>
#include<string.h>
int main(){
    
   int n,i,d=1,p;
   int count[26]={0};
   scanf("%d",&n);
   char data[n+1];
   scanf("%s",&data);

int ln=strlen(data);

   if(n<26){
    printf("NO");
   }
   else if(n>=26){
      for(i=0;i<ln;i++){
        if(data[i]>='a' && data[i]<='z'){
             p=data[i]-'a';
        }
        else{
            p=data[i]-'A';
        }
       
        count[p]++;
      }
      for(int j=0;j<ln;j++){
        if(count[j]==0){
          d=0;
          break;
        }
      }
      if(d==1){
          printf("YES");
      }
      else if(d==0){
        printf("NO");
      }
      
   }
     
    return 0;

}