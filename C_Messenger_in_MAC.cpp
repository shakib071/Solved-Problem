#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b){
 return a.second<b.second;
}

void solve(){
    ll n,l;
    cin>>n>>l;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});

    }
    sort(v.begin(),v.end(),cmp);
  
    ll ans=0;
    for(int i=0;i<n;i++){
        priority_queue<ll>pq;
        ll sum=0;
    
        for(int j=i;j<n;j++){
                sum+=v[j].first;
                pq.push(v[j].first);
            while(!pq.empty() && sum+v[j].second-v[i].second>l){
                sum-=pq.top();
                pq.pop();
            }
            
            if(pq.size()>ans){
                ans=pq.size();
            }
        }
       
        
    }
    cout<<ans<<endl;
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