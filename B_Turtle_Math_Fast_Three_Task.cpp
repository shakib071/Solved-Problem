#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    map<int,int>mp;
    int sum=0;
    for(int i=0,x;i<n;i++){
        cin>>x;
        mp[x]++;
        sum+=x;
    }
    if(sum%3==0){
        cout<<0<<endl;
    }
    else if(sum%3==1){
        bool one=false;
        for(int i=1;i<=10000;i=i+3){
            
            if(mp[i]){
                one=true;
                
                break;
            }
        }
        if(one)cout<<1<<endl;
        else cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
   }  
     
    return 0;

}