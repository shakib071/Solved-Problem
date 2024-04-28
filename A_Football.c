#include<stdio.h>
#include<strings.h>
int main(){
    
   char data[101];
   scanf("%s",data);
  

 int ln=strlen(data);
if(ln>=7){
    int qq=1;
    int p=data[0]-'0';
  
 for(int i=1;i<ln;i++){
    int v=data[i]-'0';
  

    if(p==v){
     qq++;
     if(qq>=7){
        printf("YES");
        break;
     }
    
    }
   
    else{
        p=data[i]-'0';
        qq=1;

    }
   if(i==(ln-1)){
        printf("NO");
        break;
    }
    
 }
}
else{
    printf("NO");
}
     
    return 0;
}