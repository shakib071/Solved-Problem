#include<bits/stdc++.h>
#define  ll long long int
using namespace std;

const ll N=1e5+5;
  ll n,m;
vector<pair<ll,ll>>v[N];
// int dis[N];
// int par[N];//parent array
const ll NN=1e17;
vector<ll>dis(N,NN);
vector<ll> par(N);


class cmp{
    public:
    bool operator()(pair<ll,ll>a,pair<ll,ll>b){
        return a.second>b.second;
    }
};

void dijkstra(ll src){
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp>pq;

    pq.push({src,0});
    dis[src]=0;

    while(!pq.empty()){
        pair<ll,ll> parent=pq.top();
        pq.pop();
       ll node=parent.first;
        ll cost=parent.second;

        for(pair<ll,ll>child : v[node]){
           ll childnode=child.first;
           ll childcost=child.second;

            if(cost+childcost<dis[childnode]){
                dis[childnode]=cost+childcost;
                pq.push({childnode,dis[childnode]});
                par[childnode]=node;
            }
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   
     cin>>n>>m;
     while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
         v[b].push_back({a,w});

     }

     for(int i=1;i<N;i++){
        par[i]=i;
     }

     dijkstra(1);
     vector<ll>ans;

     if(dis[n]!=NN){
         ans.push_back(n);
      ll node=n,parr=par[node];
    while(parr!=node){
      ans.push_back(parr);
        node=parr;
        parr=par[node];
    }
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
     }
     else {
        cout<<"-1"<<endl;
     }
     
    return 0;

}