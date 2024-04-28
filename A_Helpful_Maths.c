#include<stdio.h>
#include<string.h>
int main(){
    
    int i,temp;
    char arr[101];
    gets(arr);
    
    int ln=strlen(arr);
    // printf("%d",ln);

    for(i=0;i<ln;i++){
        if(arr[i] != '+'){
            for(int j=i;j<ln;j++){
                if(arr[j]!='+'){
                if(arr[i]>=arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;

                }
                }
                
            }
        }
    }

    printf("%s",arr);
     
    return 0;
}