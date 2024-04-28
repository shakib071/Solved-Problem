#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   float n,m;
   cin>>n>>m;

   cout<<"floor "<<n<<" / "<<m<<" = "<<floor(n/m)<<endl;  
   cout<<"ceil "<<n<<" / "<<m<<" = "<<ceil(n/m)<<endl;  
   cout<<"round "<<n<<" / "<<m<<" = "<<round(n/m)<<endl;  
     
    return 0;

}