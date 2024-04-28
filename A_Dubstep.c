#include<stdio.h>
#include<string.h>
int main(){
    int i;
   char data[201];

   gets(data);
   int ln=strlen(data);
    int dd=0;
    for(i=0;i<ln;){
        

        if(data[i]=='W' && data[i+1]=='U' && data[i+2]=='B'){
            i=i+3;
            if(dd!=0){
              printf(" ");
            }
            dd=0;
           
        }
        else{
            printf("%c",data[i]);
            i++;
            dd++;
        }
    }
     
    return 0;
}