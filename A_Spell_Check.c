#include<stdio.h>
#include<string.h>
int main(){

    int t,i,n,d,dd;
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d",&n);
        char arr[n];
        scanf("%s",arr);
        
        if(n==5){
            dd=1;
            for(int k=0;k<n-1;k++){
               for(int l=k+1;k<n;k++){
                if(arr[k]==arr[l]){
                    dd=0;
                }
               }
            }

           if(dd=1){
           for(int j=0;j<n;j++){
            if(arr[j]=='T' || arr[j]=='i' || arr[j]=='m' || arr[j]=='u' || arr[j]=='r'){
              d=0;
            }
            else{
                d=1;
                break;
            }
           }
        
        if(d==0){
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

        else{
            printf("NO\n");
        }
    }
     
    return 0;
}