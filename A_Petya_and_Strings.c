#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    
    char arr[101],arr2[101];
    gets(arr);
    gets(arr2);
    int ln1=strlen(arr);
   
    for(int i=0;i<ln1;i++){
         if(arr[i]>='A' && arr[i]<='Z'){
          arr[i]=tolower(arr[i]);
         }
    }
    for(int i=0;i<ln1;i++){
         if(arr2[i]>='A' && arr2[i]<='Z'){
          arr2[i]=tolower(arr2[i]);
         }
    }
    int c=0;
    for(int i=0;i<ln1;i++){
     if(arr[i]==arr2[i]){
        continue;
     }
     else if(arr[i]>arr2[i]){
        c=1;
        break;
     }
     else if(arr[i]<arr2[i]){
        c=-1;
        break;
     }
    

    }

    printf("%d",c);

     
    return 0;
}