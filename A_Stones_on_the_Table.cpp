#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int n;
     cin>>n;
     string s;
     cin>>s;
     int count=0;
     for(int i=1;i<n;){
         if(s[i]==s[i-1]){
            char ss=s[i-1];
            while(s[i]==ss && i<n){
                count++;
            
                i++;
            }
         }
         else i++;
     }
     cout<<count<<endl;
    return 0;

}