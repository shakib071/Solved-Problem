#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll NN=1e13+5;
int main(){
     
     ll n,e;
     cin>>n>>e;

     ll adj[n+1][n+1];

     for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            adj[i][j]=NN;
            if(i==j) adj[i][j]=0;
        }
     }

     while(e--){
       int a,b,w;
       cin>>a>>b>>w;
       if(adj[a][b]>w)
           adj[a][b]=w;
     }

     for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1; j <= n ;j++){
              if(adj[i][k]+adj[k][j]<adj[i][j]){
                adj[i][j]=adj[i][k]+adj[k][j];
              }
            }
        }
     }

     ll q;
     cin>>q;

     while(q--){
        ll x,y;
        cin>>x>>y;
        if(adj[x][y]==NN){
            cout<<"-1"<<endl;
        }
        else{
            cout<<adj[x][y]<<endl;
        }
     }
     
    return 0;

}