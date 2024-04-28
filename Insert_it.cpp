#include<bits/stdc++.h>
using namespace std;

int main(){
     
     vector<int>v;

     int n,m,x;
     cin>>n;

     int a[n];

     for(int i=0;i<n;i++){
        cin>>a[i];
     }

     cin>>m;
     int b[m];
     
      for(int i=0;i<m;i++){
        cin>>b[i];
     }
     
     cin>>x;

     for(int i=0;i<n;i++){

        if(i==x){
            for(int j=0;j<m;j++){
                v.push_back(b[j]);
            }
            
        }

        v.push_back(a[i]);
     }

     if(x==n){
        for(int i=0;i<m;i++) v.push_back(b[i]);
     } 
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }

     
    return 0;

}