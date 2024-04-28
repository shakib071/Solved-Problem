#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    
    int s=0,c=0;
    char data[101];
    scanf("%s",data);
    
     int ln=strlen(data);
     for(int i=0;i<ln;i++){
        if(data[i]>='a' && data[i]<='z'){
           s++;
        }
        else{
            c++;
        }
     }
  

     if(s>=c){
        for(int i=0;i<ln;i++){
           if(data[i]>='A' && data[i]<='Z'){
            data[i]=tolower(data[i]);
           }
        }
     }
     else{
         for(int i=0;i<ln;i++){
           if(data[i]>='a' && data[i]<='z'){
            data[i]=toupper(data[i]);
           }
        }
     }
     printf("%s",data);

    return 0;
}