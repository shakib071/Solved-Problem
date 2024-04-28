#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=a;
    ans+=(b/3);
    b=b%3;
    if(b==0 and c==0){
        cout<<ans<<endl;
        return;
    }
   else if(b!=0 && c>=(3-b)){
      ans+=1;
      c-=(3-b);
      ans+=(c/3);
      c=c%3;
      if(c!=0){
        ans+=1;
      }
      cout<<ans<<endl;
    }
    else if(b==0 and c!=0){
        ans+=(c/3);
      c=c%3;
      if(c!=0){
        ans+=1;
      }
      cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
       
    }
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