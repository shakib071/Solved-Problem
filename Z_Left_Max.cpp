#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N=1e5+5;

ll dp[N];

void solve(int i,int n,ll data[]){
  if(i>n)return;
  dp[i]=max(dp[i-1],data[i]);

  solve(i+1,n,data);

}

void print(int n){
 for(int i=0;i<n;i++){
  cout<<dp[i]<<" ";
 }
 cout<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
   ll data[n];

   for(int i=0;i<n;i++){
    cin>>data[i];
   }
   dp[0]=data[0];
  //  cout<<dp[0]  ;
   solve(1,n-1,data);
   print(n);

     
    return 0;

}