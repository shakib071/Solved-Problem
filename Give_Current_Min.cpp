#include<bits/stdc++.h>
using namespace std;

int main(){
     
    priority_queue<int,vector<int>,greater<int>>pq;
   
   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    int xx;
    cin>>xx;
    pq.push(xx);
   }
   int q;
   cin>>q;
   while(q--){
      int qr;
      cin>>qr;
      if(qr==0){
        int x;
        cin>>x;
        pq.push(x);
     if(!pq.empty()){
     cout<<pq.top()<<endl;
      }
      else {
        cout<<"Empty"<<endl;
      }
    
      }
     else if(qr==1){
      if(!pq.empty()){
     cout<<pq.top()<<endl;
      }
      else {
        cout<<"Empty"<<endl;
      }
     
      }
      else if(qr==2){
       if(!pq.empty()) pq.pop();
      if(!pq.empty()){
       cout<<pq.top()<<endl;
       }
        else {
        cout<<"Empty"<<endl;
       }
      }
   }
     
    return 0;

}