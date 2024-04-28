#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N=1e5+5;
vector<ll>v(N);
ll solve(int l,int up){
      if(up<l) return 0;
    return v[up]+solve(l,up-1);
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int n,m;
     cin>>n>>m;
     for(int i=0,x;i<n;i++){
        cin>>x;
        v[i]=x;
     }

     cout<<solve(n-m,n-1)<<endl;
     
    return 0;

}