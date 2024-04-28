#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool reachvalue(ll n,ll i){
    if(i>n) return false;
    if(i==n) return true;

    return (reachvalue(n,i*10) || reachvalue(n,i*20));
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    ll n;
    cin>>n;
    if(reachvalue(n,1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }  
     
    return 0;

}