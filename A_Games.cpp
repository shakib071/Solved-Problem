#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   int n;
   cin>>n;
   vector<int>l(n);
   map<int,int>count;
   for(int i=0,r;i<n;i++){
    cin>>l[i]>>r;
    count[r]++;
   }  
   int ans=0;
   forn(n){
     ans+=count[l[i]];
   
   }
   cout<<ans<<endl;
     
    return 0;

}