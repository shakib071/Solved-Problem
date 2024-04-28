#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int t;
     cin>>t;

     while(t--){
        int n;
        cin>>n;
      int  data[n];
      int presum[n];
       for(int i=0;i<n;i++){
        cin>>data[i];
        if(i==0) {
            presum[i]=data[i];
        }
        else{
            presum[i]=data[i]+presum[i-1];
        }
       }

       int ans=0;

       for(int i=0;i<n-2;i++){
         if(presum[i]+presum[i+1]==presum[n-1]){
            ans++;
         }
       }
       cout<<ans<<endl;
     }
     
    return 0;

}