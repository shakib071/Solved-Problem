#include<stdio.h>
#include<string.h>
int main(){
    
   int count[26]={0},i,v,d=0;
   char data[1001];
   gets(data);

int ln=strlen(data);
for(i=0;i<ln;i++){
    if(data[i]>='a' && data[i]<='z'){
        v=data[i]-'a';
        count[v]++;
    }
}
for(i=0;i<26;i++){
    if(count[i]>0){
        d++;
    }
}
printf("%d",d);
     
    return 0;
}