#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
   string s;
   cin>>s;
//    cout<<s<<endl;  
   int countA=0,countB=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='A') countA++;
    else countB++;
   }
   if(countA==countB){
    cout<<"Friendship"<<endl;
   }
   else if(countA>countB){
    cout<<"Anton"<<endl;
   }
   else cout<<"Danik"<<endl;
     
    return 0;

}