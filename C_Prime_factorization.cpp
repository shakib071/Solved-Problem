#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
       bool vis[n+1];
   
     
     memset(vis,false,sizeof(vis));
     vector<int>v;
     
     for(int i=2;i<=n;i++){
        if(vis[i]==false){
            v.push_back(i);
            vis[i]=true;
         for(int j=2*i;j<=n;j=j+i){
              vis[j]=true;
         }
        }
     }

    //  for(int val : v) cout<<val<<" ";
      vector<int>ans;
      int ii=0,nn=n;
        
        while(nn>0 && ii<v.size()){
            while(nn%v[ii]==0){
                nn=nn/v[ii];
               ans.push_back(v[ii]);
            }
            ii++;

        }

        for(int i=0;i<ans.size();i++) {
            cout<<ans[i];
            if(i!=ans.size()-1) cout<<"*";
        }
        cout<<endl;
     
    return 0;

}