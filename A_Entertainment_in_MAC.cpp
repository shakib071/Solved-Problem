#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(ll n,string s){
    int size=s.size();
    bool revers=false;
    for(int i=0;i<size/2;i++){
        if(s[i]>s[size-1-i]){
           revers=true;
           break;
        }
        else if(s[i]==s[size-1-i]) continue;
        else break;
    }

    // cout<<revers<<endl;

    if(revers==true){
     string ss=s;
    
     reverse(ss.begin(),ss.end());
     
     cout<<ss+s<<endl;

    }
    else{
        cout<<s<<endl;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    ll n;
    string s;
    cin>>n;
    cin>>s;
    solve(n,s);
   }  
     
    return 0;

}