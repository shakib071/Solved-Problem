#include<bits/stdc++.h>
using namespace std;

const int N=1000;
char adj[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n,m;


bool valid(int i,int j){
     if (i<0||i>=n || j<0||j>=m)
        return false;
    return true;
}

void dfs(int si , int sj){

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
     
       cin>>n>>m;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>adj[i][j];
           
        }
     }

     int count=0;

      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(adj[i][j]!='#' && vis[i][j]==false){
            count++;
            dfs(i,j);
          }
           
        }
    
     }
     cout<<count<<endl;
    
     
     
    return 0;

}