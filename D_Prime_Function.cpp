#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

bool prime(int t){
    if(t<2) return false;
    for(int i=2;i*i<=t;i++){
        if(t%i==0){
            return false;
        }
    }
    return true;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int n;
     cin>>n;
     while(n--){
        int t;
        cin>>t;
       if(prime(t)) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
     }
     
    return 0;

}