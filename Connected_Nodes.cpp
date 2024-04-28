#include<bits/stdc++.h>
using namespace std;

const int N=1e3+1;
vector<int>adj[N];

int main(){
     
      int n,e;
     cin>>n>>e;
     for(int i=1;i<=e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
     }
     for(int i=0;i<n;i++){
        if(!adj[i].empty()){
            sort(adj[i].begin(),adj[i].end(),greater<int>());
        }
     }

     int q;
     cin>>q;
     while(q--){
        int x;
        cin>>x;
        if(adj[x].empty()) {
            cout<<-1<<endl;
        }
        else{
            for(auto val : adj[x]){
            cout<<val<<" ";
        }
        cout<<endl;
        }
        
     }


     
    return 0;

}