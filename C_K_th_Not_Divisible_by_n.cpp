#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n,ll k){
    ll div=k/(n-1);
    ll mod=k%(n-1);
    if(mod==0){
      ll ans=n*(div-1)+(n-1);
      cout<<ans<<endl;
    }
    else {
      ll ans=(n*div)+mod;
      cout<<ans<<endl;
    }  
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    ll n,k;
    cin>>n>>k;
    solve(n,k);
   }  
     
    return 0;

}