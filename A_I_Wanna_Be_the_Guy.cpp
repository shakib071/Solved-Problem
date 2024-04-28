#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     ll n;
     cin>>n;
     bool vis[n+1];
     memset(vis,false,sizeof(vis));
     
     ll p,count=0;
     cin>>p;
     for(int i=0,x;i<p;i++){
        cin>>x;
        if(vis[x]==false){
            vis[x]=true;
            count++;
        }
     }
     ll q;
     cin>>q;
     for(int i=0,x;i<q;i++){
        cin>>x;
        if(vis[x]==false){
            vis[x]=true;
            count++;
        }
     }

     if(count==n){
        cout<<"I become the guy."<<endl;
     }
     else{
        cout<<"Oh, my keyboard!"<<endl;
     }

     
    return 0;

}