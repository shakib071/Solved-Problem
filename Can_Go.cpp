#include<bits/stdc++.h>
# define ll long long int 
using namespace std;

const ll N=1e3+5;
vector<pair<ll,ll>>adj[N];

ll dis[N];

void dijkstra(ll src){
    queue<pair<ll,ll>>q;

    q.push({src,0});
    dis[src]=0;

    while(!q.empty()){
        pair<ll,ll> parent=q.front();
        q.pop();
        ll node= parent.first;
        ll cost=parent.second;

        for(pair<int,int> child : adj[node]){
            ll childNode=child.first;
            ll childCost=child.second;
            if(cost + childCost<dis[childNode]){
                dis[childNode]=cost+ childCost;
                q.push({childNode,dis[childNode]});
            }
        }
    }
}


int main(){
     
     ll n,e;
     cin>>n>>e;


     while(e--){
        ll a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
     }
   
     for(int i=0;i<=n;i++){
        dis[i]=INT_MAX;
     }

     ll s;
     cin>>s;
     
     dijkstra(s);
     
     ll t;
     cin>>t;

     while(t--){
        ll d,dw;
        cin>>d>>dw;
         if(dis[d]<=dw){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
      
     
    return 0;

}