#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string ans="";
   string s1,s2;
   cin>>s1>>s2;
    
    forn(s1.size()){
        if(s1[i]!=s2[i]){
            ans+='1';
        }
        else{

            ans+='0';
        }
    }
    cout<<ans<<endl;
     
    return 0;

}