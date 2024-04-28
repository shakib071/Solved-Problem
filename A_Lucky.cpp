#include<bits/stdc++.h>
using namespace std;

int main(){
     int t,n;
     cin>>t;
     while(t--){
     string s;
     cin>>s;
     int ln=s.size();
     if(ln<6){
        cout<<"NO"<<endl;
     }
     else{
        int sum1=s[0]+s[1]+s[2];
        int sum2=s[ln-1]+s[ln-2]+s[ln-3];
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
  
     }
    return 0;

}