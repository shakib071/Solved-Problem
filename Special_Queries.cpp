#include<bits/stdc++.h>
using namespace std;

int main(){
     
     queue<string>q;

     int t,qq;
     string s;
     cin>>t;

     while(t--){
       cin>>qq;
       if(qq==0){
         cin>>s;
         q.push(s);
       }
       else{
        if(q.empty()){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<q.front()<<endl;
            q.pop();
        }
       }
     }
     
    return 0;

}