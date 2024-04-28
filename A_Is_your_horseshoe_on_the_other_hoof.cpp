#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int s1,s2,s3,s4;  
   cin>>s1>>s2>>s3>>s4;
   map<int,int>mp;
   mp[s1]++;
   mp[s2]++;
   mp[s3]++;
   mp[s4]++;
   ll count=0;
   if(mp[s1]>1){
     count+=(mp[s1]-1);
     mp[s1]=1;
   }
   if(mp[s2]>1){
     count+=(mp[s2]-1);
     mp[s2]=1;
   }
   if(mp[s3]>1){
     count+=(mp[s3]-1);
     mp[s3]=1;
   }
   if(mp[s4]>1){
     count+=(mp[s4]-1);
     mp[s4]=1;
   }
   cout<<count<<endl;
     
    return 0;

}