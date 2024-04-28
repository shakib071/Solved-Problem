#include<stdio.h>
int main(){
    
   int t,n,i;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&n);
    int data[n];

    if(n%4 != 0){
        printf("NO\n");
    }
    else{
        int p=n/2;
        int m=1,mm=2;
        int sumeven=0,sumodd=0;

        for(int j=0;j<p;j++){
        data[j]=mm;
        mm=mm+2;
        sumeven=sumeven+data[j];
        }
        for(int j=p;j<n;j++){
            data[j]=m;
            m=m+2;
            sumodd=sumodd+data[j];
        }
       if(sumeven==sumodd){
        printf("YES\n");
        for(int k=0;k<n;k++){
            printf("%d ",data[k]);
        }
        printf("\n");
       }
       else{
        int kk=sumeven-sumodd;
        data[n-1]=data[n-1]+kk;
        printf("YES\n");
        for(int l=0;l<n;l++){
            printf("%d ",data[l]);
        }
        printf("\n");
       }
   }
   }
     
    return 0;
}