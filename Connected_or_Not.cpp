#include<bits/stdc++.h>
using namespace std;

const int N=1e3+1;
vector<int>adj[N];
// bool vis[N];

bool valid(int a,int b){
    if(a==b) return true;
    for(auto val : adj[a]){
        if(val==b) return true;
    }
    return false;
}


int main(){
     
     int n,e;
     cin>>n>>e;
     for(int i=1;i<=e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
     }
     int q;
     cin>>q;
     while(q--){
        int a,b;
        cin>>a>>b;
        if(valid(a,b)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
     
    return 0;

}