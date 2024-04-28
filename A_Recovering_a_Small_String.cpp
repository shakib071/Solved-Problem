#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(int n){
  string s="zzz";  
  if(n<=28){
    s[0]='a';
    s[1]='a';
    int nn=n-3;
    s[2]=char(nn+'a');

  }
  else if(n<=53){
    s[0]='a';
    s[2]='z';
    int nn=n-28;
    s[1]=char(nn+'a');
  }
  else{
    s[1]='z';
    s[2]='z';
    int nn=n-53;
    s[0]=char(nn+'a');
  }
      cout<<s<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
 
   solve(n);
   }
    return 0;

}