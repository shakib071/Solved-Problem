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
    int sum=0;
    for(int i=0,x;i<n;i++){
        cin>>x;
        sum+=abs(x);
    }
    cout<<sum<<endl;
   }  
     
    return 0;

}