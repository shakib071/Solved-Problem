#include<bits/stdc++.h>
using namespace std;

int main(){
     
   vector<int>v;

   int n;
   cin>>n;

   int a[n],b[n];

   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   for(int i=0;i<n;i++){
    cin>>b[i];
    v.push_back(b[i]);
   }

    for(int i=0;i<n;i++){
    v.push_back(a[i]);
   }
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }

     
    return 0;

}