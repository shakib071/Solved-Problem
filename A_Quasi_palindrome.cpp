#include<bits/stdc++.h>
using namespace std;

int main(){
     
    string s;
    cin>>s;
    // cout<<s;
    int end=s.size()-1;
    // cout<<end<<endl;

    while(s[end]=='0'){
        end--;
    }
    int n=end+1;
    bool ans=true;
    for(int i=0;i<(n/2);i++){
        if(s[i]!=s[n-1-i]) ans=false;
    }

    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     
    return 0;

}