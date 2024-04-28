t#include<bits/stdc++.h>
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

int c=0;

void dfs(int si , int sj){

    vis[si][sj] = true;
    c++;
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

     
      vector<int>ans;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c=0;
          if(adj[i][j]!='#' && vis[i][j]==false){
            dfs(i,j);
          }
          if(c!=0) ans.push_back(c);
          
           
        }
    
     }
     sort(ans.begin(),ans.end());
     if(!ans.empty()){
     for(auto val : ans){
        cout<<val<<" ";
     }
     }
     else {
        cout<<0<<endl;
     }
    
     
     
    return 0;

}