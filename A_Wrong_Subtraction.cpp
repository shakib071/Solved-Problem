#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll n,k;
   cin>>n>>k;

   while(k){
    ll x=n%10;
    
    if(x+1<=k){
      k-=(x+1);
      n=n/10;
    }
    else{
     n=n-k;
     k=0;
    }
   }  
   cout<<n<<endl;
     
    return 0;

}