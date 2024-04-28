#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 vector<int>divisor;

 void div(ll n){
    divisor.push_back(1);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
          divisor.push_back(i);
          if(n/i!=i)
           divisor.push_back(n/i);
        }
    }
 }

ll solve(ll data[], vector<ll> presum,ll n){
  divisor.clear();
  div(n);

//   for(int i=0;i<divisor.size();i++){
//     cout<<divisor[i]<<" ";
//   }
//   cout<<endl;

ll max=-1;
vector<ll>ans;
  
  for(int j=0;j<divisor.size();j++){
    int d=divisor[j];
    ans.clear();

    for(int i=d-1;i<presum.size();i=i+d){
        if(i-d<0){
            ans.push_back(presum[i]);
        }
        else{
            ans.push_back(presum[i]-presum[i-d]);
        }
    }
    
    sort(ans.begin(),ans.end());

    if(abs(ans[ans.size()-1]-ans[0])>max){
        max=ans[ans.size()-1]-ans[0];
    }
  
    
  }
  

 return max;
}

int main(){
     
   ll t;
   cin>>t;


   while(t--){
  
     ll n;
     cin>>n;
     ll data[n];
     vector<ll> presum;

     for(int i=0;i<n;i++){
        cin>>data[i];
   
       if(i==0){
        presum.push_back(data[i]);
       }
       else{
         presum.push_back(presum[i-1]+data[i]);
       }
       
     }
     if(n==1){
        cout<<0<<endl;
     }
     else{
       cout<<solve(data,presum,n)<<endl;
     }

   }  
     
    return 0;

}