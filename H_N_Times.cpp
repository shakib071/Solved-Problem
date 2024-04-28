#include<bits/stdc++.h>
using namespace std;

int main(){
     
   int t,n;
   char c;
   cin>>t;

   while(t--){
    cin>>n>>c;
    int p=n;
    while(p--){
        cout<<c<<" ";
    }
    cout<<endl;
   }  
     
    return 0;

}