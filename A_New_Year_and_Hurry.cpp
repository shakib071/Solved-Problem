#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n,k;
   cin>>n>>k;
   int time=(4*60)-k;

   int i=5,count=0;
   while(time>=i && count<n){
     count++;
     time-=i;
     i+=5;
   }  

   cout<<count<<endl;
     
    return 0;

}