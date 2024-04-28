#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N=302;
 ll adj[N][N];
  
  ll shortestdis(ll n,ll a,ll b,ll c){
    adj[a][b]=min(c,adj[a][b]);
    adj[b][a]=min(c,adj[a][b]);
    ll sum=0;
    //  for(int k=1;k<=n;k++){
    //     for(int i=1;i<=n;i++){
    //         for(int j=1; j <= n ;j++){
    //           if(adj[i][k]+adj[k][j]<adj[i][j]){
    //             adj[i][j]=adj[i][k]+adj[k][j];
                
    //           }
                
    //         }
          
    //     }
      
    //  }
    //   for(int i=1;i<=n;i++){
    //         for(int j=1; j <= n ;j++){
    //             // cout<<adj[i][j]<<" ";
    //            sum+=adj[i][j];
    //         }
    //         // cout<<endl;
    //     }
    // TLE Khay
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            adj[i][j]=min(adj[i][j],(adj[i][a]+c+adj[b][j]));
            adj[i][j]=min(adj[i][j],(adj[i][b]+c+adj[a][j]));
            sum+=adj[i][j];
        }
    }


     return sum/2;
  }

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   ll n,k;
   
   cin>>n;
  
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>adj[i][j];
    }
   }
//     for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       cout<<adj[i][j]<<" ";
//     }
//     cout<<endl;
//    }    
   cin>>k;
  while(k--){
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<shortestdis(n,a,b,c)<<" ";
    // shortestdis(n,a,b,c);
  }




     
    return 0;

}