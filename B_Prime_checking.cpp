#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool prime(ll n){
    if(n<2) return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll n;
   cin>>n;
   if(prime(n))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;  
     
    return 0;

}