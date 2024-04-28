#include<stdio.h>
#include<string.h>
int main(){
    
   int n,m,p,q,flag=0,flag2=0,flag3=0,flag4=0;
   scanf("%d %d",&n,&m);
   char s[n+1],t[m+1];
   scanf("%s %s",s,t);

   int ln1=strlen(s);
   int ln2=strlen(t);

   if((ln1-1)>ln2){
    printf("NO");
   }
   else{
    for(int i=0;i<ln1;i++){
        if(s[i]=='*'){
            p=i;
            flag=1;
        }
    }
    if(flag==1){
        for(int j=0;j<p;j++){
            if(s[j]!=t[j]){
               flag2=1;
               break;
            }
        }
        if(flag2==0){
            q=ln2-1;
            for(int a=ln1-1;a>p;a--){
                if(s[a]!=t[q]){
                    flag4=1;
                    break;
                }
                q--;
            }
            if(flag4==0){
                printf("YES");
            }
            else{
                printf("NO");
            }

        }
        else{
            printf("NO");
        }
    }
    else{
        if(ln1==ln2){
           for(int j=0;j<ln1;j++){
            if(s[j]!=t[j]){
                flag3=1;
                break;
            }
           }
           if(flag3==0){
            printf("YES");
           }
           else{
            printf("NO");
           }
        }
        else{
            printf("NO");
        }
    }

   }
     
    return 0;
}