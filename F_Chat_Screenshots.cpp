#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N=200005;

void solve(){
    // adj[N].clear();
    int n,k;
    cin>>n>>k;
    vector<int> adj[n+1];
    vector<int> input[k];

    for(int i=0;i<k;i++){
        for(int j=0,x;j<n;j++){
            cin>>x;
            input[i].push_back(x);
        }
    }

    // for(int i=0;i<k;i++){
    //     for(auto it : input[i]){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }
    
    if(k==1 || n==1 ||(n==2 && k==2)){
        cout<<"YES"<<endl;
    }
    else{
        map<pair<int,int>,int>mp;
        vector<int>indeg(n+1,0);
        int count=0;
        for(int i=0;i<k;i++){
            for(int j=1;j<n-1;j++){
              if(!mp[{input[i][j],input[i][j+1]}]){
                // cout<<input[i][j]<<" "<<input[i][j+1]<<endl;
                adj[input[i][j]].push_back(input[i][j+1]);
                mp[{input[i][j],input[i][j+1]}]++;
                indeg[input[i][j+1]]++;
              }
            }
            
        }

        queue<int>pq;

        for(int i=1;i<=n;i++){
            if(indeg[i]==0){
                pq.push(i);
            }
        }

        while(!pq.empty()){
           count++;
           int xx=pq.front();
           pq.pop();

           for(auto it : adj[xx]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
           }
        }

        if(count==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    solve();
   }  
     
    return 0;

}