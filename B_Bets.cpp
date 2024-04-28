#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n,m;
   int l,r,t[105],c[105];
   int a[105]={0},ans=0;
      cin>>n>>m;

   for(int i=1;i<=m;i++)  {
       cin>>l>>r>>t[i]>>c[i];
       for(int j=l;j<=r;j++){
        if(!a[j] || t[i]<t[a[j]]){
            // cout<<i;
            a[j]=i;
        }
       }
   }
  c[0]=0;
   for(int i=1;i<=n;i++){
     ans+=c[a[i]];
   }
   cout<<ans<<endl;
     
    return 0;

}