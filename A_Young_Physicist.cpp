#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int x,y,z,n;
     cin>>n;
     int sumx=0,sumy=0,sumz=0;
     while(n--){
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
     }

     if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;
     
    return 0;

}