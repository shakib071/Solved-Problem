#include<stdio.h>
int main()
{
	 int hcf,i,j,hcf1,count=0,min,high;
	int n;
  int data[1000];
  scanf("%d",&n);
  for(int k=0;k<n;k++){
    scanf("%d",&data[k]);
  }

  
	i=0;
	while(i!=(n-1)){
  
   
    if (data[i]<data[i+1])
    {
       min=data[i];
       high=data[i+1];
    }
    else{
       min=data[i+1];
       high=data[i];
    }

    if(data[i]==data[i+1] && data[i]>1 && data[i+1]>1){
      hcf=-20;
    }
    else if(data[i]==1 || data[i+1]==1){
      hcf=1;
    }

  else  if((data[i]%2==0 &&data[i]>2 && data[i+1]%2==0 && data[i+1]>2)){
      hcf=-21;
    }
    

   else if(high % min==0){
        hcf=-22;
      }

    else{
    for(j=1;j<=min/2;j=j+2){
     if(data[i]%j==0 && data[i+1]%j==0){
        hcf=j;
        
      }
       if(hcf >1){
          break;
        }
     }
    }

     if(hcf == 1)
	 {
    i++;
	   continue;
	 }
     else{
            n=n+1;
            for(int pp=n;pp>i;pp--){
              data[pp]=data[pp-1];
            }
            data[i+1]=1;
            i=i+2;
            count++;
        
          
        }

     }
  
  

  printf("%d\n",count);
     for(int ll=0;ll<n;ll++){
      printf("%d ",data[ll]);
     }
	 
	 return 0;
}