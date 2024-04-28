#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

vector<bool>prime(55,true);

void seive(){
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<54;i++){
        if(prime[i]==true){
           for(int j=i*i;j<54;j+=i){
            prime[j]=false;
           }
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     seive();
// forn(54){
//     cout<<i<<prime[i]<<endl;
// }

   int n,m;
   cin>>n>>m;
   
    
    for(int i=n+1;i<m;i++){
        if(prime[i]){
            cout<<"NO"<<endl;
            return 0;
            
        }
    }
    if(prime[m]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   
    return 0;

}
