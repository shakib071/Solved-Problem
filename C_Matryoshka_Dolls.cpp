#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
     ll s,x;
     cin>>s>>x;
     ll n=s,count=0;

     while(n){
       count++;
       n/=x;
     }
     cout<<count<<endl;
     
    return 0;

}