#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void binary(ll n){
    if(n==0) return ;
    binary(n/2);
    cout<<n%2;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int t;
     cin>>t;
     while(t--){
        ll x;
        cin>>x;
        binary(x);
        cout<<endl;
     }
     
    return 0;

}