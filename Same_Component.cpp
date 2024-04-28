#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;

char adj[N][N];
bool vis[N][N];

vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};

int n,m;

bool valid(int si,int sj){
    if(si<0 || si>=n || sj<0 || sj>=n){
        return false;
    }
    return true;
}

bool ans=false;

void dfs(int si,int sj,int di,int dj){
    vis[si][sj]=true;
    if(si==di && sj==dj){
        ans=true;
    }

    for(int i=0;i<4;i++){
     int ci=si+d[i].first;
     int cj=sj+d[i].second;
     if(valid(ci,cj)==true && vis[ci][cj]==false && adj[ci][cj]=='.'){
        dfs(ci,cj,di,dj);
     }
    }
}

int main(){
     
     cin>>n>>m;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>adj[i][j];
        }
     }


     memset(vis,false,sizeof(vis));

     int si,sj;
     cin>>si>>sj;
     int di,dj;
     cin>>di>>dj;
      
     ans=false;

     dfs(si,sj,di,dj);
    
    if(ans==true){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
     
     
    return 0;

}