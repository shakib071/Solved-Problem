#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[1001][1001];
//need n

bool find(int need,int a[],int n){
    if(n<0){
        if(need==0) return true;
        else return false;
    }
    if(dp[need][n]!=-1) return dp[need][n];
    if(a[n]<=need){
        bool op1=find(need-a[n],a,n-1);
        bool op2=find(need,a,n-1);
        return dp[need][n]= op1 || op2;
    }
    else {
         bool op2=find(need,a,n-1);
         return dp[need][n]= op2;
    }
}

int main(){
     
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int a[n];
    int need=1000-m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(need==0) cout<<"YES"<<endl;
    else {
        for(int i=0;i<=need;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=-1;
            }
        }
        if(find(need,a,n-1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
  }
     
     
    return 0;

}