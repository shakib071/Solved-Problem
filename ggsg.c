#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int flag =0;
    int count=0;
 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
 
        // max = a[i];
        
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
 
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
 
    if(flag==0)
    {
        while(a[n-1]%2==0)
        {
            a[n-1]=a[n-1]/2;
            count++;
        }
    }
    else if(flag==1){
        printf("0\n");
        return 0;
    }
 
    printf("%d\n",count-1);
 
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",a[i]);
    // }
   return 0;
}
