#include<bits/stdc++.h>
using namespace std;

const int N=1000;
char adj[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n,m;

bool ans=false;

bool valid(int i,int j){
     if (i<0||i>=n || j<0||j>=m)
        return false;
    return true;
}

void dfs(int si , int sj){

    if(adj[si][sj]=='B'){
        ans=true;
        return;
    }
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false && adj[ci][cj]!='#')
        {
            dfs(ci, cj);
        }
    }
}

int main(){
    ans=false;
     int si,sj;
     cin>>n>>m;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>adj[i][j];
            if(adj[i][j]=='A'){
                si=i;
                sj=j;
            }
        }
     }

     memset(vis,false,sizeof(vis));
    
     dfs(si,sj);
    if(ans){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;

}