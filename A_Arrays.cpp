#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int na,nb;
     cin>>na>>nb;
     int k,m;
     cin>>k>>m;
     vector<int>a(na);
     vector<int>b(nb);

     for(int i=0;i<na;i++){
        cin>>a[i];
     }
     for(int i=0;i<nb;i++){
        cin>>b[i];
     }
     int a_val=a[k-1];
    //  cout<<a_val<<endl;
    int b_size=nb-1;
    bool ans=true;
      while(m--){
          if(b[b_size]<=a_val){
            ans=false;
            break;
          }
          b_size--;
      }

      if(ans)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
     
     
    return 0;

}