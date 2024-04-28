#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int solve(){
    int n;
    cin>>n;
    int ans=-1;
    for(int i=0,x;i<n;i++){
        cin>>x;
        if(ans==-1) ans=x;
        else ans&=x;
    }
    return ans;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    cout<<solve()<<endl;
   }  
     
    return 0;

}