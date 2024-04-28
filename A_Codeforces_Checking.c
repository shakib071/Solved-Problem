#include<stdio.h>
int main(){
    
   char a;
   int t,i;
   scanf("%d",&t);
   
   for(i=1;i<=t;i++){
    scanf(" %c",&a);
    if(a=='c' || a=='o' || a=='d' || a=='e'||a=='f'||a=='o' || a=='r' || a=='c'||a=='e'||a=='s'){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

   }
     
    return 0;
}