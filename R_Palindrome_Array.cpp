#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool palimdrom(int i,int n,ll data[]){
    if(i>n) return true;
    if(data[i]!=data[n]){
        return false;
    }
   return palimdrom(i+1,n-1,data);
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll n;
     cin>>n;
    ll data[n];

    for(int i=0;i<n;i++){
        cin>>data[i];
    }

    if(palimdrom(0,n-1,data)){

        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
     
    return 0;

}