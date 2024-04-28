#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
      vector<int>v;
     int mult=1,count=0,n;
    cin>>n;

    while(n){
        int mod=n%10;
        if(mod!=0){
            v.push_back(mod*mult);
            count++;
        }
        n=n/10;
        mult*=10;
    }
    cout<<count<<endl;
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;
}


int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;

     while(t--) solve();
     
    return 0;

}