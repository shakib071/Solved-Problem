#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a;

    ll sum=0;  ll x;
    for(int i=0;i<(n+m);i++){
    
      cin>>x;
      a.push_back(x);
      
    }
   
    sort(a.begin(),a.end()-1);
    reverse(a.begin(),a.end());
  
    for(int i=0;i<n;i++){
      sum+=a[i];
    }
    cout<<sum<<endl;
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;  

   while(t--) solve();
     
    return 0;

}