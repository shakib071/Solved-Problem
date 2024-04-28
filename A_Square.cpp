#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    vector<int>x(4);
    vector<int>y(4);
    for(int i=0;i<4;i++){
        cin>>x[i]>>y[i];
    } 
    int temp;
    for(int i=1;i<4;i++){
       if(x[0]==x[i]){
        temp=i;
        break;
       }
    }
    int ans=(y[0]-y[temp])*(y[0]-y[temp]);
    cout<<ans<<endl;
   }
     
    return 0;

}