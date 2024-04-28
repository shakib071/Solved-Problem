#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
   vector<int>v;
   int max=INT_MIN,min=INT_MAX;
   int maxindex=-1,minindex=-1;
   for(int i=0,x;i<n;i++){
      cin>>x;
      if(max<x){
        max=x;
        maxindex=i;
      }
      if(min>=x){
        min=x;
        minindex=i;
      }
   }  
  if(maxindex>minindex){
    // cout<<maxindex<<minindex<<endl;
   int cost=maxindex+n-2-minindex;
//    cout<<1<<endl;
   cout<<cost<<endl;
  }
  else{
    int cost=maxindex+(n-1-minindex);
    // cout<<2<<endl;
    cout<<cost<<endl;
  }
    return 0;

}