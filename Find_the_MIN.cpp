#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(false);
 cin.tie(NULL);

  priority_queue<ll, vector<ll>, greater<ll>> pq;

   ll q;
   cin>>q;
   while(q--){
    ll x;
    cin>>x;
    if(x==1){
      ll data;
      cin>>data;
      pq.push(data);
    }
    if(x==2){
      if(pq.empty()){
        cout<<"empty\n";
      }
      else{
        ll val=pq.top();
        cout<<val<<"\n";
        while(pq.top()==val && !pq.empty()){
            pq.pop();
        }
      }
    }
   }

     
     
    return 0;

}