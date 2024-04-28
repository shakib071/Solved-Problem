#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int> data(n);
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    sort(data.begin(),data.end());
    int ii=data[0],kk=data[1];
    int l=data[n-2],jj=data[n-1];
    // cout<<ii<<jj<<kk<<l<<endl;
    int ans=abs(ii-jj)+abs(jj-kk)+abs(kk-l)+abs(l-ii);
    cout<<ans<<endl;
   }  
     
    return 0;

}