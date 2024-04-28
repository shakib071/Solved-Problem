#include<bits/stdc++.h>
using namespace std;

bool even_odd(int n){
  if(n%2==0) return true;
  return false;
}

int main(){
     
     int t,n;
     cin>>t;
     while(t--){
        cin>>n;
     if(even_odd(n)==true){
     cout<<"0 "<<n/2<<" "<<n/2<<endl;
     }
     else{
        cout<<"-1"<<endl;
     }
     }
     
    return 0;

}