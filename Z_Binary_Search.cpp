#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int n,q,x;
    cin>>n>>q;

    int data[n];

    for(int i=0;i<n;i++){
        cin>>data[i];
    }
   
   sort(data,data+n);

   while(q--){
     
     cin>>x;
    
    int lb=0,up=n-1,flag=0;

    while(lb<=up){
       int mid=(lb+up)/2;
       if(data[mid]==x){
        cout<<"found"<<endl;
        flag=1;
        break;
       }

       else if(data[mid]<x){
        lb=mid+1;
       }
       else up=mid-1;

    }

    if(flag==0)cout<<"not found"<<endl;


   }
     
    return 0;

}