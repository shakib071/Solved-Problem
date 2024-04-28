#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll a,b,m;
    cin>>a>>b>>m;
    ll ans=(m/a)+(m/b)+2;//add 2 for ceiling
    cout<<ans<<endl;
    return;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
    ll t;
    cin>>t;
     while(t--){
        solve();
     }
     
    return 0;

}