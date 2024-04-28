#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    // cout<<(b&c)<<endl;
    if((a&b)==a && (a&b)==b){
        cout<<c<<endl;
    }
   else if((a&c)==a && (a&c)==c){
        cout<<b<<endl;
    }
    else{
        cout<<a<<endl;
    }
   }  
     
    return 0;

}