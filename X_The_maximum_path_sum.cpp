#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N=-1000000;
ll da[12][12];
ll maxpathsum(ll i,ll j,ll n,ll m){
    if(i==n && j==m)return da[i][j];
    if(i>n || j> m) return N;

    ll op1=maxpathsum(i+1,j,n,m);
    ll op2=maxpathsum(i,j+1,n,m);
    return (max(op1,op2))+da[i][j];
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll n,m;
     cin>>n>>m;
   

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>da[i][j];
        }
     } 
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<data[i][j]<<" ";
    //     }
    //     cout<<endl;
    //  }

    cout<<maxpathsum(0,0,n-1,m-1)<<endl;
     
    return 0;

}