#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll k,n,w;
   cin>>k>>n>>w;
   
   ll cost=(k*w*(w+1))/2;
   if(cost>n){
    ll borrow=cost-n;
    cout<<borrow<<endl;
   }
   else{
    cout<<0<<endl;
   }
  
     
    return 0;

}