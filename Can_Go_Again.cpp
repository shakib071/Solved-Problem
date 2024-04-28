
#include<bits/stdc++.h>

#define ll long long int

using namespace std;

class Edge{
    public:
    ll a,b,w;

    Edge(ll uu,ll vv,ll cc){
        a=uu;
        b=vv;
        w=cc;
    }
};

const ll NN=1e11+5;
const int N=1e3+5;
ll dis[N];

int main(){
     
     ll n,e;
     cin>>n>>e;

     vector<Edge>EdgeList;
     while(e--){
        ll a,b,w;
        cin>>a>>b>>w;

        EdgeList.push_back(Edge(a,b,w));

     }

     for(int i=0;i<N;i++){
        dis[i]=NN;
     }

     ll s;
     cin>>s;
     dis[s]=0;
     
     for(int i=1;i<=n-1;i++) {
     for(Edge ed : EdgeList){
        ll u,v,c;
        u=ed.a;
        v=ed.b;
        c=ed.w;

        if(dis[u]<NN && dis[u]+c <dis[v] ){
           dis[v]=dis[u]+c;

        }

       }
     }

     bool cycle= false;

      for(Edge ed : EdgeList){
        ll u,v,c;
        u=ed.a;
        v=ed.b;
        c=ed.w;

        if(dis[u]<NN && dis[u]+c <dis[v] ){
            cycle=true;
        }

       }
     
     if(cycle){
        cout<<"Negative Cycle Detected"<<endl;
     }
     else {
        ll t;
        cin>>t;
      while(t--){
        ll d;
        cin>>d;
        if(dis[d]==NN){
            cout<<"Not Possible"<<endl;
        }
        else{
            cout<<dis[d]<<endl;
        }
     }
     }
    
     
    return 0;

}