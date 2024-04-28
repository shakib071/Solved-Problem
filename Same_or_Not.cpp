#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int>a;
    queue<int>b;
     
   int n,m;
   cin>>n>>m;

   if(n!=m) {
    cout<<"NO"<<endl;
    return 0;
   }
   
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push(x);
   }
    for(int i=0;i<m;i++){
    int x;
    cin>>x;
    b.push(x);
   }

   for(int i=0;i<n;i++){
     if(a.top() != b.front()){
        cout<<"NO"<<endl;
        return 0;
    }
    a.pop();
    b.pop();
   }
   cout<<"YES"<<endl;
     
    return 0;

}