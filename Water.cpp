#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
      int t;
      cin>>t;

      while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());

        if(v[n-1].second<v[n-2].second){
            cout<<v[n-1].second<<" "<<v[n-2].second<<endl;

        }
        else{
            cout<<v[n-2].second<<" "<<v[n-1].second<<endl;
        }
      }
     
     
    return 0;

}