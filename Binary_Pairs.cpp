#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin>>n;
   string s;
   cin>>s;
   int count=0;
    for(int i=1;i<n;i++){
        if((s[i]=='1' && s[i-1]=='0')||(s[i]=='0' && s[i-1]=='1') ){
           count++;
        }
        
    }
    cout<<count<<endl;
}

int main(){
     
 
   int t;
   cin>>t;
   while(t--){
    solve();
   }  
     
    return 0;

}