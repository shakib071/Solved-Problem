#include<stdio.h>
#include<string.h>
int main(){
    
   int t,i,n;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    char data[n+1];
    scanf("%s",data);
    int p=n-1;
    int s=0;
    char dataa[n+1];
    while(p>=0){
        if(data[p]=='0' &&p>1){
            int sum=(data[p-2]-'0')*10+(data[p-1]-'0');
            dataa[s]=sum+96;
            s++;
            p=p-3;

        }
        else{
            dataa[s]=(data[p]-'0')+96;
            s++;
            p--;
        }

    }
    dataa[s]='\0';
    printf("%s",strrev(dataa));
    printf("\n");
   }
     
    return 0;
}