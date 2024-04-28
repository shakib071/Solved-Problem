#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll n,ll k){
    if(n%2==0){
        if(n>=(k*2)){
            cout<<"YES"<<endl;
            for(int i=1;i<=k-1;i++){
                cout<<2<<" ";
            }
            cout<<(n-((k-1)*2))<<endl;
        }
        else if((n-k+1)%2==1){
            cout<<"YES"<<endl;
            for(int i=1;i<=k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-k+1<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else {
       if((n-k+1)%2==1){
            cout<<"YES"<<endl;
            for(int i=1;i<=k-1;i++){
                cout<<1<<" ";
            }
            cout<<n-k+1<<endl;
       }
       else cout<<"NO"<<endl;
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