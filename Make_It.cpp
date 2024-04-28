#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N=1e5+5;

int dp[N];

bool make_it(int i,int n){

    if(i==n) return true;
    if(i>n) return false;

    if(dp[i]!=-1) return dp[i];
    
    bool op1=make_it(i+3,n);
    bool op2=make_it(i*2,n);
    return dp[i]= op1 || op2;
}

int main(){
     
   int t;
   cin>>t;

   while (t--){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++) dp[i]=-1;
    if(make_it(1,n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
   
     
     
    return 0;

}