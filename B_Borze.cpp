#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   map<char,int>mp;
   mp['.'] =1;
   mp['- ']=2;

   string s;
   cin>>s;

   vector<int>ans;

   for(int i=0;i<s.size();){
    if(s[i]=='.'){
        ans.push_back(0);
        i++;
    }
    if(s[i]=='-'){
        if(s[i+1]=='.'){
            ans.push_back(1);
        }
        else{
            ans.push_back(2);
        }
        i+=2;
    }
   }

   for(int i=0;i<ans.size();i++){
    cout<<ans[i];
   }
     
    return 0;

}