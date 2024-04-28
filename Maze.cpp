#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
bool vis[N][N];
int dis[N][N];
pair<int, int> parent[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char adj[N][N];

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj)==true && !vis[ci][cj] && adj[ci][cj] != '#') {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
                parent[ci][cj] = make_pair(a, b);
            }
        }
    }
}
 

int main(){
        cin >> n >> m;
    int di, dj, ri, rj;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            parent[i][j] = make_pair(-1, -1);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> adj[i][j];

            if (adj[i][j] == 'R') {
                ri = i;
                rj = j;
            }
            if (adj[i][j] == 'D') {
                di = i;
                dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(ri, rj);

    if(dis[di][dj]==-1){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<adj[i][j];
            }
            cout<<endl;
        }
    }
    else {
        int aa = di, bb = dj;
    while (parent[aa][bb].first != -1) {
       
        int a1 = parent[aa][bb].first;
        int a2 = parent[aa][bb].second;
        if(adj[a1][a2]=='R') break;
        adj[a1][a2]='X';
        aa = a1;
        bb = a2;
    }

      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<adj[i][j];
            }
            cout<<endl;
        }

    }
     
     
    return 0;

}