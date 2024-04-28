#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll t,n;
   cin>>t;

   while(t--){
    cin>>n;
    ll ans=0;
    forn(n){
        ll x;
        cin>>x;
        ans=ans|x;
    }
    cout<<ans<<endl;
   }  
     
    return 0;

}