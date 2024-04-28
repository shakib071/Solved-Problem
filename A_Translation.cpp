#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string s,s1;
   cin>>s>>s1;

   reverse(s1.begin(),s1.end());
   if(s==s1){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

     
    return 0;

}