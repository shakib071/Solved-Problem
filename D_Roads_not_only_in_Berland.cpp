#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N=1001;
int par[N];
int groupsize[N];

void dsu_initialize(int n){
    for(int i=0;i<=n;i++){
        par[i]=-1;
        groupsize[i]=1;
    }
}

int dsu_find(int node){
    if(par[node]==-1) return node;

    return par[node]=dsu_find(par[node]);
}

void dsu_unionbySize(int node1,int node2){
    int leaderA=dsu_find(node1);
    int leaderB=dsu_find(node2);

    if(groupsize[leaderA]>groupsize[leaderB]){
        par[leaderB]=leaderA;
        groupsize[leaderA]+=groupsize[leaderB];

    }
    else {
         par[leaderA]=leaderB;
        groupsize[leaderB]+=groupsize[leaderA];
    }
}


int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     vector<pair<int,int>>add;
     vector<pair<int,int>>remove;
     int n;
     cin>>n;
     dsu_initialize(n);
     int t=n-1;
     while(t--){
        int a,b;
        cin>>a>>b;
        int leaderA=dsu_find(a);
        int leaderB=dsu_find(b);
        if(leaderA==leaderB){
          remove.push_back({a,b});
        }
        else{
            dsu_unionbySize(a,b);
        }
     }
     cout<<remove.size()<<endl;

     for(int i=2;i<=n;i++){
        if(dsu_find(1)!=dsu_find(i)){
            dsu_unionbySize(1,i);
            add.push_back({1,i});
        }
     }
     for(int i=0;i<remove.size();i++){
        cout<<remove[i].first<<" "<<remove[i].second<<" "<<add[i].first<<" "<<add[i].second<<endl;
     }

     
    return 0;

}