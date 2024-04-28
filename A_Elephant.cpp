#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int ans=0;
   int n;
   cin>>n;

   for(int i=5;i>0;i--){
    if(n==0)break;
    ans+=n/i;
    n=n%i;
   }  
   cout<<ans<<endl;
     
    return 0;

}