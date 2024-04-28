#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// void solve(){
//     int n;
//     cin>>n;
//    vector<pair<int,int>>ans;
   
//     if(n%2==0){
//         int left=1,right=6;
//         int count=0;
//       while(n){
//        ans.push_back({left,right});
//        n=n-2;
//        left+=6;
//        right+=6;
//        count++;
//       }
//       cout<<count<<endl;
//       for(auto val : ans){
//         cout<<val.first<<" "<<val.second<<endl;
//       }
//     }
//     else{
//        int left=1,right=2;
//        int count=1;
//        ans.push_back({left,right});
//        n=n-1;
//        right=3;
//        cout<<n<<endl;
//        while(n){
//        n=n-2;
//        left+=6;
//        right+=6;
//         ans.push_back({left,right});
//        count++;
//        }
//        cout<<count<<endl;

//       for(auto val : ans){
//         cout<<val.first<<" "<<val.second<<endl;
//       }
//     }
// }

void solve(){
    int n;
    cin>>n;
    cout<<n/2+n%2<<endl;

    int l=1,r=3*n;
    while(l<r){
        cout<<l<<" "<<r<<endl;
        l+=3;
        r-=3;
    }
}



int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   int t;
   cin>>t;
   while(t--){
    solve();
   }  
     
    return 0;

}