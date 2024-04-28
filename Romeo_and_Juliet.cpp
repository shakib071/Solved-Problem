#include<bits/stdc++.h>
using namespace std;
const int N=1e5+4;
vector<int> adj[N];
bool vis1[N];
// bool vis2[N];
vector<int>level1(N,-1);
// vector<int>level2(N,-1);
void bfs1(int src)
{
    queue<int> q;
    q.push(src);
    vis1[src] = true;
    level1[src]=0;
    //level track rakhbe
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj[par])
        {
            if (vis1[child] == false)
            {
                q.push(child);
                vis1[child] = true;
                level1[child]=level1[par]+1;
            }
        }
    }
}
// void bfs2(int src)
// {
//     queue<int> q;
//     q.push(src);
//     vis2[src] = true;
//     level2[src]=0;
//     //level track rakhbe
//     while (!q.empty())
//     {
//         int par = q.front();
//         q.pop();
     
//         for (int child : adj[par])
//         {
//             if (vis2[child] == false)
//             {
//                 q.push(child);
//                 vis2[child] = true;
//                 level2[child]=level2[par]+1;
//             }
//         }
//     }
// }

int main(){
     
     int n,e;
     cin>>n>>e;

     while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
     }

     int x,y,k;
     cin>>x>>y>>k;
     bfs1(x);
    //  cout<<level1[y]<<endl;
    int l;
    if(level1[y]%2==0){
        l=level1[y]/2;
    }
    else{
        l=level1[y]/2+1;
    }


    if(level1[y]==-1){
        cout<<"NO"<<endl;
    }

    else if( level1[y]<=k){
         cout<<"YES"<<endl;
     }

     else if(l <=k){
          cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
     
     
     
    return 0;

}