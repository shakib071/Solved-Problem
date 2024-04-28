#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N=200005;
int ans[N];

int digitsum(int p){
    int s=0;
    while(p){
      s+=(p%10);
      p/=10;
    }
    return s;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
    //  cout<<digitsum(12);
   ans[0]=0;

   for(int i=1;i<N;i++){
    ans[i]=ans[i-1]+digitsum(i);
   }

  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    cout<<ans[x]<<endl;
  }

 

    return 0;

}