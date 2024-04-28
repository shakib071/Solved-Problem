#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int a,b;
   char s;
   cin>>a>>s>>b;
   if(s=='+'){
    cout<<a+b<<endl;
   }
   else if(s=='-')cout<<a-b<<endl;
   else if(s=='*')cout<<a*b<<endl;
   else cout<<a/b<<endl;
     
    return 0;

}