#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
   int a,count=1;
   cin>>a;
   int mod=a%2;
   n--;
   while(n){
      cin>>a;
    
      if(a%2!=mod){
        count++;
        mod=a%2;
       
      }
      n--;
      
     
   }
   cout<<count<<endl;

     
    return 0;

}