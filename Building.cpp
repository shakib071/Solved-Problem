#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int parent[N];
int group_size[N];

bool vis[N];

void dsu_initialize(int n){
    for(int i=0;i<n;i++){
        parent[i]=-1;
        group_size[i]=1;
    }
}

int dsu_find(int node){
    if(parent[node]==-1) return node;
    return parent[node]=dsu_find(parent[node]);
}

void dsu_union_by_size(int node1, int node2){
    int leaderA=dsu_find(node1);
    int leaderB=dsu_find(node2);
    if(group_size[leaderA]>group_size[leaderB]){
        parent[leaderB]=leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }
    else {
        parent[leaderA]=leaderB;
        group_size[leaderB]+=group_size[leaderA];
    }
}

class edge{

    public:
    int u,v,w;

    edge(int uu,int vv,int ww){
        u=uu;
        v=vv;
        w=ww;
    }

};

bool cmp(edge a,edge b){
    return a.w<b.w;
}

int main(){

    memset(vis,false,sizeof(vis));
     
     int n,e;
     cin>>n>>e;
     dsu_initialize(n+1);
     vector<edge> edgelist;

     while(e--){
        int u,v,w;
        cin>>u>>v>>w;
        edgelist.push_back(edge(u,v,w));
     }

     sort(edgelist.begin(),edgelist.end(),cmp);
     
    long long int totalcost=0;

     for(edge ed : edgelist){
   

       int leaderU=dsu_find(ed.u);
       int leaderV=dsu_find(ed.v);
       if(leaderU == leaderV){
        continue;
       }
       else{
        dsu_union_by_size(ed.u,ed.v);
        totalcost+=ed.w;
        vis[ed.u]=true;
        vis[ed.v]=true;
       }
     }
     
     bool ans=true;

     for(int i=1;i<=n;i++){
        if(vis[i]==false){
            ans=false;
        }
     }

     if(ans){
        cout<<totalcost<<endl;

     }
     else{
        cout<<-1<<endl;
     }
     
    return 0;

}