#include<stdio.h>
int main(){
    
   int n,q,i,ss,first,last,mid,dd;
   scanf("%d %d",&n,&q);
   int data[n];
   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
   for(i=1;i<n-1;i++){
    for(int j=i;j>0;j--){
        if(data[j]<=data[j-1]){
            int temp=data[j];
            data[j]=data[j-1];
            data[j-1]=temp;
        }
    }
   }
     
   for(i=1;i<=q;i++){
        scanf("%d",&ss);
        dd=0;
        first=0;
        last=n-1;
        while(first<=last){
          mid=(first+last)/2;
          if(data[mid]==ss){
            dd=2;
            break;
          }
          else if(data[mid]>ss){
            last=mid-1;
          }
          else if (data[mid]<ss) {
            first=mid+1;
          }
          
        }
        if(dd==0){
          printf("not found\n");
        }
        else{
          printf("found\n");
        }
   }

    return 0;
}