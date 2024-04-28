#include<stdio.h>
#include<string.h>
int main(){
    
   int n,i,p=0;
   scanf("%d",&n);
   char st[n][3],st1[]="X++",st2[]="++X";
// for(int j=0;j<3;j++){ 
   for(i=0;i<n;i++){
    scanf("%s",&st[i]);
    if(strcmp(st[i],st1)==0 || strcmp(st[i],st2)==0 ) {
     p++;
    }
    else{
      p--;
    }
  
}

   printf("%d",p);

     
    return 0;
}