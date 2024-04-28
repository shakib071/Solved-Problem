#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int t;
   cin>>t;

   while(t--){
    int n;
    cin>>n;
    int data[n];
    for(int i=0;i<n;i++){
        cin>>data[i];
    
   }
   int ans=0;
   for(int i=0;i<n;i++){
        // cout<<data[i]<<" ";
        if(i==0){
            ans=data[i];
        }
        else{
            if(ans==data[i]){
                ans=ans+data[i];
            }
            else if(ans>data[i]){
               int p=data[i]-(ans%data[i]);
               ans=ans+p;
            }
            else if(ans<data[i]){
                ans=data[i];
            }
        }
    
   }
   cout<<ans<<endl;

   }

     
    return 0;

}