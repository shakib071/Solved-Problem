#include<bits/stdc++.h>
using namespace std;

int main(){
     
   string s;
   int t,n;
   cin>>t;

   while(t--){
    cin>>n;
    cin>>s;
    if(n!=5){
        cout<<"NO"<<endl;
    }
    else{
       sort(s.begin(),s.end());
       if(s=="Timru"){
        cout<<"YES"<<endl;
       } 
       else cout<<"NO"<<endl;
    }
   }  
     
    return 0;

}