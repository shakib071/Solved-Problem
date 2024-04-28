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

     vector<int>v(n);
     map<int,int>mp;
     
     for(int i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
     } 

     sort(v.begin(),v.end());
     bool div=true;
     for(int i=1;i<n;i++){
      if(v[i]%v[0]!=0){
        div= false;
        break;
      }
     }

     if( div==true and mp[v[0]]>1){
        cout<<"NO"<<endl;
     }
     else {
        cout<<"YES"<<endl;
     }
    

 }
    return 0;

}