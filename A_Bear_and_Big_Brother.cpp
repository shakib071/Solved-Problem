#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll a,b;
   cin>>a>>b;

   int count=0;

   while(a<=b){
    a=a*3;
    b=b*2;
    count++;
   }  
   cout<<count<<endl;
     
    return 0;

}