#include<stdio.h>
int main()
{
	 int hcf, i,j,hcf1,count=0;;
	int n,data[1000];
  scanf("%d",&n);
  for(int k=0;k<n;k++){
    scanf("%d",&data[k]);
  }

  
	
	int l=data[n-1];
	i=0;
	while(data[i]!=l){
    
     for(j=1;j<=data[i];j++){
      if(data[i]%j==0 && data[i+1]%j==0){
        hcf=j;
      }
     }
     if(hcf == 1)
	 {
    i++;
	   continue;
	 }
    
     else{
     int  g=1;
      while(1){
        int p=data[i]+g;
        for(int gg=1;gg<=p;gg++){
          if(p%gg==0 && data[i+1]%gg==0){
             hcf1=gg;
          }
        }
        if(hcf1==1){
            n=n+1;
            for(int pp=n;pp>i;pp--){
              data[pp]=data[pp-1];
            }
            data[i+1]=p;
            i++;
            count++;
            break;
          
        }
        else{
          g++;
        }
      }
         
     }
  }
  printf("%d\n",count);
     for(int l=0;l<n;l++){
      printf("%d ",data[l]);
     }
	 
	 return 0;
}