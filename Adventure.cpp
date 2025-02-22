#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N=1e3+6;

int dp[N][N];

int adventure(int n,int weight[],int value[],int w){
    if(n<0 || w==0) return 0;
    if(dp[n][w]!=-1) return dp[n][w];
    if(weight[n]<=w){
       int op1=adventure(n-1,weight,value,w-weight[n])+value[n];
       int op2=adventure(n-1,weight,value,w);
       return dp[n][w]= max(op1,op2);
    }
    else{
        int op2=adventure(n-1,weight,value,w);
        return dp[n][w]= op2;
    }
}

int main(){
     

   int t;
   cin>>t;
   while(t--){
    int n,w;
    cin>>n>>w;
    int weight[n],value[n];
    for(int i=0;i<n;i++){
        cin>>weight[i];
    } 
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            dp[i][j]=-1;
        }
    }
    cout<<adventure(n-1,weight,value,w)<<endl;
   }  
     
    return 0;

}