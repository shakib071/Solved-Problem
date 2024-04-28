#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int c=0;
void dfs(int si, int sj)
{
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    c++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false && a[ci][cj]=='.')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int area=INT_MAX;

  
    memset(vis, false, sizeof(vis));
    
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {   
            c=0;
            if(a[i][j]=='.' && vis[i][j]==false){
                dfs(i,j);
                if(c<area){
                    area=c;
                }
            }
        }
    }

    if(area==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<area<<endl;
    }

    
    return 0;
}